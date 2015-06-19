#define _GNU_SOURCE

#include <arpa/inet.h>
#include <linux/if.h>
#include <linux/if_ether.h>
#include <netinet/ether.h>
#include <netinet/in.h>
#include <sys/ioctl.h>
#include <sys/socket.h>

#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "Maxfiles.h"
#include <MaxSLiCInterface.h>

typedef struct XTPPacket_s
{
	uint8_t type;
	uint8_t chain;
	uint8_t fttype;
	uint8_t padding1;
	uint16_t contentLength;
	uint16_t padding2;
	uint32_t subjectID;
	uint32_t tid;
	uint32_t commPhaseNo;
	uint32_t sequenceNo;
	uint32_t frontSeqNo;
	uint32_t requestID;
	uint32_t sessionID;
	uint16_t frontID;
	uint16_t padding3;
	uint32_t groupID;
	uint32_t oldSubjectID;
	uint32_t convergenceID;
	uint32_t oldSequenceNo;
	uint16_t pubNodeID;
	uint16_t riskID;
	uint16_t matchID;
	uint16_t padding4;
	uint32_t errorID;

	uint8_t content[128];


}XTPPacket_t;

void printXTPPacket(const XTPPacket_t *xtpPacket)
{
	printf("------------------XTP Packet Start---------------------------\n");
	printf("Type: %#x\n", xtpPacket->type);
	printf("Chain: %#x\n", xtpPacket->chain);
	printf("FTType: %#x\n", xtpPacket->fttype);
	printf("Padding1: %#x\n", xtpPacket->padding1);
	printf("ContentLength: %x\n", xtpPacket->contentLength);
	printf("Padding2: %#x\n", xtpPacket->padding2);
	printf("SubjectID: %#010x\n", xtpPacket->subjectID);
	printf("Tid: %#010x\n", xtpPacket->tid);
	printf("CommPhaseNo: %#010x\n", xtpPacket->commPhaseNo);
	printf("SequenceNo: %#010x\n", xtpPacket->sequenceNo);
	printf("FrontSeqNo: %#010x\n", xtpPacket->frontSeqNo);
	printf("RequestID: %#010x\n", xtpPacket->requestID);
	printf("SessionID: %#010x\n", xtpPacket->sessionID);
	printf("FrontID: %#x\n", xtpPacket->frontID);
	printf("Padding3: %#x\n", xtpPacket->padding3);
	printf("GroupID: %#010x\n", xtpPacket->groupID);
	printf("OldSubjectID: %#010x\n", xtpPacket->oldSubjectID);
	printf("ConvergenceID: %#010x\n", xtpPacket->convergenceID);
	printf("OldSequenceID: %#010x\n", xtpPacket->oldSequenceNo);
	printf("PubNodeID: %#x\n", xtpPacket->pubNodeID);
	printf("RiskID: %#x\n", xtpPacket->riskID);
	printf("MatchID: %#x\n", xtpPacket->matchID);
	printf("Padding4: %#x\n", xtpPacket->padding4);
	printf("ErrorID: %#010x\n", xtpPacket->errorID);
	//printf("content:%s\n", xtpPacket->content);
	printf("Content:");
	for(int i = 0; i < xtpPacket->contentLength; i ++)
	{
		printf("%02x ", xtpPacket->content[i]);
	}
	printf("\n");
	printf("------------------XTP Packet Finish--------------------------\n");
}

int main(int argc, char *argv[]) {
	if(argc < 3) {
		printf("Usage: $0 dfe_ip remote_ip\n");
		return 1;
	}

	struct in_addr dfe_ip;
	inet_aton(argv[1], &dfe_ip);
	struct in_addr remote_ip;
	inet_aton(argv[2], &remote_ip);
	struct in_addr netmask;
	inet_aton("255.255.255.0", &netmask);
	const int port = 45678;

//	struct in_addr mcastaddr;
//	inet_aton("224.0.0.1", &mcastaddr);

	max_file_t *maxfile = MarketDataServer_init();
	max_engine_t * engine = max_load(maxfile, "*");

	max_config_set_bool(MAX_CONFIG_PRINTF_TO_STDOUT, true);

	max_actions_t *actions = max_actions_init(maxfile, NULL);

	max_run(engine, actions);
	max_actions_free(actions);


	void *buffer;
	size_t bufferSize = 4096 * 512;
	posix_memalign(&buffer, 4096, bufferSize);

	max_framed_stream_t *toCpu = max_framed_stream_setup(engine, "toCPU", buffer, bufferSize, -1);

	max_ip_config(engine, MAX_NET_CONNECTION_CH2_SFP1, &dfe_ip, &netmask);
	max_udp_socket_t *dfe_socket = max_udp_create_socket(engine, "udpTopPort1");
//	max_ip_multicast_join_group(engine, MAX_NET_CONNECTION_QSFP_TOP_10G_PORT1, &mcastaddr);
//	max_udp_bind_ip(dfe_socket, &mcastaddr, port);
	max_udp_bind(dfe_socket, port);
	max_udp_connect(dfe_socket, &remote_ip, 0);

	printf("Listening on %s port %d\n", argv[1], port);

	printf("Waiting for kernel response...\n");
	fflush(stdout);

	void *f;
	size_t fsz;
	size_t numMessageRx = 0;
	XTPPacket_t xtpPacket;
	memset(&xtpPacket, '\0', sizeof(XTPPacket_t));
	printf("CPU, sizeof(XTPPacket_t):%d\n", sizeof(XTPPacket_t));
	while (1) {
		if (max_framed_stream_read(toCpu, 1, &f, &fsz) == 1) {
			numMessageRx++;

			printf("CPU: Got output frame %zd - size %zd bytes\n", numMessageRx, fsz);

			uint8_t *w = f;
//			for (size_t i=0; i < 68; i++)
//			{
//				printf("Frame [%zd] Word[%zd]: 0x%02x\n", numMessageRx, i, w[i]);
//				//printf("Frame [%zd] Word[%zd]: %d\n", numMessageRx, i, w[i]);
//			}
			memcpy(&xtpPacket, w, sizeof(XTPPacket_t));
			//printXTPPacket(&xtpPacket);
			max_framed_stream_discard(toCpu, 1);
		} else
		{
			usleep(10);
		}
	}

//	max_ip_multicast_leave_group(engine, MAX_NET_CONNECTION_QSFP_TOP_10G_PORT1, &mcastaddr);
	max_udp_close(dfe_socket);
	max_unload(engine);
	max_file_free(maxfile);

	printf("Done.\n"); fflush(stdout);
	return 0;
}
