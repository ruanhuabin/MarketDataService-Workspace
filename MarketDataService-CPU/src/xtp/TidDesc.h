#ifndef TIDDESC_H_VAKBWPMZ
#define TIDDESC_H_VAKBWPMZ

#include <boost/integer.hpp>

typedef boost::uint32_t DWORD;

//�ղ���
const DWORD TID_Nop=0x00000009;
//����Ӧ��
const DWORD TID_RspError=0x00000001;
//�û���¼����
const DWORD TID_ReqUserLogin=0x00001001;
//�û���¼Ӧ��
const DWORD TID_RspUserLogin=0x00001002;
//�û��˳�����
const DWORD TID_ReqUserLogout=0x00001003;
//�û��˳�Ӧ��
const DWORD TID_RspUserLogout=0x00001004;
//����¼������
const DWORD TID_ReqOrderInsert=0x00001005;
//����¼��Ӧ��
const DWORD TID_RspOrderInsert=0x00001006;
//������������
const DWORD TID_ReqOrderAction=0x00001007;
//��������Ӧ��
const DWORD TID_RspOrderAction=0x00001008;
//����¼������
const DWORD TID_ReqQuoteInsert=0x00001009;
//����¼��Ӧ��
const DWORD TID_RspQuoteInsert=0x0000100A;
//���۲�������
const DWORD TID_ReqQuoteAction=0x0000100B;
//���۲���Ӧ��
const DWORD TID_RspQuoteAction=0x0000100C;
//OTC����¼������
const DWORD TID_ReqOTCOrderInsert=0x0000100D;
//OTC����¼��Ӧ��
const DWORD TID_RspOTCOrderInsert=0x0000100E;
//�û������޸�����
const DWORD TID_ReqUserPasswordUpdate=0x0000100F;
//�û������޸�Ӧ��
const DWORD TID_RspUserPasswordUpdate=0x00001010;
//ִ������¼������
const DWORD TID_ReqExecOrderInsert=0x00001011;
//ִ������¼��Ӧ��
const DWORD TID_RspExecOrderInsert=0x00001012;
//ִ�������������
const DWORD TID_ReqExecOrderAction=0x00001013;
//ִ���������Ӧ��
const DWORD TID_RspExecOrderAction=0x00001014;
//������¼������
const DWORD TID_ReqAdminOrderInsert=0x00001015;
//������¼��Ӧ��
const DWORD TID_RspAdminOrderInsert=0x00001016;
//��ϱ���¼������
const DWORD TID_ReqCombOrderInsert=0x00001017;
//��ϱ���¼��Ӧ��
const DWORD TID_RspCombOrderInsert=0x00001018;
//��������������
const DWORD TID_ReqBulletin=0x00002005;
//��������������Ӧ��
const DWORD TID_RspBulletin=0x00002006;
//��Լ����״̬�ı�����
const DWORD TID_ReqInstrumentStatusUpdate=0x00002007;
//��Լ����״̬�ı�Ӧ��
const DWORD TID_RspInstrumentStatusUpdate=0x00002008;
//ǿ���û��˳�����
const DWORD TID_ReqForceUserExit=0x0000200B;
//ǿ���û��˳�Ӧ��
const DWORD TID_RspForceUserExit=0x0000200C;
//�û��Ựɾ������
const DWORD TID_ReqForceUserLogout=0x0000200D;
//�û��Ựɾ��Ӧ��
const DWORD TID_RspForceUserLogout=0x0000200E;
//����������ͬ��״̬�ı�����
const DWORD TID_ReqExchangeDataSyncStatusUpdate=0x00002013;
//����������ͬ��״̬�ı�Ӧ��
const DWORD TID_RspExchangeDataSyncStatusUpdate=0x00002014;
//����������ͬ��״̬�ı�����
const DWORD TID_ReqSGDataSyncStatusUpdate=0x00002015;
//����������ͬ��״̬�ı�Ӧ��
const DWORD TID_RspSGDataSyncStatusUpdate=0x00002016;
//����������ͬ������
const DWORD TID_ReqExchangeDataSync=0x00002801;
//����������ͬ��Ӧ��
const DWORD TID_RspExchangeDataSync=0x00002802;
//����������ͬ������
const DWORD TID_ReqSgDataSync=0x00002803;
//����������ͬ��Ӧ��
const DWORD TID_RspSgDataSync=0x00002804;
//��������Ϣ����
const DWORD TID_ReqInformation=0x00002805;
//������������ϢӦ��
const DWORD TID_RspInformation=0x00002806;
//ǰ��״̬��������
const DWORD TID_ReqFrontStatus=0x00009001;
//ǰ��״̬����Ӧ��
const DWORD TID_RspFrontStatus=0x00009002;
//���״̬��������
const DWORD TID_ReqRiskStatus=0x00009003;
//���״̬����Ӧ��
const DWORD TID_RspRiskStatus=0x00009004;
//����ű�����
const DWORD TID_ReqRiskBeacon=0x00009013;
//����ű�Ӧ��
const DWORD TID_RspRiskBeacon=0x00009014;
//��Ϸ�����ʼ��
const DWORD TID_InitMatchGroup=0x00009005;
//��ط�����ʼ��
const DWORD TID_InitRiskGroup=0x00009006;
//������Ϣ��ʼ��
const DWORD TID_InitGroupsInfo=0x00009007;
//���Ԥ�����ʼ��
const DWORD TID_InitRiskPreFrozen=0x00009018;
//�����ݻش���ʼ����
const DWORD TID_ReqFlowRelayStart=0x00009008;
//�����ݻش���������
const DWORD TID_ReqFlowRelayEnd=0x00009009;
//�����ݻش���ʼ����Ӧ��
const DWORD TID_RspFlowRelayStart=0x0000900A;
//�����ݻش���������Ӧ��
const DWORD TID_RspFlowRelayEnd=0x0000900B;
//��Ա�ʽ��ѯ����
const DWORD TID_ReqQryPartAccount=0x00004001;
//��Ա�ʽ��ѯӦ��
const DWORD TID_RspQryPartAccount=0x00004002;
//������ѯ����
const DWORD TID_ReqQryOrder=0x00004003;
//������ѯӦ��
const DWORD TID_RspQryOrder=0x00004004;
//���۲�ѯ����
const DWORD TID_ReqQryQuote=0x00004005;
//���۲�ѯӦ��
const DWORD TID_RspQryQuote=0x00004006;
//�ɽ�����ѯ����
const DWORD TID_ReqQryTrade=0x00004007;
//�ɽ�����ѯӦ��
const DWORD TID_RspQryTrade=0x00004008;
//��Ա�ͻ���ѯ����
const DWORD TID_ReqQryClient=0x00004009;
//��Ա�ͻ���ѯӦ��
const DWORD TID_RspQryClient=0x0000400A;
//��Ա�ֲֲ�ѯ����
const DWORD TID_ReqQryPartPosition=0x0000400B;
//��Ա�ֲֲ�ѯӦ��
const DWORD TID_RspQryPartPosition=0x0000400C;
//�ͻ��ֲֲ�ѯ����
const DWORD TID_ReqQryClientPosition=0x0000400D;
//�ͻ��ֲֲ�ѯӦ��
const DWORD TID_RspQryClientPosition=0x0000400E;
//��Լ��ѯ����
const DWORD TID_ReqQryInstrument=0x0000400F;
//��Լ��ѯӦ��
const DWORD TID_RspQryInstrument=0x00004010;
//��Լ����״̬��ѯ����
const DWORD TID_ReqQryInstrumentStatus=0x00004011;
//��Լ����״̬��ѯӦ��
const DWORD TID_RspQryInstrumentStatus=0x00004012;
//����������ͬ��״̬��ѯ����
const DWORD TID_ReqQrySGDataSyncStatus=0x00004013;
//����������ͬ��״̬��ѯӦ��
const DWORD TID_RspQrySGDataSyncStatus=0x00004014;
//��ֵ��Ȳ�ѯ
const DWORD TID_ReqQryHedgeVolume=0x00004015;
//��ֵ���Ӧ��
const DWORD TID_RspQryHedgeVolume=0x00004016;
//��ϱ�����ѯ����
const DWORD TID_ReqQryCombOrder=0x00004017;
//��ϱ�����ѯӦ��
const DWORD TID_RspQryCombOrder=0x00004018;
//��ͨ�����ѯ����
const DWORD TID_ReqQryMarketData=0x00004101;
//��ͨ�����ѯӦ��
const DWORD TID_RspQryMarketData=0x00004102;
//�����������ѯ����
const DWORD TID_ReqQryBulletin=0x00004103;
//�����������ѯӦ��
const DWORD TID_RspQryBulletin=0x00004104;
//�û����߲�ѯ����
const DWORD TID_ReqQryUserSession=0x000043D1;
//�û����߲�ѯӦ��
const DWORD TID_RspQryUserSession=0x000043D2;
//�û���ѯ����
const DWORD TID_ReqQryUser=0x000043D3;
//�û���ѯӦ��
const DWORD TID_RspQryUser=0x000043D4;
//��Ա��ѯ����
const DWORD TID_ReqQryParticipant=0x000043D5;
//��Ա��ѯӦ��
const DWORD TID_RspQryParticipant=0x000043D6;
//��Լ��λ��ѯ
const DWORD TID_ReqQryMBLMarketData=0x000043E1;
//��Լ��λ��ѯӦ��
const DWORD TID_RspQryMBLMarketData=0x000043E2;
//��Ϣ��ѯ
const DWORD TID_ReqQryInformation=0x000043E3;
//��Ϣ��ѯӦ��
const DWORD TID_RspQryInformation=0x000043E4;
//������״̬��ѯ
const DWORD TID_ReqQryExchangeStatus=0x00004801;
//������״̬Ӧ��
const DWORD TID_RspQryExchangeStatus=0x00004802;
//����������ͬ��״̬��ѯ
const DWORD TID_ReqQryExchangeDataSyncStatus=0x00004803;
//����������ͬ��״̬Ӧ��
const DWORD TID_RspQryExchangeDataSyncStatus=0x00004804;
//������״̬��ѯ
const DWORD TID_ReqQrySettlementGroupStatus=0x00004811;
//������״̬Ӧ��
const DWORD TID_RspQrySettlementGroupStatus=0x00004812;
//�����޶��ѯ����
const DWORD TID_ReqQryCreditLimit=0x00004813;
//�����޶��ѯӦ��
const DWORD TID_RspQryCreditLimit=0x00004814;
//�ʽ��ʻ����
const DWORD TID_DbAccountDeposit=0x00003001;
//�������к�Լ״̬
const DWORD TID_DbUpdateAllInstrumentStatus=0x00003002;
//���ӿͻ�
const DWORD TID_DbInsClient=0x00003021;
//�޸Ŀͻ�
const DWORD TID_DbUpdClient=0x00003022;
//���ӻ�Ա�ͻ���ϵ
const DWORD TID_DbInsPartClient=0x00003024;
//ɾ����Ա�ͻ���ϵ
const DWORD TID_DbDelPartClient=0x00003025;
//���ӻ�Ա��Լ�ֲ��޶�
const DWORD TID_DbInsCurrPartPosiLimitDetail=0x00003031;
//�޸Ļ�Ա��Լ�ֲ��޶�
const DWORD TID_DbUpdCurrPartPosiLimitDetail=0x00003032;
//ɾ����Ա��Լ�ֲ��޶�
const DWORD TID_DbDelCurrPartPosiLimitDetail=0x00003033;
//���ӿͻ���Լ�ֲ��޶�
const DWORD TID_DbInsCurrClientPosiLimitDetail=0x00003041;
//�޸Ŀͻ���Լ�ֲ��޶�
const DWORD TID_DbUpdCurrClientPosiLimitDetail=0x00003042;
//ɾ���ͻ���Լ�ֲ��޶�
const DWORD TID_DbDelCurrClientPosiLimitDetail=0x00003043;
//��������ͻ���Լ�ֲ��޶�
const DWORD TID_DbInsCurrSpecialPosiLimitDetail=0x00003051;
//�޸�����ͻ���Լ�ֲ��޶�
const DWORD TID_DbUpdCurrSpecialPosiLimitDetail=0x00003052;
//ɾ������ͻ���Լ�ֲ��޶�
const DWORD TID_DbDelCurrSpecialPosiLimitDetail=0x00003053;
//���ӱ�ֵ���
const DWORD TID_DbInsHedgeDetail=0x00003061;
//���ӽ����û�
const DWORD TID_DbInsUser=0x00003071;
//�޸Ľ����û�
const DWORD TID_DbUpdUser=0x00003072;
//���ӻ�Ա��ƷȨ��
const DWORD TID_DbInsPartProductRight=0x00003081;
//�޸Ļ�Ա��ƷȨ��
const DWORD TID_DbUpdPartProductRight=0x00003082;
//ɾ����Ա��ƷȨ��
const DWORD TID_DbDelPartProductRight=0x00003083;
//���ӿͻ���ƷȨ��
const DWORD TID_DbInsClientProductRight=0x00003084;
//�޸Ŀͻ���ƷȨ��
const DWORD TID_DbUpdClientProductRight=0x00003085;
//ɾ���ͻ���ƷȨ��
const DWORD TID_DbDelClientProductRight=0x00003086;
//���ӻ�Ա��ԼȨ��
const DWORD TID_DbInsPartInstrumentRight=0x00003091;
//�޸Ļ�Ա��ԼȨ��
const DWORD TID_DbUpdPartInstrumentRight=0x00003092;
//ɾ����Ա��ԼȨ��
const DWORD TID_DbDelPartInstrumentRight=0x00003093;
//���ӿͻ���ԼȨ��
const DWORD TID_DbInsClientInstrumentRight=0x00003094;
//�޸Ŀͻ���ԼȨ��
const DWORD TID_DbUpdClientInstrumentRight=0x00003095;
//ɾ����Ա�ͻ�Ȩ��
const DWORD TID_DbDelClientInstrumentRight=0x00003096;
//���ӻ�Ա��Լ��֤����
const DWORD TID_DbInsCurrMarginRateDetail=0x000030A1;
//�޸Ļ�Ա��Լ��֤����
const DWORD TID_DbUpdCurrMarginRateDetail=0x000030A2;
//ɾ����Ա��Լ��֤����
const DWORD TID_DbDelCurrMarginRateDetail=0x000030A3;
//���ݿⷢ������������
const DWORD TID_DbUpdMarketData=0x000030B1;
//�����û�IP��ַ
const DWORD TID_DbInsUserIP=0x000030C1;
//ɾ���û�IP��ַ
const DWORD TID_DbDelUserIP=0x000030C3;
//���Ӽ۸��
const DWORD TID_DbInsCurrPriceBanding=0x000030D1;
//�޸ļ۸��
const DWORD TID_DbUpdCurrPriceBanding=0x000030D2;
//ɾ���۸��
const DWORD TID_DbDelCurrPriceBanding=0x000030D3;
//���ӻ�Ա�����г�
const DWORD TID_DbInsPartTopicSubscribe=0x000030E1;
//ɾ����Ա�����г�
const DWORD TID_DbDelPartTopicSubscribe=0x000030E3;
//���ӽ��ױ����ƷȨ��
const DWORD TID_DbInsPartClientProductRight=0x000030E4;
//�޸Ľ��ױ����ƷȨ��
const DWORD TID_DbUpdPartClientProductRight=0x000030E5;
//ɾ�����ױ����ƷȨ��
const DWORD TID_DbDelPartClientProductRight=0x000030E6;
//���ӽ��ױ����ԼȨ��
const DWORD TID_DbInsPartClientInstrumentRight=0x000030E7;
//�޸Ľ��ױ����ԼȨ��
const DWORD TID_DbUpdPartClientInstrumentRight=0x000030E8;
//ɾ�����ױ����ԼȨ��
const DWORD TID_DbDelPartClientInstrumentRight=0x000030E9;
//ʱ��ͬ��
const DWORD TID_NtfTimeSync=0x00005001;
//ͨѶ�׶��л�֪ͨ
const DWORD TID_NtfCommPhaseChange=0x00005002;
//��������λ��֪ͨ
const DWORD TID_NtfDataCenterDesc=0x00005003;
//���������л�֪ͨ
const DWORD TID_NtfSwitch=0x00005005;
//���Ӻ�Լ֪ͨ
const DWORD TID_NtfInsInstrument=0x00005101;
//ɾ����Լ֪ͨ
const DWORD TID_NtfDelInstrument=0x00005102;
//������Ϻ�Լ����֪ͨ
const DWORD TID_NtfInsCombinationLeg=0x00005103;
//ɾ����Ϻ�Լ����֪ͨ
const DWORD TID_NtfDelCombinationLeg=0x00005104;
//��������֪ͨ
const DWORD TID_NtfAliasDefine=0x0000510A;
//����֪ͨ
const DWORD TID_NtfOrder=0x00005201;
//�ɽ�֪ͨ
const DWORD TID_NtfTrade=0x00005202;
//����֪ͨ
const DWORD TID_NtfQuote=0x00005203;
//ִ������֪ͨ
const DWORD TID_NtfExecOrder=0x00005204;
//��ϱ���֪ͨ
const DWORD TID_NtfCombOrder=0x00005205;
//��Լ����״̬�ı�֪ͨ
const DWORD TID_NtfInstrumentStatusUpdate=0x00005211;
//�Ựɾ��֪ͨ
const DWORD TID_NtfDelUserSession=0x00005313;
//��������������֪ͨ
const DWORD TID_NtfBulletin=0x00005801;
//��ͨ����֪ͨ
const DWORD TID_NtfMarketData=0x00005802;
//�������֪ͨ
const DWORD TID_NtfDepthMarketData=0x00005803;
//�������֪ͨ
const DWORD TID_NtfTopicMarketData=0x00005804;
//������֪ͨ
const DWORD TID_NtfAdminOrder=0x00005A01;
//����������ͬ����ʼ
const DWORD TID_ExchangeDataSyncStart=0x00006001;
//����������ͬ������
const DWORD TID_ExchangeDataSyncEnd=0x00006002;
//������
const DWORD TID_InitExchange=0x00006101;
//������
const DWORD TID_InitSettlementGroup=0x00006102;
//�г�
const DWORD TID_InitMarket=0x00006201;
//�г���Ʒ����
const DWORD TID_InitMarketProduct=0x00006202;
//�г���Ʒ�����
const DWORD TID_InitMarketProductGroup=0x00006203;
//��������
const DWORD TID_InitMarketDataTopic=0x00006204;
//��Ա�����г�
const DWORD TID_InitPartTopicSubscribe=0x00006205;
//��Ա
const DWORD TID_InitParticipant=0x00006401;
//�û�
const DWORD TID_InitUser=0x00006402;
//�ͻ�
const DWORD TID_InitClient=0x00006403;
//��Ա�ͻ���ϵ
const DWORD TID_InitPartClient=0x00006404;
//�û�IP��ַ
const DWORD TID_InitUserIP=0x00006405;
//���鷢��״̬
const DWORD TID_InitMdPubStatus=0x00006406;
//��������
const DWORD TID_InitAliasDefine=0x00006407;
//���㽻�׻�Ա��ϵ
const DWORD TID_InitClearingTradingPart=0x00006408;
//�û�����Ȩ��
const DWORD TID_InitUserFunctionRight=0x00006409;
//�ʽ��˻�
const DWORD TID_InitAccount=0x0000640A;
//�û�ͨѶ��
const DWORD TID_InitUserCommFlux=0x0000640B;
//����������ͬ����ʼ
const DWORD TID_SettlementGroupDataSyncStart=0x00007001;
//����������ͬ������
const DWORD TID_SettlementGroupDataSyncEnd=0x00007002;
//��Լ
const DWORD TID_InitInstrument=0x00007103;
//��Ͻ��׺�Լ�ĵ���
const DWORD TID_InitCombinationLeg=0x00007104;
//��Ա�˻���ϵ
const DWORD TID_InitPartRoleAccount=0x00007105;
//��Ա��Ʒ��ɫ
const DWORD TID_InitPartProductRole=0x00007201;
//��Ա��Ʒ����Ȩ��
const DWORD TID_InitPartProductRight=0x00007202;
//��Ա��Լ����Ȩ��
const DWORD TID_InitPartInstrumentRight=0x00007203;
//�ͻ���Ʒ����Ȩ��
const DWORD TID_InitClientProductRight=0x00007204;
//�ͻ���Լ����Ȩ��
const DWORD TID_InitClientInstrumentRight=0x00007205;
//��Ʒ����
const DWORD TID_InitCurrProductProperty=0x00007301;
//��Լ����
const DWORD TID_InitCurrInstrumentProperty=0x00007303;
//��ǰ��Լ�۸��
const DWORD TID_InitCurrPriceBanding=0x00007304;
//��ǰ��Լ��֤����
const DWORD TID_InitCurrMarginRate=0x00007305;
//��ǰ��Լ��֤���ʵ���ϸ����
const DWORD TID_InitCurrMarginRateDetail=0x00007306;
//��ǰ��Ա��Լ�޲�
const DWORD TID_InitCurrPartPosiLimit=0x00007307;
//��ǰ��Ա��Լ�޲ֵ���ϸ����
const DWORD TID_InitCurrPartPosiLimitDetail=0x00007308;
//��ǰ�ͻ���Լ�޲�
const DWORD TID_InitCurrClientPosiLimit=0x00007309;
//��ǰ�ͻ���Լ�޲ֵ���ϸ����
const DWORD TID_InitCurrClientPosiLimitDetail=0x0000730A;
//��ǰ����ͻ���Լ�޲�
const DWORD TID_InitCurrSpecialPosiLimit=0x0000730B;
//��ǰ����ͻ���Լ�޲ֵ���ϸ����
const DWORD TID_InitCurrSpecialPosiLimitDetail=0x0000730C;
//��ǰ��Լ���ڱ�ֵ����
const DWORD TID_InitCurrHedgeRule=0x0000730D;
//��ǰ��Լ���׽׶�����
const DWORD TID_InitCurrTradingSegmentAttr=0x0000730E;
//��ǰ��Լ�۶�����
const DWORD TID_InitCurrFuse=0x0000730F;
//�����˻���Ϣ
const DWORD TID_InitTradingAccount=0x00007401;
//��Ա��Լ�ֲ�
const DWORD TID_InitPartPosition=0x00007402;
//�ͻ���Լ�ֲ�
const DWORD TID_InitClientPosition=0x00007403;
//��ֵ�����
const DWORD TID_InitHedgeVolume=0x00007404;
//������������
const DWORD TID_InitRemainOrder=0x00007405;
//�г�����
const DWORD TID_InitMarketData=0x00007407;
//����׼�����˻�
const DWORD TID_InitBaseReserveAccount=0x0000740A;
//���ױ����Ʒ����Ȩ��
const DWORD TID_InitPartClientProductRight=0x0000740B;
//���ױ����Լ����Ȩ��
const DWORD TID_InitPartClientInstrumentRight=0x0000740C;
//ѯ������
const DWORD TID_ReqForQuote=0x0000740D;
//ѯ��Ӧ��
const DWORD TID_RspForQuote=0x0000740E;
//�����̺�Լ����Ȩ��
const DWORD TID_InitMarketMakerQuoteRight=0x0000740F;
//���������̺�Լ����Ȩ��
const DWORD TID_DbInsMarketMakerQuoteRight=0x00007410;
//�޸������̺�Լ����Ȩ��
const DWORD TID_DbUpdMarketMakerQuoteRight=0x00007411;
//ɾ�������̺�Լ����Ȩ��
const DWORD TID_DbDelMarketMakerQuoteRight=0x00007412;
//���ױ�����ϱ�֤������
const DWORD TID_InitPartClientMarginCombType=0x00007413;
//��Լ�ͺ�Լ��
const DWORD TID_InitInstrumentGroup=0x00007414;
//�۸񲨶���������
const DWORD TID_InitRealPriceBanding=0x00007415;
//ҵ�������
const DWORD TID_InitBusinessConfig=0x00007416;
//����
const DWORD TID_InitExchange_Rate=0x00007417;
//��ϱ�֤�����
const DWORD TID_InitMarginCombinationLeg=0x00007418;
//���ױ�����ϳֲ�
const DWORD TID_InitPartClientCombPosition=0x00007419;
//���ױ��뵥�ȳֲ�
const DWORD TID_InitPartClientLegPosition=0x0000741A;
//��ϳֲ�����
const DWORD TID_ReqPartClientComPsi=0x0000741B;
//��ϱ�֤������
const DWORD TID_ReqMarginCombAction=0x0000741C;
//��ϱ�֤��Ӧ��
const DWORD TID_RspMarginCombAction=0x0000741D;
//���ױ�����ϳֲֲ�ѯ����
const DWORD TID_ReqQryPartClientCombPosition=0x0000741E;
//���ױ�����ϳֲֲ�ѯӦ��
const DWORD TID_RspQryPartClientCombPosition=0x0000741F;
//��Ϲ���֪ͨ
const DWORD TID_NtfMarginCombinationLeg=0x00007420;
//���ױ��뵥�ȳֲֲ�ѯ����
const DWORD TID_ReqQryPartClientLegPosition=0x00007422;
//���ױ��뵥�ȳֲֲ�ѯӦ��
const DWORD TID_RspQryPartClientLegPosition=0x00007423;
//�����ڴ������
const DWORD TID_ReqDumpMemTable=0x00007424;
//�����ڴ������Ӧ��
const DWORD TID_RspDumpMemTable=0x00007425;
//��Լ������Ϻ��Ķ�Ӧ��ϵ
const DWORD TID_InitInstMatchMap=0x00008001;
//��Ա������غ��Ķ�Ӧ��ϵ
const DWORD TID_InitPartRiskMap=0x00008002;

#endif /* end of include guard: TIDDESC_H_VAKBWPMZ */
