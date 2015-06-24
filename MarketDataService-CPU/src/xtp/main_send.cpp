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
#include <unistd.h>

#include <cstdlib>
#include <algorithm>
#include <boost/timer/timer.hpp>
#include <boost/foreach.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>
#include "XTPHeader.h"
#include "logger.h"
#include "cmdParser.h"
#include "Param.h"
#include "XTPReader.h"
#include "TID.h"
#include "FieldDefine.h"

namespace tid {
  const int first_xtp = 0;
  const int second_xtp = 1;
  const int first_order = 4408;
  const int second_order = 4411;
  const int first_trade = 4413;
  const int last_package = 157618;
  const int first_timeout_after_order = 43897;

  const int testing_id = 4432;
}

int create_socket(struct in_addr *remote_ip, int port) {
  int sock = socket(AF_INET, SOCK_DGRAM, 0);

  struct sockaddr_in sockaddr;
  memset(&sockaddr, 0, sizeof(sockaddr));
  sockaddr.sin_family = AF_INET;
  sockaddr.sin_port = htons(port);

  if (bind(sock, (struct sockaddr *)&sockaddr, sizeof(sockaddr)) != 0) {
    printf("Bind failed: %s\n", strerror(errno));
    exit(1);
  }

  sockaddr.sin_addr = *remote_ip;
    connect(sock, (const struct sockaddr*) &sockaddr, sizeof(sockaddr));

  return sock;
}


void sendFrames(int sock, const XTPPackage &xtp) {

  const int MAX_BUF_SIZE = 4096;
  char buffer[MAX_BUF_SIZE];
  char *pbuffer = buffer;

  /// copy header to buffer
  const XTPHeader &header = xtp.getHeader();

  const int expectedHeaderSize = 68;
  assert(sizeof(header) == expectedHeaderSize);
  std::memcpy(pbuffer, &header, expectedHeaderSize);
  pbuffer += expectedHeaderSize;

  /// copy content to buffer
  uint16_t contentLen = header.ContentLength;
  big_to_little_endian_converter()(contentLen);

  DEBUG() << "contentLen: " << contentLen;

  const char *pcontent = xtp.getContent();
  std::memcpy(pbuffer, pcontent, contentLen);

  const int totalSize = expectedHeaderSize + contentLen;
  send(sock, buffer, totalSize, MSG_WAITALL);

}

void sendUpTo(int socket, boost::shared_ptr<XTPReader> xtpReader, int n) {
  std::vector<XTPPackage> xtps = xtpReader->readTo(n);
    DEBUG() << "xtp size: " << xtps.size();

    int count = 0;
    BOOST_FOREACH(XTPPackage &xtp, xtps) {

      /// send current xtp package
      sendFrames(socket, xtp);

      /// print the message locally
      DEBUG();
      DEBUG() << format("ID[%d]") % count++;

      XTPHeader header = xtp.getHeader();
      boost::fusion::for_each(header, big_to_little_endian_converter());
      header.print();

      TID *tid = createTid(header);
      if (tid == NULL) {
        WARNING() << format("[WARNING]: cannot find find tid: %#010x") % xtp.getHeader().Tid;
      }
      tid->read(xtp.getContent());
      tid->print();

      //tid->process();

      delete tid;
    }
}


void sendIndex(int socket, boost::shared_ptr<XTPReader> xtpReader, int idx) {
  XTPPackage xtp = xtpReader->readAt(idx);

  sendFrames(socket, xtp);

  // print the message locally
  DEBUG();

  XTPHeader header = xtp.getHeader();
  boost::fusion::for_each(header, big_to_little_endian_converter());
  header.print();

  TID *tid = createTid(header);
  if (tid == NULL) {
    WARNING() << format("[WARNING]: cannot find find tid: %#010x") % xtp.getHeader().Tid;
  }
  tid->read(xtp.getContent());
  tid->print();

  //tid->process();

  delete tid;
}


#define STRUCT_OFFSET(s,y) (&((s*)0)->y)

int main(int argc, char **argv) {
  boost::timer::auto_cpu_timer t;

  /// set logger
  Logger::instance().init("send");

  /// get command line arguments
  CMDParser cmdPaser(argc, argv);

  /// read configuration file
  Param config;
  config.read(cmdPaser.getParfilePath());

  int remotePort = 45678;
  struct in_addr remote_ip;
  inet_aton("169.254.10.2", &remote_ip);
  int mySocket = create_socket(&remote_ip, remotePort);

  INFO() << "Print the configuration:";
  config.print();

  /*sendIndex(mySocket, boost::make_shared<XTPReader>(config.getInDataPath()), 0);//comm phase pkt*/
  //sendIndex(mySocket, boost::make_shared<XTPReader>(config.getInDataPath()), 1);//exchange data start
  //sendIndex(mySocket, boost::make_shared<XTPReader>(config.getInDataPath()), 2);//exchange data end
  //sendIndex(mySocket, boost::make_shared<XTPReader>(config.getInDataPath()), 2872);//settlement start pkt
  //sendIndex(mySocket, boost::make_shared<XTPReader>(config.getInDataPath()), 4086);//tid = 0x00005001
  /*sendIndex(mySocket, boost::make_shared<XTPReader>(config.getInDataPath()), 4085); //settlement end pkt*/
  sendIndex(mySocket, boost::make_shared<XTPReader>(config.getInDataPath()), 4432); // tid = 0x00005201, ntforder

  INFO()<<format("sizeof(COrderField) = %d") % sizeof(COrderField);
  /*
   *INFO()<<format("offset InstrumentID = %d") % STRUCT_OFFSET(COrderField, InstrumentID);
   *INFO()<<format("offset OrderSysID = %d") % STRUCT_OFFSET(COrderField, OrderSysID);
   *INFO()<<format("offset OrderStatus = %d") % STRUCT_OFFSET(COrderField, OrderStatus);
   */

  printf("Offset of InstrumentID = %d\n", STRUCT_OFFSET(COrderField, InstrumentID));
  printf("Offset of OrderSysID = %d\n", STRUCT_OFFSET(COrderField, OrderSysID));
  printf("Offset of OrderStatus = %d\n", STRUCT_OFFSET(COrderField, OrderStatus));
  INFO() << "program exit normally";
  return 0;
}
