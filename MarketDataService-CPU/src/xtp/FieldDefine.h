#ifndef _ITEMTYPEDEF_H
#define _ITEMTYPEDEF_H

#include "ItemTypedef.h"
#include <boost/fusion/adapted/struct/adapt_struct.hpp>
#include <boost/fusion/include/adapt_struct.hpp>

#pragma pack(push, 1)
class CUserLoginField
{
public:
CDateType TradingDay;   ///������
CUserIDType UserID;   ///�����û�����
CParticipantIDType ParticipantID;   ///��Ա����
CPasswordType Password;   ///����
CProductInfoType UserProductInfo;   ///�û��˲�Ʒ��Ϣ
CProductInfoType InterfaceProductInfo;   ///�ӿڶ˲�Ʒ��Ϣ
CProtocolInfoType ProtocolInfo;   ///Э����Ϣ
CDataCenterIDType DataCenterID;   ///�������Ĵ���
CTimeType LoginTime;   ///��¼�ɹ�ʱ��
CIPAddressType IPAddress;   ///IP��ַ
COrderLocalIDType MaxOrderLocalID;   ///��󱨵����ر��
CTradingSystemNameType TradingSystemName;   ///����ϵͳ����
CUserTypeType UserType;   ///�û�����
CCommFluxType MaxCommFlux;   ///���ͨѶ��
CRiskIDType RiskID;   ///��ر��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CUserLoginField,
(CDateType,	TradingDay)
(CUserIDType,	UserID)
(CParticipantIDType,	ParticipantID)
(CPasswordType,	Password)
(CProductInfoType,	UserProductInfo)
(CProductInfoType,	InterfaceProductInfo)
(CProtocolInfoType,	ProtocolInfo)
(CDataCenterIDType,	DataCenterID)
(CTimeType,	LoginTime)
(CIPAddressType,	IPAddress)
(COrderLocalIDType,	MaxOrderLocalID)
(CTradingSystemNameType,	TradingSystemName)
(CUserTypeType,	UserType)
(CCommFluxType,	MaxCommFlux)
(CRiskIDType,	RiskID)
);

#pragma pack(push, 1)
class CRspInfoField
{
public:
CErrorIDType ErrorID;   ///�������
CErrorMsgType ErrorMsg;   ///������Ϣ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CRspInfoField,
(CErrorIDType,	ErrorID)
(CErrorMsgType,	ErrorMsg)
);

#pragma pack(push, 1)
class CCommPhaseField
{
public:
CDateType TradingDay;   ///������
CCommPhaseNoType CommPhaseNo;   ///ͨѶʱ�κ�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCommPhaseField,
(CDateType,	TradingDay)
(CCommPhaseNoType,	CommPhaseNo)
);

#pragma pack(push, 1)
class CExchangeTradingDayField
{
public:
CDateType TradingDay;   ///������
CExchangeIDType ExchangeID;   ///����������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CExchangeTradingDayField,
(CDateType,	TradingDay)
(CExchangeIDType,	ExchangeID)
);

#pragma pack(push, 1)
class CSettlementSessionField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CSettlementSessionField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
);

#pragma pack(push, 1)
class CCurrentTimeField
{
public:
CDateType CurrDate;   ///��ǰ����
CTimeType CurrTime;   ///��ǰʱ��
CMillisecType CurrMillisec;   ///��ǰʱ�䣨���룩
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrentTimeField,
(CDateType,	CurrDate)
(CTimeType,	CurrTime)
(CMillisecType,	CurrMillisec)
);

#pragma pack(push, 1)
class CDataCenterDescField
{
public:
CDataCenterIDType DataCenterID;   ///�������Ĵ���
CStartModeType StartMode;   ///����ģʽ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDataCenterDescField,
(CDataCenterIDType,	DataCenterID)
(CStartModeType,	StartMode)
);

#pragma pack(push, 1)
class CSwitchDescField
{
public:
CDataCenterIDType DataCenterID;   ///�������Ĵ���
CStartModeType StartMode;   ///����ģʽ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CSwitchDescField,
(CDataCenterIDType,	DataCenterID)
(CStartModeType,	StartMode)
);

#pragma pack(push, 1)
class CInputOrderField
{
public:
COrderSysIDType OrderSysID;   ///�������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
CInstrumentIDType InstrumentID;   ///��Լ����
COrderPriceTypeType OrderPriceType;   ///�����۸�����
CDirectionType Direction;   ///��������
CCombOffsetFlagType CombOffsetFlag;   ///��Ͽ�ƽ��־
CCombHedgeFlagType CombHedgeFlag;   ///���Ͷ���ױ���־
CPriceType LimitPrice;   ///�۸�
CVolumeType VolumeTotalOriginal;   ///����
CTimeConditionType TimeCondition;   ///��Ч������
CDateType GTDDate;   ///GTD����
CVolumeConditionType VolumeCondition;   ///�ɽ�������
CVolumeType MinVolume;   ///��С�ɽ���
CContingentConditionType ContingentCondition;   ///��������
CPriceType StopPrice;   ///ֹ���
CForceCloseReasonType ForceCloseReason;   ///ǿƽԭ��
COrderLocalIDType OrderLocalID;   ///���ر������
CBoolType IsAutoSuspend;   ///�Զ������־
CBusinessUnitType BusinessUnit;   ///ҵ��Ԫ
CMoneyType RiskPreFrozen;   ///���Ԥ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CInputOrderField,
(COrderSysIDType,	OrderSysID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(CInstrumentIDType,	InstrumentID)
(COrderPriceTypeType,	OrderPriceType)
(CDirectionType,	Direction)
(CCombOffsetFlagType,	CombOffsetFlag)
(CCombHedgeFlagType,	CombHedgeFlag)
(CPriceType,	LimitPrice)
(CVolumeType,	VolumeTotalOriginal)
(CTimeConditionType,	TimeCondition)
(CDateType,	GTDDate)
(CVolumeConditionType,	VolumeCondition)
(CVolumeType,	MinVolume)
(CContingentConditionType,	ContingentCondition)
(CPriceType,	StopPrice)
(CForceCloseReasonType,	ForceCloseReason)
(COrderLocalIDType,	OrderLocalID)
(CBoolType,	IsAutoSuspend)
(CBusinessUnitType,	BusinessUnit)
(CMoneyType,	RiskPreFrozen)
);

#pragma pack(push, 1)
class COrderActionField
{
public:
COrderSysIDType OrderSysID;   ///�������
COrderLocalIDType OrderLocalID;   ///���ر������
CActionFlagType ActionFlag;   ///����������־
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
CPriceType LimitPrice;   ///�۸�
CVolumeType VolumeChange;   ///�����仯
COrderLocalIDType ActionLocalID;   ///�������ر��
CBusinessUnitType BusinessUnit;   ///ҵ��Ԫ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
COrderActionField,
(COrderSysIDType,	OrderSysID)
(COrderLocalIDType,	OrderLocalID)
(CActionFlagType,	ActionFlag)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(CPriceType,	LimitPrice)
(CVolumeType,	VolumeChange)
(COrderLocalIDType,	ActionLocalID)
(CBusinessUnitType,	BusinessUnit)
);

#pragma pack(push, 1)
class COTCOrderField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
COTCOrderSysIDType OTCOrderSysID;   ///OTC�������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
CInstrumentIDType InstrumentID;   ///��Լ����
CDirectionType Direction;   ///��������
COffsetFlagType OffsetFlag;   ///��ƽ��־
CHedgeFlagType HedgeFlag;   ///Ͷ���ױ���־
CPriceType Price;   ///�۸�
CVolumeType Volume;   ///����
CParticipantIDType OtherParticipantID;   ///���ַ���Ա����
CClientIDType OtherClientID;   ///���ַ��ͻ�����
CUserIDType OtherUserID;   ///���ַ������û�����
COffsetFlagType OtherOffsetFlag;   ///���ַ���ƽ��־
CHedgeFlagType OtherHedgeFlag;   ///���ַ��ױ���־
COrderLocalIDType OTCOrderLocalID;   ///����OTC�������
COTCOrderStatusType OTCOrderStatus;   ///OTC����״̬
CTimeType InsertTime;   ///����ʱ��
CTimeType CancelTime;   ///����ʱ��
CParticipantIDType ClearingPartID;   ///�����Ա���
CParticipantIDType OtherClearingPartID;   ///���ַ������Ա���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
COTCOrderField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(COTCOrderSysIDType,	OTCOrderSysID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(CInstrumentIDType,	InstrumentID)
(CDirectionType,	Direction)
(COffsetFlagType,	OffsetFlag)
(CHedgeFlagType,	HedgeFlag)
(CPriceType,	Price)
(CVolumeType,	Volume)
(CParticipantIDType,	OtherParticipantID)
(CClientIDType,	OtherClientID)
(CUserIDType,	OtherUserID)
(COffsetFlagType,	OtherOffsetFlag)
(CHedgeFlagType,	OtherHedgeFlag)
(COrderLocalIDType,	OTCOrderLocalID)
(COTCOrderStatusType,	OTCOrderStatus)
(CTimeType,	InsertTime)
(CTimeType,	CancelTime)
(CParticipantIDType,	ClearingPartID)
(CParticipantIDType,	OtherClearingPartID)
);

#pragma pack(push, 1)
class CInputQuoteField
{
public:
CQuoteSysIDType QuoteSysID;   ///���۱��
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
CVolumeType BidVolume;   ///��������
CVolumeType AskVolume;   ///��������
CInstrumentIDType InstrumentID;   ///��Լ����
COrderLocalIDType QuoteLocalID;   ///���ر��۱��
CBusinessUnitType BusinessUnit;   ///ҵ��Ԫ
CCombOffsetFlagType BidCombOffsetFlag;   ///����Ͽ�ƽ��־
CCombHedgeFlagType BidCombHedgeFlag;   ///������ױ���־
CPriceType BidPrice;   ///�򷽼۸�
CCombOffsetFlagType AskCombOffsetFlag;   ///������Ͽ�ƽ��־
CCombHedgeFlagType AskCombHedgeFlag;   ///��������ױ���־
CPriceType AskPrice;   ///�����۸�
CMoneyType BidRiskPreFrozen;   ///����Ԥ����
CMoneyType AskRiskPreFrozen;   ///�����Ԥ����
COrderSysIDType BidOrderSysID;   ///�򷽱������
COrderSysIDType AskOrderSysID;   ///�����������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CInputQuoteField,
(CQuoteSysIDType,	QuoteSysID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(CVolumeType,	BidVolume)
(CVolumeType,	AskVolume)
(CInstrumentIDType,	InstrumentID)
(COrderLocalIDType,	QuoteLocalID)
(CBusinessUnitType,	BusinessUnit)
(CCombOffsetFlagType,	BidCombOffsetFlag)
(CCombHedgeFlagType,	BidCombHedgeFlag)
(CPriceType,	BidPrice)
(CCombOffsetFlagType,	AskCombOffsetFlag)
(CCombHedgeFlagType,	AskCombHedgeFlag)
(CPriceType,	AskPrice)
(CMoneyType,	BidRiskPreFrozen)
(CMoneyType,	AskRiskPreFrozen)
(COrderSysIDType,	BidOrderSysID)
(COrderSysIDType,	AskOrderSysID)
);

#pragma pack(push, 1)
class CQuoteActionField
{
public:
CQuoteSysIDType QuoteSysID;   ///���۱��
COrderLocalIDType QuoteLocalID;   ///���ر��۱��
CActionFlagType ActionFlag;   ///����������־
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
COrderLocalIDType ActionLocalID;   ///�������ر��
CBusinessUnitType BusinessUnit;   ///ҵ��Ԫ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQuoteActionField,
(CQuoteSysIDType,	QuoteSysID)
(COrderLocalIDType,	QuoteLocalID)
(CActionFlagType,	ActionFlag)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(COrderLocalIDType,	ActionLocalID)
(CBusinessUnitType,	BusinessUnit)
);

#pragma pack(push, 1)
class CInputExecOrderField
{
public:
CInstrumentIDType InstrumentID;   ///��Լ���
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
COrderLocalIDType ExecOrderLocalID;   ///����ִ��������
CVolumeType Volume;   ///����
CBusinessUnitType BusinessUnit;   ///ҵ��Ԫ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CInputExecOrderField,
(CInstrumentIDType,	InstrumentID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(COrderLocalIDType,	ExecOrderLocalID)
(CVolumeType,	Volume)
(CBusinessUnitType,	BusinessUnit)
);

#pragma pack(push, 1)
class CExecOrderActionField
{
public:
CExecOrderSysIDType ExecOrderSysID;   ///ִ��������
COrderLocalIDType ExecOrderLocalID;   ///����ִ��������
CActionFlagType ActionFlag;   ///����������־
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
COrderLocalIDType ActionLocalID;   ///�������ر��
CBusinessUnitType BusinessUnit;   ///ҵ��Ԫ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CExecOrderActionField,
(CExecOrderSysIDType,	ExecOrderSysID)
(COrderLocalIDType,	ExecOrderLocalID)
(CActionFlagType,	ActionFlag)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(COrderLocalIDType,	ActionLocalID)
(CBusinessUnitType,	BusinessUnit)
);

#pragma pack(push, 1)
class CUserLogoutField
{
public:
CUserIDType UserID;   ///�����û�����
CParticipantIDType ParticipantID;   ///��Ա����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CUserLogoutField,
(CUserIDType,	UserID)
(CParticipantIDType,	ParticipantID)
);

#pragma pack(push, 1)
class CUserPasswordUpdateField
{
public:
CUserIDType UserID;   ///�����û�����
CParticipantIDType ParticipantID;   ///��Ա����
CPasswordType OldPassword;   ///������
CPasswordType NewPassword;   ///������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CUserPasswordUpdateField,
(CUserIDType,	UserID)
(CParticipantIDType,	ParticipantID)
(CPasswordType,	OldPassword)
(CPasswordType,	NewPassword)
);

#pragma pack(push, 1)
class CInputCombOrderField
{
public:
COrderSysIDType CombOrderSysID;   ///��ϱ������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
CPriceType LimitPrice;   ///�۸�
CVolumeType VolumeTotalOriginal;   ///����
COrderLocalIDType CombOrderLocalID;   ///���ر������
CBusinessUnitType BusinessUnit;   ///ҵ��Ԫ
CInstrumentIDType InstrumentID1;   ///��Լ����1
CDirectionType Direction1;   ///��������1
CLegMultipleType LegMultiple1;   ///���ȳ���1
COffsetFlagType OffsetFlag1;   ///��ƽ��־1
CHedgeFlagType HedgeFlag1;   ///Ͷ���ױ���־1
CInstrumentIDType InstrumentID2;   ///��Լ����2
CDirectionType Direction2;   ///��������2
CLegMultipleType LegMultiple2;   ///���ȳ���2
COffsetFlagType OffsetFlag2;   ///��ƽ��־2
CHedgeFlagType HedgeFlag2;   ///Ͷ���ױ���־2
CInstrumentIDType InstrumentID3;   ///��Լ����3
CDirectionType Direction3;   ///��������3
CLegMultipleType LegMultiple3;   ///���ȳ���3
COffsetFlagType OffsetFlag3;   ///��ƽ��־3
CHedgeFlagType HedgeFlag3;   ///Ͷ���ױ���־3
CInstrumentIDType InstrumentID4;   ///��Լ����4
CDirectionType Direction4;   ///��������4
CLegMultipleType LegMultiple4;   ///���ȳ���4
COffsetFlagType OffsetFlag4;   ///��ƽ��־4
CHedgeFlagType HedgeFlag4;   ///Ͷ���ױ���־4
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CInputCombOrderField,
(COrderSysIDType,	CombOrderSysID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(CPriceType,	LimitPrice)
(CVolumeType,	VolumeTotalOriginal)
(COrderLocalIDType,	CombOrderLocalID)
(CBusinessUnitType,	BusinessUnit)
(CInstrumentIDType,	InstrumentID1)
(CDirectionType,	Direction1)
(CLegMultipleType,	LegMultiple1)
(COffsetFlagType,	OffsetFlag1)
(CHedgeFlagType,	HedgeFlag1)
(CInstrumentIDType,	InstrumentID2)
(CDirectionType,	Direction2)
(CLegMultipleType,	LegMultiple2)
(COffsetFlagType,	OffsetFlag2)
(CHedgeFlagType,	HedgeFlag2)
(CInstrumentIDType,	InstrumentID3)
(CDirectionType,	Direction3)
(CLegMultipleType,	LegMultiple3)
(COffsetFlagType,	OffsetFlag3)
(CHedgeFlagType,	HedgeFlag3)
(CInstrumentIDType,	InstrumentID4)
(CDirectionType,	Direction4)
(CLegMultipleType,	LegMultiple4)
(COffsetFlagType,	OffsetFlag4)
(CHedgeFlagType,	HedgeFlag4)
);

#pragma pack(push, 1)
class CForceUserExitField
{
public:
CParticipantIDType ParticipantID;   ///��Ա����
CUserIDType UserID;   ///�����û�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CForceUserExitField,
(CParticipantIDType,	ParticipantID)
(CUserIDType,	UserID)
);

#pragma pack(push, 1)
class CQryOrderField
{
public:
CParticipantIDType PartIDStart;   ///��ʼ��Ա����
CParticipantIDType PartIDEnd;   ///������Ա����
COrderSysIDType OrderSysID;   ///�������
CInstrumentIDType InstrumentID;   ///��Լ����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
CTimeType TimeStart;   ///��ʼʱ��
CTimeType TimeEnd;   ///����ʱ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryOrderField,
(CParticipantIDType,	PartIDStart)
(CParticipantIDType,	PartIDEnd)
(COrderSysIDType,	OrderSysID)
(CInstrumentIDType,	InstrumentID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(CTimeType,	TimeStart)
(CTimeType,	TimeEnd)
);

#pragma pack(push, 1)
class CQryQuoteField
{
public:
CParticipantIDType PartIDStart;   ///��ʼ��Ա����
CParticipantIDType PartIDEnd;   ///������Ա����
CQuoteSysIDType QuoteSysID;   ///���۱��
CClientIDType ClientID;   ///�ͻ�����
CInstrumentIDType InstrumentID;   ///��Լ����
CUserIDType UserID;   ///�����û�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryQuoteField,
(CParticipantIDType,	PartIDStart)
(CParticipantIDType,	PartIDEnd)
(CQuoteSysIDType,	QuoteSysID)
(CClientIDType,	ClientID)
(CInstrumentIDType,	InstrumentID)
(CUserIDType,	UserID)
);

#pragma pack(push, 1)
class CQryTradeField
{
public:
CParticipantIDType PartIDStart;   ///��ʼ��Ա����
CParticipantIDType PartIDEnd;   ///������Ա����
CInstrumentIDType InstIDStart;   ///��ʼ��Լ����
CInstrumentIDType InstIDEnd;   ///������Լ����
CTradeIDType TradeID;   ///�ɽ����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
CTimeType TimeStart;   ///��ʼʱ��
CTimeType TimeEnd;   ///����ʱ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryTradeField,
(CParticipantIDType,	PartIDStart)
(CParticipantIDType,	PartIDEnd)
(CInstrumentIDType,	InstIDStart)
(CInstrumentIDType,	InstIDEnd)
(CTradeIDType,	TradeID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(CTimeType,	TimeStart)
(CTimeType,	TimeEnd)
);

#pragma pack(push, 1)
class CQryMarketDataField
{
public:
CProductIDType ProductID;   ///��Ʒ����
CInstrumentIDType InstrumentID;   ///��Լ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryMarketDataField,
(CProductIDType,	ProductID)
(CInstrumentIDType,	InstrumentID)
);

#pragma pack(push, 1)
class CQryClientField
{
public:
CParticipantIDType PartIDStart;   ///��ʼ��Ա����
CParticipantIDType PartIDEnd;   ///������Ա����
CClientIDType ClientIDStart;   ///��ʼ�ͻ�����
CClientIDType ClientIDEnd;   ///�����ͻ�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryClientField,
(CParticipantIDType,	PartIDStart)
(CParticipantIDType,	PartIDEnd)
(CClientIDType,	ClientIDStart)
(CClientIDType,	ClientIDEnd)
);

#pragma pack(push, 1)
class CQryPartPositionField
{
public:
CParticipantIDType PartIDStart;   ///��ʼ��Ա����
CParticipantIDType PartIDEnd;   ///������Ա����
CInstrumentIDType InstIDStart;   ///��ʼ��Լ����
CInstrumentIDType InstIDEnd;   ///������Լ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryPartPositionField,
(CParticipantIDType,	PartIDStart)
(CParticipantIDType,	PartIDEnd)
(CInstrumentIDType,	InstIDStart)
(CInstrumentIDType,	InstIDEnd)
);

#pragma pack(push, 1)
class CQryClientPositionField
{
public:
CParticipantIDType PartIDStart;   ///��ʼ��Ա����
CParticipantIDType PartIDEnd;   ///������Ա����
CClientIDType ClientIDStart;   ///��ʼ�ͻ�����
CClientIDType ClientIDEnd;   ///�����ͻ�����
CInstrumentIDType InstIDStart;   ///��ʼ��Լ����
CInstrumentIDType InstIDEnd;   ///������Լ����
CClientTypeType ClientType;   ///�ͻ�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryClientPositionField,
(CParticipantIDType,	PartIDStart)
(CParticipantIDType,	PartIDEnd)
(CClientIDType,	ClientIDStart)
(CClientIDType,	ClientIDEnd)
(CInstrumentIDType,	InstIDStart)
(CInstrumentIDType,	InstIDEnd)
(CClientTypeType,	ClientType)
);

#pragma pack(push, 1)
class CQryPartAccountField
{
public:
CParticipantIDType PartIDStart;   ///��ʼ��Ա����
CParticipantIDType PartIDEnd;   ///������Ա����
CAccountIDType AccountID;   ///�ʽ��ʺ�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryPartAccountField,
(CParticipantIDType,	PartIDStart)
(CParticipantIDType,	PartIDEnd)
(CAccountIDType,	AccountID)
);

#pragma pack(push, 1)
class CQryInstrumentField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CProductGroupIDType ProductGroupID;   ///��Ʒ�����
CProductIDType ProductID;   ///��Ʒ����
CInstrumentIDType InstrumentID;   ///��Լ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryInstrumentField,
(CSettlementGroupIDType,	SettlementGroupID)
(CProductGroupIDType,	ProductGroupID)
(CProductIDType,	ProductID)
(CInstrumentIDType,	InstrumentID)
);

#pragma pack(push, 1)
class CQryInstrumentStatusField
{
public:
CInstrumentIDType InstIDStart;   ///��ʼ��Լ����
CInstrumentIDType InstIDEnd;   ///������Լ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryInstrumentStatusField,
(CInstrumentIDType,	InstIDStart)
(CInstrumentIDType,	InstIDEnd)
);

#pragma pack(push, 1)
class CQrySGDataSyncStatusField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQrySGDataSyncStatusField,
(CSettlementGroupIDType,	SettlementGroupID)
);

#pragma pack(push, 1)
class CQryUserSessionField
{
public:
CUserIDType UserIDStart;   ///��ʼ�����û�����
CUserIDType UserIDEnd;   ///���������û�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryUserSessionField,
(CUserIDType,	UserIDStart)
(CUserIDType,	UserIDEnd)
);

#pragma pack(push, 1)
class CQryUserField
{
public:
CUserIDType UserIDStart;   ///��ʼ�����û�����
CUserIDType UserIDEnd;   ///���������û�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryUserField,
(CUserIDType,	UserIDStart)
(CUserIDType,	UserIDEnd)
);

#pragma pack(push, 1)
class CQryBulletinField
{
public:
CDateType TradingDay;   ///������
CMarketIDType MarketID;   ///�г�����
CBulletinIDType BulletinID;   ///������
CNewsTypeType NewsType;   ///��������
CNewsUrgencyType NewsUrgency;   ///�����̶�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryBulletinField,
(CDateType,	TradingDay)
(CMarketIDType,	MarketID)
(CBulletinIDType,	BulletinID)
(CNewsTypeType,	NewsType)
(CNewsUrgencyType,	NewsUrgency)
);

#pragma pack(push, 1)
class CQryParticipantField
{
public:
CParticipantIDType PartIDStart;   ///��ʼ��Ա����
CParticipantIDType PartIDEnd;   ///������Ա����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryParticipantField,
(CParticipantIDType,	PartIDStart)
(CParticipantIDType,	PartIDEnd)
);

#pragma pack(push, 1)
class CQryHedgeVolumeField
{
public:
CParticipantIDType PartIDStart;   ///��ʼ��Ա����
CParticipantIDType PartIDEnd;   ///������Ա����
CClientIDType ClientIDStart;   ///��ʼ�ͻ�����
CClientIDType ClientIDEnd;   ///�����ͻ�����
CInstrumentIDType InstIDStart;   ///��ʼ��Լ����
CInstrumentIDType InstIDEnd;   ///������Լ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryHedgeVolumeField,
(CParticipantIDType,	PartIDStart)
(CParticipantIDType,	PartIDEnd)
(CClientIDType,	ClientIDStart)
(CClientIDType,	ClientIDEnd)
(CInstrumentIDType,	InstIDStart)
(CInstrumentIDType,	InstIDEnd)
);

#pragma pack(push, 1)
class CQryExchangeStatusField
{
public:
CExchangeIDType ExchangeID;   ///����������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryExchangeStatusField,
(CExchangeIDType,	ExchangeID)
);

#pragma pack(push, 1)
class CQrySettlementGroupStatusField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQrySettlementGroupStatusField,
(CSettlementGroupIDType,	SettlementGroupID)
);

#pragma pack(push, 1)
class CQryMBLMarketDataField
{
public:
CInstrumentIDType InstIDStart;   ///��ʼ��Լ����
CInstrumentIDType InstIDEnd;   ///������Լ����
CDirectionType Direction;   ///��������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryMBLMarketDataField,
(CInstrumentIDType,	InstIDStart)
(CInstrumentIDType,	InstIDEnd)
(CDirectionType,	Direction)
);

#pragma pack(push, 1)
class CQryExchangeDataSyncStatusField
{
public:
CExchangeIDType ExchangeID;   ///����������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryExchangeDataSyncStatusField,
(CExchangeIDType,	ExchangeID)
);

#pragma pack(push, 1)
class CQryCombOrderField
{
public:
CParticipantIDType PartIDStart;   ///��ʼ��Ա����
CParticipantIDType PartIDEnd;   ///������Ա����
COrderSysIDType CombOrderSysID;   ///��ϱ������
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryCombOrderField,
(CParticipantIDType,	PartIDStart)
(CParticipantIDType,	PartIDEnd)
(COrderSysIDType,	CombOrderSysID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
);

#pragma pack(push, 1)
class CRspPartAccountField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CMoneyType PreBalance;   ///�ϴν���׼����
CMoneyType CurrMargin;   ///��ǰ��֤���ܶ�
CMoneyType CloseProfit;   ///ƽ��ӯ��
CMoneyType Premium;   ///��ȨȨ������֧
CMoneyType Deposit;   ///�����
CMoneyType Withdraw;   ///������
CMoneyType Balance;   ///�ڻ�����׼����
CMoneyType Available;   ///�����ʽ�
CAccountIDType AccountID;   ///�ʽ��ʺ�
CMoneyType FrozenMargin;   ///����ı�֤��
CMoneyType FrozenPremium;   ///�����Ȩ����
CMoneyType BaseReserve;   ///����׼����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CRspPartAccountField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CMoneyType,	PreBalance)
(CMoneyType,	CurrMargin)
(CMoneyType,	CloseProfit)
(CMoneyType,	Premium)
(CMoneyType,	Deposit)
(CMoneyType,	Withdraw)
(CMoneyType,	Balance)
(CMoneyType,	Available)
(CAccountIDType,	AccountID)
(CMoneyType,	FrozenMargin)
(CMoneyType,	FrozenPremium)
(CMoneyType,	BaseReserve)
);

#pragma pack(push, 1)
class CRspPartPositionField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CHedgeFlagType HedgeFlag;   ///Ͷ���ױ���־
CPosiDirectionType PosiDirection;   ///�ֲֶ�շ���
CVolumeType YdPosition;   ///���ճֲ�
CVolumeType Position;   ///���ճֲ�
CVolumeType LongFrozen;   ///��ͷ����
CVolumeType ShortFrozen;   ///��ͷ����
CVolumeType YdLongFrozen;   ///���ն�ͷ����
CVolumeType YdShortFrozen;   ///���տ�ͷ����
CInstrumentIDType InstrumentID;   ///��Լ����
CParticipantIDType ParticipantID;   ///��Ա����
CTradingRoleType TradingRole;   ///���׽�ɫ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CRspPartPositionField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CHedgeFlagType,	HedgeFlag)
(CPosiDirectionType,	PosiDirection)
(CVolumeType,	YdPosition)
(CVolumeType,	Position)
(CVolumeType,	LongFrozen)
(CVolumeType,	ShortFrozen)
(CVolumeType,	YdLongFrozen)
(CVolumeType,	YdShortFrozen)
(CInstrumentIDType,	InstrumentID)
(CParticipantIDType,	ParticipantID)
(CTradingRoleType,	TradingRole)
);

#pragma pack(push, 1)
class CRspClientPositionField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CHedgeFlagType HedgeFlag;   ///Ͷ���ױ���־
CPosiDirectionType PosiDirection;   ///�ֲֶ�շ���
CVolumeType YdPosition;   ///���ճֲ�
CVolumeType Position;   ///���ճֲ�
CVolumeType LongFrozen;   ///��ͷ����
CVolumeType ShortFrozen;   ///��ͷ����
CVolumeType YdLongFrozen;   ///���ն�ͷ����
CVolumeType YdShortFrozen;   ///���տ�ͷ����
CVolumeType BuyTradeVolume;   ///������ɽ���
CVolumeType SellTradeVolume;   ///�������ɽ���
CMoneyType PositionCost;   ///�ֲֳɱ�
CMoneyType YdPositionCost;   ///���ճֲֳɱ�
CMoneyType UseMargin;   ///ռ�õı�֤��
CMoneyType FrozenMargin;   ///����ı�֤��
CMoneyType LongFrozenMargin;   ///��ͷ����ı�֤��
CMoneyType ShortFrozenMargin;   ///��ͷ����ı�֤��
CMoneyType FrozenPremium;   ///�����Ȩ����
CInstrumentIDType InstrumentID;   ///��Լ����
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CRspClientPositionField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CHedgeFlagType,	HedgeFlag)
(CPosiDirectionType,	PosiDirection)
(CVolumeType,	YdPosition)
(CVolumeType,	Position)
(CVolumeType,	LongFrozen)
(CVolumeType,	ShortFrozen)
(CVolumeType,	YdLongFrozen)
(CVolumeType,	YdShortFrozen)
(CVolumeType,	BuyTradeVolume)
(CVolumeType,	SellTradeVolume)
(CMoneyType,	PositionCost)
(CMoneyType,	YdPositionCost)
(CMoneyType,	UseMargin)
(CMoneyType,	FrozenMargin)
(CMoneyType,	LongFrozenMargin)
(CMoneyType,	ShortFrozenMargin)
(CMoneyType,	FrozenPremium)
(CInstrumentIDType,	InstrumentID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
);

#pragma pack(push, 1)
class CRspInstrumentField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CProductIDType ProductID;   ///��Ʒ����
CProductGroupIDType ProductGroupID;   ///��Ʒ�����
CInstrumentIDType UnderlyingInstrID;   ///������Ʒ����
CProductClassType ProductClass;   ///��Ʒ����
CPositionTypeType PositionType;   ///�ֲ�����
CPriceType StrikePrice;   ///ִ�м�
COptionsTypeType OptionsType;   ///��Ȩ����
CVolumeMultipleType VolumeMultiple;   ///��Լ��������
CUnderlyingMultipleType UnderlyingMultiple;   ///��Լ������Ʒ����
CInstrumentIDType InstrumentID;   ///��Լ����
CInstrumentNameType InstrumentName;   ///��Լ����
CYearType DeliveryYear;   ///�������
CMonthType DeliveryMonth;   ///������
CAdvanceMonthType AdvanceMonth;   ///��ǰ�·�
CBoolType IsTrading;   ///��ǰ�Ƿ���
CDateType CreateDate;   ///������
CDateType OpenDate;   ///������
CDateType ExpireDate;   ///������
CDateType StartDelivDate;   ///��ʼ������
CDateType EndDelivDate;   ///��󽻸���
CPriceType BasisPrice;   ///���ƻ�׼��
CVolumeType MaxMarketOrderVolume;   ///�м۵�����µ���
CVolumeType MinMarketOrderVolume;   ///�м۵���С�µ���
CVolumeType MaxLimitOrderVolume;   ///�޼۵�����µ���
CVolumeType MinLimitOrderVolume;   ///�޼۵���С�µ���
CPriceType PriceTick;   ///��С�䶯��λ
CMonthCountType AllowDelivPersonOpen;   ///��������Ȼ�˿���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CRspInstrumentField,
(CSettlementGroupIDType,	SettlementGroupID)
(CProductIDType,	ProductID)
(CProductGroupIDType,	ProductGroupID)
(CInstrumentIDType,	UnderlyingInstrID)
(CProductClassType,	ProductClass)
(CPositionTypeType,	PositionType)
(CPriceType,	StrikePrice)
(COptionsTypeType,	OptionsType)
(CVolumeMultipleType,	VolumeMultiple)
(CUnderlyingMultipleType,	UnderlyingMultiple)
(CInstrumentIDType,	InstrumentID)
(CInstrumentNameType,	InstrumentName)
(CYearType,	DeliveryYear)
(CMonthType,	DeliveryMonth)
(CAdvanceMonthType,	AdvanceMonth)
(CBoolType,	IsTrading)
(CDateType,	CreateDate)
(CDateType,	OpenDate)
(CDateType,	ExpireDate)
(CDateType,	StartDelivDate)
(CDateType,	EndDelivDate)
(CPriceType,	BasisPrice)
(CVolumeType,	MaxMarketOrderVolume)
(CVolumeType,	MinMarketOrderVolume)
(CVolumeType,	MaxLimitOrderVolume)
(CVolumeType,	MinLimitOrderVolume)
(CPriceType,	PriceTick)
(CMonthCountType,	AllowDelivPersonOpen)
);

#pragma pack(push, 1)
class CQryInformationField
{
public:
CInformationIDType InformationIDStart;   ///��ʼ��Ϣ����
CInformationIDType InformationIDEnd;   ///������Ϣ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryInformationField,
(CInformationIDType,	InformationIDStart)
(CInformationIDType,	InformationIDEnd)
);

#pragma pack(push, 1)
class CInformationField
{
public:
CInformationIDType InformationID;   ///��Ϣ���
CSequenceNoType SequenceNo;   ///���к�
CContentType Content;   ///��Ϣ����
CContentLengthType ContentLength;   ///���ĳ���
CBoolType IsAccomplished;   ///�Ƿ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CInformationField,
(CInformationIDType,	InformationID)
(CSequenceNoType,	SequenceNo)
(CContentType,	Content)
(CContentLengthType,	ContentLength)
(CBoolType,	IsAccomplished)
);

#pragma pack(push, 1)
class CQryCreditLimitField
{
public:
CParticipantIDType ParticipantID;   ///���׻�Ա���
CParticipantIDType ClearingPartID;   ///�����Ա���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryCreditLimitField,
(CParticipantIDType,	ParticipantID)
(CParticipantIDType,	ClearingPartID)
);

#pragma pack(push, 1)
class CCreditLimitField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CMoneyType PreBalance;   ///�ϴν���׼����
CMoneyType CurrMargin;   ///��ǰ��֤���ܶ�
CMoneyType CloseProfit;   ///ƽ��ӯ��
CMoneyType Premium;   ///��ȨȨ������֧
CMoneyType Deposit;   ///�����
CMoneyType Withdraw;   ///������
CMoneyType Balance;   ///�ڻ�����׼����
CMoneyType Available;   ///�����ʽ�
CParticipantIDType ParticipantID;   ///���׻�Ա���
CParticipantIDType ClearingPartID;   ///�����Ա���
CMoneyType FrozenMargin;   ///����ı�֤��
CMoneyType FrozenPremium;   ///�����Ȩ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCreditLimitField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CMoneyType,	PreBalance)
(CMoneyType,	CurrMargin)
(CMoneyType,	CloseProfit)
(CMoneyType,	Premium)
(CMoneyType,	Deposit)
(CMoneyType,	Withdraw)
(CMoneyType,	Balance)
(CMoneyType,	Available)
(CParticipantIDType,	ParticipantID)
(CParticipantIDType,	ClearingPartID)
(CMoneyType,	FrozenMargin)
(CMoneyType,	FrozenPremium)
);

#pragma pack(push, 1)
class CRspClientField
{
public:
CClientIDType ClientID;   ///�ͻ�����
CClientNameType ClientName;   ///�ͻ�����
CIdCardTypeType IdentifiedCardType;   ///֤������
CIdentifiedCardNoType IdentifiedCardNo;   ///֤������
CTradingRoleType TradingRole;   ///���׽�ɫ
CClientTypeType ClientType;   ///�ͻ�����
CBoolType IsActive;   ///�Ƿ��Ծ
CHedgeFlagType HedgeFlag;   ///�ͻ���������
CParticipantIDType ParticipantID;   ///��Ա��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CRspClientField,
(CClientIDType,	ClientID)
(CClientNameType,	ClientName)
(CIdCardTypeType,	IdentifiedCardType)
(CIdentifiedCardNoType,	IdentifiedCardNo)
(CTradingRoleType,	TradingRole)
(CClientTypeType,	ClientType)
(CBoolType,	IsActive)
(CHedgeFlagType,	HedgeFlag)
(CParticipantIDType,	ParticipantID)
);

#pragma pack(push, 1)
class CExchangeField
{
public:
CExchangeIDType ExchangeID;   ///����������
CExchangeNameType ExchangeName;   ///����������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CExchangeField,
(CExchangeIDType,	ExchangeID)
(CExchangeNameType,	ExchangeName)
);

#pragma pack(push, 1)
class CSettlementGroupField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementGroupNameType SettlementGroupName;   ///����������
CExchangeIDType ExchangeID;   ///����������
CCurrencyType Currency;   ///����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CSettlementGroupField,
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementGroupNameType,	SettlementGroupName)
(CExchangeIDType,	ExchangeID)
(CCurrencyType,	Currency)
);

#pragma pack(push, 1)
class CMarketField
{
public:
CMarketIDType MarketID;   ///�г�����
CMarketNameType MarketName;   ///�г�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketField,
(CMarketIDType,	MarketID)
(CMarketNameType,	MarketName)
);

#pragma pack(push, 1)
class CMarketProductField
{
public:
CMarketIDType MarketID;   ///�г�����
CProductIDType ProductID;   ///��Ʒ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketProductField,
(CMarketIDType,	MarketID)
(CProductIDType,	ProductID)
);

#pragma pack(push, 1)
class CMarketProductGroupField
{
public:
CMarketIDType MarketID;   ///�г�����
CProductGroupIDType ProductGroupID;   ///��Ʒ�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketProductGroupField,
(CMarketIDType,	MarketID)
(CProductGroupIDType,	ProductGroupID)
);

#pragma pack(push, 1)
class CMarketDataTopicField
{
public:
CTopicIDType TopicID;   ///�������
CTopicNameType TopicName;   ///��������
CMarketIDType MarketID;   ///�г�����
CSecondsType SnapShotFeq;   ///����Ƶ��
CMarketDataDepthType MarketDataDepth;   ///�г��������
CSecondsType DelaySeconds;   ///�ӳ�����
CMarketDataModeType MarketDataMode;   ///����ģʽ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketDataTopicField,
(CTopicIDType,	TopicID)
(CTopicNameType,	TopicName)
(CMarketIDType,	MarketID)
(CSecondsType,	SnapShotFeq)
(CMarketDataDepthType,	MarketDataDepth)
(CSecondsType,	DelaySeconds)
(CMarketDataModeType,	MarketDataMode)
);

#pragma pack(push, 1)
class CPartTopicSubscribeField
{
public:
CParticipantIDType ParticipantID;   ///�����ߴ���
CParticipantTypeType ParticipantType;   ///����������
CTopicIDType TopicID;   ///�������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CPartTopicSubscribeField,
(CParticipantIDType,	ParticipantID)
(CParticipantTypeType,	ParticipantType)
(CTopicIDType,	TopicID)
);

#pragma pack(push, 1)
class CParticipantField
{
public:
CParticipantIDType ParticipantID;   ///��Ա����
CParticipantNameType ParticipantName;   ///��Ա����
CParticipantAbbrType ParticipantAbbr;   ///��Ա���
CMemberTypeType MemberType;   ///��Ա����
CBoolType IsActive;   ///�Ƿ��Ծ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CParticipantField,
(CParticipantIDType,	ParticipantID)
(CParticipantNameType,	ParticipantName)
(CParticipantAbbrType,	ParticipantAbbr)
(CMemberTypeType,	MemberType)
(CBoolType,	IsActive)
);

#pragma pack(push, 1)
class CUserField
{
public:
CParticipantIDType ParticipantID;   ///��Ա����
CUserIDType UserID;   ///�����û�����
CUserTypeType UserType;   ///�����û�����
CPasswordType Password;   ///����
CUserActiveType IsActive;   ///����ԱȨ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CUserField,
(CParticipantIDType,	ParticipantID)
(CUserIDType,	UserID)
(CUserTypeType,	UserType)
(CPasswordType,	Password)
(CUserActiveType,	IsActive)
);

#pragma pack(push, 1)
class CClientField
{
public:
CClientIDType ClientID;   ///�ͻ�����
CClientNameType ClientName;   ///�ͻ�����
CIdCardTypeType IdentifiedCardType;   ///֤������
CIdentifiedCardNoType IdentifiedCardNo;   ///֤������
CTradingRoleType TradingRole;   ///���׽�ɫ
CClientTypeType ClientType;   ///�ͻ�����
CBoolType IsActive;   ///�Ƿ��Ծ
CHedgeFlagType HedgeFlag;   ///�ͻ���������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CClientField,
(CClientIDType,	ClientID)
(CClientNameType,	ClientName)
(CIdCardTypeType,	IdentifiedCardType)
(CIdentifiedCardNoType,	IdentifiedCardNo)
(CTradingRoleType,	TradingRole)
(CClientTypeType,	ClientType)
(CBoolType,	IsActive)
(CHedgeFlagType,	HedgeFlag)
);

#pragma pack(push, 1)
class CPartClientField
{
public:
CClientIDType ClientID;   ///�ͻ�����
CParticipantIDType ParticipantID;   ///��Ա����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CPartClientField,
(CClientIDType,	ClientID)
(CParticipantIDType,	ParticipantID)
);

#pragma pack(push, 1)
class CUserIPField
{
public:
CUserIDType UserID;   ///�����û�����
CIPAddressType IPAddress;   ///IP��ַ
CIPAddressType IPMask;   ///IP��ַ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CUserIPField,
(CUserIDType,	UserID)
(CIPAddressType,	IPAddress)
(CIPAddressType,	IPMask)
);

#pragma pack(push, 1)
class CUserSessionField
{
public:
CFrontIDType FrontID;   ///ǰ�ñ��
CUserIDType UserID;   ///�����û�����
CUserTypeType UserType;   ///�����û�����
CSessionIDType SessionID;   ///�Ự���
CTimeType LoginTime;   ///��¼ʱ��
CParticipantIDType ParticipantID;   ///��Ա����
CIPAddressType IPAddress;   ///IP��ַ
CProductInfoType UserProductInfo;   ///�û��˲�Ʒ��Ϣ
CProductInfoType InterfaceProductInfo;   ///�ӿڶ˲�Ʒ��Ϣ
CProtocolInfoType ProtocolInfo;   ///Э����Ϣ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CUserSessionField,
(CFrontIDType,	FrontID)
(CUserIDType,	UserID)
(CUserTypeType,	UserType)
(CSessionIDType,	SessionID)
(CTimeType,	LoginTime)
(CParticipantIDType,	ParticipantID)
(CIPAddressType,	IPAddress)
(CProductInfoType,	UserProductInfo)
(CProductInfoType,	InterfaceProductInfo)
(CProtocolInfoType,	ProtocolInfo)
);

#pragma pack(push, 1)
class CMdPubStatusField
{
public:
CProductIDType ProductID;   ///��Ʒ����
CInstrumentStatusType InstrumentStatus;   ///��Լ����״̬
CMdPubStatusType MdPubStatus;   ///���鷢��״̬
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMdPubStatusField,
(CProductIDType,	ProductID)
(CInstrumentStatusType,	InstrumentStatus)
(CMdPubStatusType,	MdPubStatus)
);

#pragma pack(push, 1)
class CClearingTradingPartField
{
public:
CParticipantIDType ClearingPartID;   ///�����Ա
CParticipantIDType ParticipantID;   ///���׻�Ա
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CClearingTradingPartField,
(CParticipantIDType,	ClearingPartID)
(CParticipantIDType,	ParticipantID)
);

#pragma pack(push, 1)
class CUserFunctionRightField
{
public:
CUserIDType UserID;   ///�����û�����
CFunctionCodeType FunctionCode;   ///���ܴ���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CUserFunctionRightField,
(CUserIDType,	UserID)
(CFunctionCodeType,	FunctionCode)
);

#pragma pack(push, 1)
class CAccountField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CAccountIDType AccountID;   ///�ʽ��ʺ�
CParticipantIDType ParticipantID;   ///��Ա����
CCurrencyType Currency;   ///����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CAccountField,
(CSettlementGroupIDType,	SettlementGroupID)
(CAccountIDType,	AccountID)
(CParticipantIDType,	ParticipantID)
(CCurrencyType,	Currency)
);

#pragma pack(push, 1)
class CUserCommFluxField
{
public:
CUserIDType UserID;   ///�����û�����
CCommFluxType MaxCommFlux;   ///���ͨѶ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CUserCommFluxField,
(CUserIDType,	UserID)
(CCommFluxType,	MaxCommFlux)
);

#pragma pack(push, 1)
class CProductGroupField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CProductGroupIDType ProductGroupID;   ///��Ʒ�����
CProductGroupNameType ProductGroupName;   ///��Ʒ������
CCommodityIDType CommodityID;   ///��Ʒ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CProductGroupField,
(CSettlementGroupIDType,	SettlementGroupID)
(CProductGroupIDType,	ProductGroupID)
(CProductGroupNameType,	ProductGroupName)
(CCommodityIDType,	CommodityID)
);

#pragma pack(push, 1)
class CProductField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CProductIDType ProductID;   ///��Ʒ����
CProductGroupIDType ProductGroupID;   ///��Ʒ�����
CProductNameType ProductName;   ///��Ʒ����
CProductClassType ProductClass;   ///��Ʒ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CProductField,
(CSettlementGroupIDType,	SettlementGroupID)
(CProductIDType,	ProductID)
(CProductGroupIDType,	ProductGroupID)
(CProductNameType,	ProductName)
(CProductClassType,	ProductClass)
);

#pragma pack(push, 1)
class CInstrumentField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CProductIDType ProductID;   ///��Ʒ����
CProductGroupIDType ProductGroupID;   ///��Ʒ�����
CInstrumentIDType UnderlyingInstrID;   ///������Ʒ����
CProductClassType ProductClass;   ///��Ʒ����
CPositionTypeType PositionType;   ///�ֲ�����
CPriceType StrikePrice;   ///ִ�м�
COptionsTypeType OptionsType;   ///��Ȩ����
CVolumeMultipleType VolumeMultiple;   ///��Լ��������
CUnderlyingMultipleType UnderlyingMultiple;   ///��Լ������Ʒ����
CInstrumentIDType InstrumentID;   ///��Լ����
CInstrumentNameType InstrumentName;   ///��Լ����
CYearType DeliveryYear;   ///�������
CMonthType DeliveryMonth;   ///������
CAdvanceMonthType AdvanceMonth;   ///��ǰ�·�
CBoolType IsTrading;   ///��ǰ�Ƿ���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CInstrumentField,
(CSettlementGroupIDType,	SettlementGroupID)
(CProductIDType,	ProductID)
(CProductGroupIDType,	ProductGroupID)
(CInstrumentIDType,	UnderlyingInstrID)
(CProductClassType,	ProductClass)
(CPositionTypeType,	PositionType)
(CPriceType,	StrikePrice)
(COptionsTypeType,	OptionsType)
(CVolumeMultipleType,	VolumeMultiple)
(CUnderlyingMultipleType,	UnderlyingMultiple)
(CInstrumentIDType,	InstrumentID)
(CInstrumentNameType,	InstrumentName)
(CYearType,	DeliveryYear)
(CMonthType,	DeliveryMonth)
(CAdvanceMonthType,	AdvanceMonth)
(CBoolType,	IsTrading)
);

#pragma pack(push, 1)
class CCombinationLegField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CInstrumentIDType CombInstrumentID;   ///��Ϻ�Լ����
CLegIDType LegID;   ///���ȱ��
CInstrumentIDType LegInstrumentID;   ///���Ⱥ�Լ����
CDirectionType Direction;   ///��������
CLegMultipleType LegMultiple;   ///���ȳ���
CImplyLevelType ImplyLevel;   ///�Ƶ�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCombinationLegField,
(CSettlementGroupIDType,	SettlementGroupID)
(CInstrumentIDType,	CombInstrumentID)
(CLegIDType,	LegID)
(CInstrumentIDType,	LegInstrumentID)
(CDirectionType,	Direction)
(CLegMultipleType,	LegMultiple)
(CImplyLevelType,	ImplyLevel)
);

#pragma pack(push, 1)
class CPartRoleAccountField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CParticipantIDType ParticipantID;   ///��Ա����
CTradingRoleType TradingRole;   ///���׽�ɫ
CAccountIDType AccountID;   ///�ʽ��ʺ�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CPartRoleAccountField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CParticipantIDType,	ParticipantID)
(CTradingRoleType,	TradingRole)
(CAccountIDType,	AccountID)
);

#pragma pack(push, 1)
class CPartProductRoleField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CParticipantIDType ParticipantID;   ///��Ա����
CProductIDType ProductID;   ///��Ʒ����
CTradingRoleType TradingRole;   ///���׽�ɫ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CPartProductRoleField,
(CSettlementGroupIDType,	SettlementGroupID)
(CParticipantIDType,	ParticipantID)
(CProductIDType,	ProductID)
(CTradingRoleType,	TradingRole)
);

#pragma pack(push, 1)
class CPartProductRightField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CProductIDType ProductID;   ///��Ʒ����
CParticipantIDType ParticipantID;   ///��Ա����
CTradingRightType TradingRight;   ///����Ȩ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CPartProductRightField,
(CSettlementGroupIDType,	SettlementGroupID)
(CProductIDType,	ProductID)
(CParticipantIDType,	ParticipantID)
(CTradingRightType,	TradingRight)
);

#pragma pack(push, 1)
class CPartInstrumentRightField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CInstrumentIDType InstrumentID;   ///��Լ����
CParticipantIDType ParticipantID;   ///��Ա����
CTradingRightType TradingRight;   ///����Ȩ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CPartInstrumentRightField,
(CSettlementGroupIDType,	SettlementGroupID)
(CInstrumentIDType,	InstrumentID)
(CParticipantIDType,	ParticipantID)
(CTradingRightType,	TradingRight)
);

#pragma pack(push, 1)
class CClientProductRightField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CProductIDType ProductID;   ///��Ʒ����
CClientIDType ClientID;   ///�ͻ�����
CTradingRightType TradingRight;   ///����Ȩ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CClientProductRightField,
(CSettlementGroupIDType,	SettlementGroupID)
(CProductIDType,	ProductID)
(CClientIDType,	ClientID)
(CTradingRightType,	TradingRight)
);

#pragma pack(push, 1)
class CClientInstrumentRightField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CInstrumentIDType InstrumentID;   ///��Լ����
CClientIDType ClientID;   ///�ͻ�����
CTradingRightType TradingRight;   ///����Ȩ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CClientInstrumentRightField,
(CSettlementGroupIDType,	SettlementGroupID)
(CInstrumentIDType,	InstrumentID)
(CClientIDType,	ClientID)
(CTradingRightType,	TradingRight)
);

#pragma pack(push, 1)
class CCurrProductPropertyField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CProductIDType ProductID;   ///��Ʒ����
CProductLifePhaseType ProductLifePhase;   ///��Ʒ��������״̬
CTradingModelType TradingModel;   ///����ģʽ
CRatioType OptionsLimitRatio;   ///��Ȩ�޲�ϵ��
CRatioType OptionsMgRatio;   ///��Ȩ��֤�����ϵ��
CSettlePriceSecondsType SettlePriceSeconds;   ///����ȡ��ʱ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrProductPropertyField,
(CSettlementGroupIDType,	SettlementGroupID)
(CProductIDType,	ProductID)
(CProductLifePhaseType,	ProductLifePhase)
(CTradingModelType,	TradingModel)
(CRatioType,	OptionsLimitRatio)
(CRatioType,	OptionsMgRatio)
(CSettlePriceSecondsType,	SettlePriceSeconds)
);

#pragma pack(push, 1)
class CCurrInstrumentPropertyField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CDateType CreateDate;   ///������
CDateType OpenDate;   ///������
CDateType ExpireDate;   ///������
CDateType StartDelivDate;   ///��ʼ������
CDateType EndDelivDate;   ///��󽻸���
CPriceType BasisPrice;   ///���ƻ�׼��
CVolumeType MaxMarketOrderVolume;   ///�м۵�����µ���
CVolumeType MinMarketOrderVolume;   ///�м۵���С�µ���
CVolumeType MaxLimitOrderVolume;   ///�޼۵�����µ���
CVolumeType MinLimitOrderVolume;   ///�޼۵���С�µ���
CPriceType PriceTick;   ///��С�䶯��λ
CMonthCountType AllowDelivPersonOpen;   ///��������Ȼ�˿���
CInstrumentIDType InstrumentID;   ///��Լ����
CInstLifePhaseType InstLifePhase;   ///��Լ��������״̬
CBoolType IsFirstTradingDay;   ///�Ƿ��׽�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrInstrumentPropertyField,
(CSettlementGroupIDType,	SettlementGroupID)
(CDateType,	CreateDate)
(CDateType,	OpenDate)
(CDateType,	ExpireDate)
(CDateType,	StartDelivDate)
(CDateType,	EndDelivDate)
(CPriceType,	BasisPrice)
(CVolumeType,	MaxMarketOrderVolume)
(CVolumeType,	MinMarketOrderVolume)
(CVolumeType,	MaxLimitOrderVolume)
(CVolumeType,	MinLimitOrderVolume)
(CPriceType,	PriceTick)
(CMonthCountType,	AllowDelivPersonOpen)
(CInstrumentIDType,	InstrumentID)
(CInstLifePhaseType,	InstLifePhase)
(CBoolType,	IsFirstTradingDay)
);

#pragma pack(push, 1)
class CCurrPriceBandingField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CPriceLimitTypeType PriceLimitType;   ///�޼�����
CValueModeType ValueMode;   ///ȡֵ��ʽ
CRoundingModeType RoundingMode;   ///���뷽ʽ
CPriceType UpperValue;   ///����
CPriceType LowerValue;   ///����
CInstrumentIDType InstrumentID;   ///��Լ����
CTradingSegmentSNType TradingSegmentSN;   ///���׽׶α��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrPriceBandingField,
(CSettlementGroupIDType,	SettlementGroupID)
(CPriceLimitTypeType,	PriceLimitType)
(CValueModeType,	ValueMode)
(CRoundingModeType,	RoundingMode)
(CPriceType,	UpperValue)
(CPriceType,	LowerValue)
(CInstrumentIDType,	InstrumentID)
(CTradingSegmentSNType,	TradingSegmentSN)
);

#pragma pack(push, 1)
class CCurrMarginRateField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CMarginCalcIDType MarginCalcID;   ///��֤���㷨����
CInstrumentIDType InstrumentID;   ///��Լ����
CParticipantIDType ParticipantID;   ///��Ա����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrMarginRateField,
(CSettlementGroupIDType,	SettlementGroupID)
(CMarginCalcIDType,	MarginCalcID)
(CInstrumentIDType,	InstrumentID)
(CParticipantIDType,	ParticipantID)
);

#pragma pack(push, 1)
class CCurrMarginRateDetailField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CTradingRoleType TradingRole;   ///���׽�ɫ
CHedgeFlagType HedgeFlag;   ///Ͷ���ױ���־
CValueModeType ValueMode;   ///ȡֵ��ʽ
CRatioType LongMarginRatio;   ///��ͷ��֤����
CRatioType ShortMarginRatio;   ///��ͷ��֤����
CInstrumentIDType InstrumentID;   ///��Լ����
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrMarginRateDetailField,
(CSettlementGroupIDType,	SettlementGroupID)
(CTradingRoleType,	TradingRole)
(CHedgeFlagType,	HedgeFlag)
(CValueModeType,	ValueMode)
(CRatioType,	LongMarginRatio)
(CRatioType,	ShortMarginRatio)
(CInstrumentIDType,	InstrumentID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
);

#pragma pack(push, 1)
class CCurrPartPosiLimitField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CPartPosiLimitCalcIDType PartPosiLimitCalcID;   ///��Ա�޲��㷨����
CInstrumentIDType InstrumentID;   ///��Լ����
CParticipantIDType ParticipantID;   ///��Ա����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrPartPosiLimitField,
(CSettlementGroupIDType,	SettlementGroupID)
(CPartPosiLimitCalcIDType,	PartPosiLimitCalcID)
(CInstrumentIDType,	InstrumentID)
(CParticipantIDType,	ParticipantID)
);

#pragma pack(push, 1)
class CCurrPartPosiLimitDetailField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CLargeVolumeType StartTotalPosition;   ///�޲����
CValueModeType ValueMode;   ///ȡֵ��ʽ
CRatioType LongPosLimit;   ///��ͷ�޲�
CRatioType ShortPosLimit;   ///��ͷ�޲�
CInstrumentIDType InstrumentID;   ///��Լ����
CParticipantIDType ParticipantID;   ///��Ա����
CPositionTradingRoleType TradingRole;   ///���׽�ɫ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrPartPosiLimitDetailField,
(CSettlementGroupIDType,	SettlementGroupID)
(CLargeVolumeType,	StartTotalPosition)
(CValueModeType,	ValueMode)
(CRatioType,	LongPosLimit)
(CRatioType,	ShortPosLimit)
(CInstrumentIDType,	InstrumentID)
(CParticipantIDType,	ParticipantID)
(CPositionTradingRoleType,	TradingRole)
);

#pragma pack(push, 1)
class CCurrClientPosiLimitField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CClientPosiLimitCalcIDType ClientPosiLimitCalcID;   ///�ͻ��޲��㷨����
CInstrumentIDType InstrumentID;   ///��Լ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrClientPosiLimitField,
(CSettlementGroupIDType,	SettlementGroupID)
(CClientPosiLimitCalcIDType,	ClientPosiLimitCalcID)
(CInstrumentIDType,	InstrumentID)
);

#pragma pack(push, 1)
class CCurrClientPosiLimitDetailField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CLargeVolumeType StartTotalPosition;   ///�޲����
CValueModeType ValueMode;   ///ȡֵ��ʽ
CRatioType LongPosLimit;   ///��ͷ�޲�
CRatioType ShortPosLimit;   ///��ͷ�޲�
CInstrumentIDType InstrumentID;   ///��Լ����
CClientTypeType ClientType;   ///�ͻ�����
CHedgeFlagType HedgeFlag;   ///�ͻ���������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrClientPosiLimitDetailField,
(CSettlementGroupIDType,	SettlementGroupID)
(CLargeVolumeType,	StartTotalPosition)
(CValueModeType,	ValueMode)
(CRatioType,	LongPosLimit)
(CRatioType,	ShortPosLimit)
(CInstrumentIDType,	InstrumentID)
(CClientTypeType,	ClientType)
(CHedgeFlagType,	HedgeFlag)
);

#pragma pack(push, 1)
class CCurrSpecialPosiLimitField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CClientPosiLimitCalcIDType ClientPosiLimitCalcID;   ///�ͻ��޲��㷨����
CInstrumentIDType InstrumentID;   ///��Լ����
CClientIDType ClientID;   ///�ͻ�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrSpecialPosiLimitField,
(CSettlementGroupIDType,	SettlementGroupID)
(CClientPosiLimitCalcIDType,	ClientPosiLimitCalcID)
(CInstrumentIDType,	InstrumentID)
(CClientIDType,	ClientID)
);

#pragma pack(push, 1)
class CCurrSpecialPosiLimitDetailField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CLargeVolumeType StartTotalPosition;   ///�޲����
CValueModeType ValueMode;   ///ȡֵ��ʽ
CRatioType LongPosLimit;   ///��ͷ�޲�
CRatioType ShortPosLimit;   ///��ͷ�޲�
CInstrumentIDType InstrumentID;   ///��Լ����
CClientIDType ClientID;   ///�ͻ�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrSpecialPosiLimitDetailField,
(CSettlementGroupIDType,	SettlementGroupID)
(CLargeVolumeType,	StartTotalPosition)
(CValueModeType,	ValueMode)
(CRatioType,	LongPosLimit)
(CRatioType,	ShortPosLimit)
(CInstrumentIDType,	InstrumentID)
(CClientIDType,	ClientID)
);

#pragma pack(push, 1)
class CCurrHedgeRuleField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CHedgeUsageTypeType HedgeUsageType;   ///�ױ����ʹ������
CInstrumentIDType InstrumentID;   ///��Լ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrHedgeRuleField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CHedgeUsageTypeType,	HedgeUsageType)
(CInstrumentIDType,	InstrumentID)
);

#pragma pack(push, 1)
class CCurrTradingSegmentAttrField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CTradingSegmentSNType TradingSegmentSN;   ///���׽׶α��
CTradingSegmentNameType TradingSegmentName;   ///���׽׶�����
CTimeType StartTime;   ///��ʼʱ��
CInstrumentStatusType InstrumentStatus;   ///��Լ����״̬
CInstrumentIDType InstrumentID;   ///��Լ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrTradingSegmentAttrField,
(CSettlementGroupIDType,	SettlementGroupID)
(CTradingSegmentSNType,	TradingSegmentSN)
(CTradingSegmentNameType,	TradingSegmentName)
(CTimeType,	StartTime)
(CInstrumentStatusType,	InstrumentStatus)
(CInstrumentIDType,	InstrumentID)
);

#pragma pack(push, 1)
class CCurrFuseField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CPriceLimitTypeType PriceLimitType;   ///�޼�����
CValueModeType ValueMode;   ///ȡֵ��ʽ
CRoundingModeType RoundingMode;   ///���뷽ʽ
CPriceType UpperValue;   ///����
CPriceType LowerValue;   ///����
CDurationType PriceLimitDuration;   ///ͣ�����ʱ��
CDurationType FuseDuration;   ///�۶���
CBoolType TradingFlag;   ///�۶����Ƿ���
CTimeType NoFuseTime;   ///�������۶�ʱ��
CInstrumentIDType InstrumentID;   ///��Լ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCurrFuseField,
(CSettlementGroupIDType,	SettlementGroupID)
(CPriceLimitTypeType,	PriceLimitType)
(CValueModeType,	ValueMode)
(CRoundingModeType,	RoundingMode)
(CPriceType,	UpperValue)
(CPriceType,	LowerValue)
(CDurationType,	PriceLimitDuration)
(CDurationType,	FuseDuration)
(CBoolType,	TradingFlag)
(CTimeType,	NoFuseTime)
(CInstrumentIDType,	InstrumentID)
);

#pragma pack(push, 1)
class CTradingAccountField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CMoneyType PreBalance;   ///�ϴν���׼����
CMoneyType CurrMargin;   ///��ǰ��֤���ܶ�
CMoneyType CloseProfit;   ///ƽ��ӯ��
CMoneyType Premium;   ///��ȨȨ������֧
CMoneyType Deposit;   ///�����
CMoneyType Withdraw;   ///������
CMoneyType Balance;   ///�ڻ�����׼����
CMoneyType Available;   ///�����ʽ�
CAccountIDType AccountID;   ///�ʽ��ʺ�
CMoneyType FrozenMargin;   ///����ı�֤��
CMoneyType FrozenPremium;   ///�����Ȩ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CTradingAccountField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CMoneyType,	PreBalance)
(CMoneyType,	CurrMargin)
(CMoneyType,	CloseProfit)
(CMoneyType,	Premium)
(CMoneyType,	Deposit)
(CMoneyType,	Withdraw)
(CMoneyType,	Balance)
(CMoneyType,	Available)
(CAccountIDType,	AccountID)
(CMoneyType,	FrozenMargin)
(CMoneyType,	FrozenPremium)
);

#pragma pack(push, 1)
class CPartPositionField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CHedgeFlagType HedgeFlag;   ///Ͷ���ױ���־
CPosiDirectionType PosiDirection;   ///�ֲֶ�շ���
CVolumeType YdPosition;   ///���ճֲ�
CVolumeType Position;   ///���ճֲ�
CVolumeType LongFrozen;   ///��ͷ����
CVolumeType ShortFrozen;   ///��ͷ����
CVolumeType YdLongFrozen;   ///���ն�ͷ����
CVolumeType YdShortFrozen;   ///���տ�ͷ����
CInstrumentIDType InstrumentID;   ///��Լ����
CParticipantIDType ParticipantID;   ///��Ա����
CTradingRoleType TradingRole;   ///���׽�ɫ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CPartPositionField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CHedgeFlagType,	HedgeFlag)
(CPosiDirectionType,	PosiDirection)
(CVolumeType,	YdPosition)
(CVolumeType,	Position)
(CVolumeType,	LongFrozen)
(CVolumeType,	ShortFrozen)
(CVolumeType,	YdLongFrozen)
(CVolumeType,	YdShortFrozen)
(CInstrumentIDType,	InstrumentID)
(CParticipantIDType,	ParticipantID)
(CTradingRoleType,	TradingRole)
);

#pragma pack(push, 1)
class CClientPositionField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CHedgeFlagType HedgeFlag;   ///Ͷ���ױ���־
CPosiDirectionType PosiDirection;   ///�ֲֶ�շ���
CVolumeType YdPosition;   ///���ճֲ�
CVolumeType Position;   ///���ճֲ�
CVolumeType LongFrozen;   ///��ͷ����
CVolumeType ShortFrozen;   ///��ͷ����
CVolumeType YdLongFrozen;   ///���ն�ͷ����
CVolumeType YdShortFrozen;   ///���տ�ͷ����
CVolumeType BuyTradeVolume;   ///������ɽ���
CVolumeType SellTradeVolume;   ///�������ɽ���
CMoneyType PositionCost;   ///�ֲֳɱ�
CMoneyType YdPositionCost;   ///���ճֲֳɱ�
CMoneyType UseMargin;   ///ռ�õı�֤��
CMoneyType FrozenMargin;   ///����ı�֤��
CMoneyType LongFrozenMargin;   ///��ͷ����ı�֤��
CMoneyType ShortFrozenMargin;   ///��ͷ����ı�֤��
CMoneyType FrozenPremium;   ///�����Ȩ����
CInstrumentIDType InstrumentID;   ///��Լ����
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CClientPositionField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CHedgeFlagType,	HedgeFlag)
(CPosiDirectionType,	PosiDirection)
(CVolumeType,	YdPosition)
(CVolumeType,	Position)
(CVolumeType,	LongFrozen)
(CVolumeType,	ShortFrozen)
(CVolumeType,	YdLongFrozen)
(CVolumeType,	YdShortFrozen)
(CVolumeType,	BuyTradeVolume)
(CVolumeType,	SellTradeVolume)
(CMoneyType,	PositionCost)
(CMoneyType,	YdPositionCost)
(CMoneyType,	UseMargin)
(CMoneyType,	FrozenMargin)
(CMoneyType,	LongFrozenMargin)
(CMoneyType,	ShortFrozenMargin)
(CMoneyType,	FrozenPremium)
(CInstrumentIDType,	InstrumentID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
);

#pragma pack(push, 1)
class CHedgeVolumeField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CInstrumentIDType InstrumentID;   ///��Լ����
CVolumeType LongVolumeOriginal;   ///��ͷ��ֵ������������
CVolumeType ShortVolumeOriginal;   ///��ͷ��ֵ������������
CVolumeType LongVolume;   ///��ͷ��ֵ���
CVolumeType ShortVolume;   ///��ͷ��ֵ���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CHedgeVolumeField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CInstrumentIDType,	InstrumentID)
(CVolumeType,	LongVolumeOriginal)
(CVolumeType,	ShortVolumeOriginal)
(CVolumeType,	LongVolume)
(CVolumeType,	ShortVolume)
);

#pragma pack(push, 1)
class CRemainOrderField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
COrderSysIDType OrderSysID;   ///�������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
CInstrumentIDType InstrumentID;   ///��Լ����
COrderPriceTypeType OrderPriceType;   ///�����۸�����
CDirectionType Direction;   ///��������
CCombOffsetFlagType CombOffsetFlag;   ///��Ͽ�ƽ��־
CCombHedgeFlagType CombHedgeFlag;   ///���Ͷ���ױ���־
CPriceType LimitPrice;   ///�۸�
CVolumeType VolumeTotalOriginal;   ///����
CTimeConditionType TimeCondition;   ///��Ч������
CDateType GTDDate;   ///GTD����
CVolumeConditionType VolumeCondition;   ///�ɽ�������
CVolumeType MinVolume;   ///��С�ɽ���
CContingentConditionType ContingentCondition;   ///��������
CPriceType StopPrice;   ///ֹ���
CForceCloseReasonType ForceCloseReason;   ///ǿƽԭ��
COrderLocalIDType OrderLocalID;   ///���ر������
CBoolType IsAutoSuspend;   ///�Զ������־
CBusinessUnitType BusinessUnit;   ///ҵ��Ԫ
CMoneyType RiskPreFrozen;   ///���Ԥ����
COrderSourceType OrderSource;   ///������Դ
COrderStatusType OrderStatus;   ///����״̬
COrderTypeType OrderType;   ///��������
CVolumeType VolumeTraded;   ///��ɽ�����
CVolumeType VolumeTotal;   ///ʣ������
CDateType InsertDate;   ///��������
CTimeType InsertTime;   ///����ʱ��
CTimeType ActiveTime;   ///����ʱ��
CTimeType SuspendTime;   ///����ʱ��
CTimeType UpdateTime;   ///����޸�ʱ��
CTimeType CancelTime;   ///����ʱ��
CUserIDType ActiveUserID;   ///����޸Ľ����û�����
CPriorityType Priority;   ///����Ȩ
CTimeSortIDType TimeSortID;   ///��ʱ���Ŷӵ����
CParticipantIDType ClearingPartID;   ///�����Ա���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CRemainOrderField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(COrderSysIDType,	OrderSysID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(CInstrumentIDType,	InstrumentID)
(COrderPriceTypeType,	OrderPriceType)
(CDirectionType,	Direction)
(CCombOffsetFlagType,	CombOffsetFlag)
(CCombHedgeFlagType,	CombHedgeFlag)
(CPriceType,	LimitPrice)
(CVolumeType,	VolumeTotalOriginal)
(CTimeConditionType,	TimeCondition)
(CDateType,	GTDDate)
(CVolumeConditionType,	VolumeCondition)
(CVolumeType,	MinVolume)
(CContingentConditionType,	ContingentCondition)
(CPriceType,	StopPrice)
(CForceCloseReasonType,	ForceCloseReason)
(COrderLocalIDType,	OrderLocalID)
(CBoolType,	IsAutoSuspend)
(CBusinessUnitType,	BusinessUnit)
(CMoneyType,	RiskPreFrozen)
(COrderSourceType,	OrderSource)
(COrderStatusType,	OrderStatus)
(COrderTypeType,	OrderType)
(CVolumeType,	VolumeTraded)
(CVolumeType,	VolumeTotal)
(CDateType,	InsertDate)
(CTimeType,	InsertTime)
(CTimeType,	ActiveTime)
(CTimeType,	SuspendTime)
(CTimeType,	UpdateTime)
(CTimeType,	CancelTime)
(CUserIDType,	ActiveUserID)
(CPriorityType,	Priority)
(CTimeSortIDType,	TimeSortID)
(CParticipantIDType,	ClearingPartID)
);

#pragma pack(push, 1)
class CMarketDataField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CPriceType LastPrice;   ///���¼�
CPriceType PreSettlementPrice;   ///�����
CPriceType PreClosePrice;   ///������
CLargeVolumeType PreOpenInterest;   ///��ֲ���
CPriceType OpenPrice;   ///����
CPriceType HighestPrice;   ///��߼�
CPriceType LowestPrice;   ///��ͼ�
CVolumeType Volume;   ///����
CMoneyType Turnover;   ///�ɽ����
CLargeVolumeType OpenInterest;   ///�ֲ���
CPriceType ClosePrice;   ///������
CPriceType SettlementPrice;   ///�����
CPriceType UpperLimitPrice;   ///��ͣ���
CPriceType LowerLimitPrice;   ///��ͣ���
CRatioType PreDelta;   ///����ʵ��
CRatioType CurrDelta;   ///����ʵ��
CTimeType UpdateTime;   ///����޸�ʱ��
CMillisecType UpdateMillisec;   ///����޸ĺ���
CInstrumentIDType InstrumentID;   ///��Լ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketDataField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CPriceType,	LastPrice)
(CPriceType,	PreSettlementPrice)
(CPriceType,	PreClosePrice)
(CLargeVolumeType,	PreOpenInterest)
(CPriceType,	OpenPrice)
(CPriceType,	HighestPrice)
(CPriceType,	LowestPrice)
(CVolumeType,	Volume)
(CMoneyType,	Turnover)
(CLargeVolumeType,	OpenInterest)
(CPriceType,	ClosePrice)
(CPriceType,	SettlementPrice)
(CPriceType,	UpperLimitPrice)
(CPriceType,	LowerLimitPrice)
(CRatioType,	PreDelta)
(CRatioType,	CurrDelta)
(CTimeType,	UpdateTime)
(CMillisecType,	UpdateMillisec)
(CInstrumentIDType,	InstrumentID)
);

#pragma pack(push, 1)
class CDepthMarketDataField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CPriceType LastPrice;   ///���¼�
CPriceType PreSettlementPrice;   ///�����
CPriceType PreClosePrice;   ///������
CLargeVolumeType PreOpenInterest;   ///��ֲ���
CPriceType OpenPrice;   ///����
CPriceType HighestPrice;   ///��߼�
CPriceType LowestPrice;   ///��ͼ�
CVolumeType Volume;   ///����
CMoneyType Turnover;   ///�ɽ����
CLargeVolumeType OpenInterest;   ///�ֲ���
CPriceType ClosePrice;   ///������
CPriceType SettlementPrice;   ///�����
CPriceType UpperLimitPrice;   ///��ͣ���
CPriceType LowerLimitPrice;   ///��ͣ���
CRatioType PreDelta;   ///����ʵ��
CRatioType CurrDelta;   ///����ʵ��
CTimeType UpdateTime;   ///����޸�ʱ��
CMillisecType UpdateMillisec;   ///����޸ĺ���
CInstrumentIDType InstrumentID;   ///��Լ����
CPriceType BidPrice1;   ///�����һ
CVolumeType BidVolume1;   ///������һ
CPriceType AskPrice1;   ///������һ
CVolumeType AskVolume1;   ///������һ
CPriceType BidPrice2;   ///����۶�
CVolumeType BidVolume2;   ///��������
CPriceType AskPrice2;   ///�����۶�
CVolumeType AskVolume2;   ///��������
CPriceType BidPrice3;   ///�������
CVolumeType BidVolume3;   ///��������
CPriceType AskPrice3;   ///��������
CVolumeType AskVolume3;   ///��������
CPriceType BidPrice4;   ///�������
CVolumeType BidVolume4;   ///��������
CPriceType AskPrice4;   ///��������
CVolumeType AskVolume4;   ///��������
CPriceType BidPrice5;   ///�������
CVolumeType BidVolume5;   ///��������
CPriceType AskPrice5;   ///��������
CVolumeType AskVolume5;   ///��������
CPriceType BandingUpperPrice;   ///�ϴ���
CPriceType BandingLowerPrice;   ///�´���
CPriceType ReferencePrice;   ///��׼��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDepthMarketDataField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CPriceType,	LastPrice)
(CPriceType,	PreSettlementPrice)
(CPriceType,	PreClosePrice)
(CLargeVolumeType,	PreOpenInterest)
(CPriceType,	OpenPrice)
(CPriceType,	HighestPrice)
(CPriceType,	LowestPrice)
(CVolumeType,	Volume)
(CMoneyType,	Turnover)
(CLargeVolumeType,	OpenInterest)
(CPriceType,	ClosePrice)
(CPriceType,	SettlementPrice)
(CPriceType,	UpperLimitPrice)
(CPriceType,	LowerLimitPrice)
(CRatioType,	PreDelta)
(CRatioType,	CurrDelta)
(CTimeType,	UpdateTime)
(CMillisecType,	UpdateMillisec)
(CInstrumentIDType,	InstrumentID)
(CPriceType,	BidPrice1)
(CVolumeType,	BidVolume1)
(CPriceType,	AskPrice1)
(CVolumeType,	AskVolume1)
(CPriceType,	BidPrice2)
(CVolumeType,	BidVolume2)
(CPriceType,	AskPrice2)
(CVolumeType,	AskVolume2)
(CPriceType,	BidPrice3)
(CVolumeType,	BidVolume3)
(CPriceType,	AskPrice3)
(CVolumeType,	AskVolume3)
(CPriceType,	BidPrice4)
(CVolumeType,	BidVolume4)
(CPriceType,	AskPrice4)
(CVolumeType,	AskVolume4)
(CPriceType,	BidPrice5)
(CVolumeType,	BidVolume5)
(CPriceType,	AskPrice5)
(CVolumeType,	AskVolume5)
(CPriceType,	BandingUpperPrice)
(CPriceType,	BandingLowerPrice)
(CPriceType,	ReferencePrice)
);

#pragma pack(push, 1)
class CMBLMarketDataField
{
public:
CInstrumentIDType InstrumentID;   ///��Լ����
CDirectionType Direction;   ///��������
CPriceType Price;   ///�۸�
CVolumeType Volume;   ///����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMBLMarketDataField,
(CInstrumentIDType,	InstrumentID)
(CDirectionType,	Direction)
(CPriceType,	Price)
(CVolumeType,	Volume)
);

#pragma pack(push, 1)
class CAliasDefineField
{
public:
CStartPosType StartPos;   ///��ʼλ��
CAliasType Alias;   ///����
COriginalTextType OriginalText;   ///ԭ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CAliasDefineField,
(CStartPosType,	StartPos)
(CAliasType,	Alias)
(COriginalTextType,	OriginalText)
);

#pragma pack(push, 1)
class CMarketDataBaseField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CPriceType PreSettlementPrice;   ///�����
CPriceType PreClosePrice;   ///������
CLargeVolumeType PreOpenInterest;   ///��ֲ���
CRatioType PreDelta;   ///����ʵ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketDataBaseField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CPriceType,	PreSettlementPrice)
(CPriceType,	PreClosePrice)
(CLargeVolumeType,	PreOpenInterest)
(CRatioType,	PreDelta)
);

#pragma pack(push, 1)
class CMarketDataStaticField
{
public:
CPriceType OpenPrice;   ///����
CPriceType HighestPrice;   ///��߼�
CPriceType LowestPrice;   ///��ͼ�
CPriceType ClosePrice;   ///������
CPriceType UpperLimitPrice;   ///��ͣ���
CPriceType LowerLimitPrice;   ///��ͣ���
CPriceType SettlementPrice;   ///�����
CRatioType CurrDelta;   ///����ʵ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketDataStaticField,
(CPriceType,	OpenPrice)
(CPriceType,	HighestPrice)
(CPriceType,	LowestPrice)
(CPriceType,	ClosePrice)
(CPriceType,	UpperLimitPrice)
(CPriceType,	LowerLimitPrice)
(CPriceType,	SettlementPrice)
(CRatioType,	CurrDelta)
);

#pragma pack(push, 1)
class CMarketDataLastMatchField
{
public:
CPriceType LastPrice;   ///���¼�
CVolumeType Volume;   ///����
CMoneyType Turnover;   ///�ɽ����
CLargeVolumeType OpenInterest;   ///�ֲ���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketDataLastMatchField,
(CPriceType,	LastPrice)
(CVolumeType,	Volume)
(CMoneyType,	Turnover)
(CLargeVolumeType,	OpenInterest)
);

#pragma pack(push, 1)
class CMarketDataBestPriceField
{
public:
CPriceType BidPrice1;   ///�����һ
CVolumeType BidVolume1;   ///������һ
CPriceType AskPrice1;   ///������һ
CVolumeType AskVolume1;   ///������һ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketDataBestPriceField,
(CPriceType,	BidPrice1)
(CVolumeType,	BidVolume1)
(CPriceType,	AskPrice1)
(CVolumeType,	AskVolume1)
);

#pragma pack(push, 1)
class CMarketDataBid23Field
{
public:
CPriceType BidPrice2;   ///����۶�
CVolumeType BidVolume2;   ///��������
CPriceType BidPrice3;   ///�������
CVolumeType BidVolume3;   ///��������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketDataBid23Field,
(CPriceType,	BidPrice2)
(CVolumeType,	BidVolume2)
(CPriceType,	BidPrice3)
(CVolumeType,	BidVolume3)
);

#pragma pack(push, 1)
class CMarketDataAsk23Field
{
public:
CPriceType AskPrice2;   ///�����۶�
CVolumeType AskVolume2;   ///��������
CPriceType AskPrice3;   ///��������
CVolumeType AskVolume3;   ///��������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketDataAsk23Field,
(CPriceType,	AskPrice2)
(CVolumeType,	AskVolume2)
(CPriceType,	AskPrice3)
(CVolumeType,	AskVolume3)
);

#pragma pack(push, 1)
class CMarketDataBid45Field
{
public:
CPriceType BidPrice4;   ///�������
CVolumeType BidVolume4;   ///��������
CPriceType BidPrice5;   ///�������
CVolumeType BidVolume5;   ///��������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketDataBid45Field,
(CPriceType,	BidPrice4)
(CVolumeType,	BidVolume4)
(CPriceType,	BidPrice5)
(CVolumeType,	BidVolume5)
);

#pragma pack(push, 1)
class CMarketDataAsk45Field
{
public:
CPriceType AskPrice4;   ///��������
CVolumeType AskVolume4;   ///��������
CPriceType AskPrice5;   ///��������
CVolumeType AskVolume5;   ///��������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketDataAsk45Field,
(CPriceType,	AskPrice4)
(CVolumeType,	AskVolume4)
(CPriceType,	AskPrice5)
(CVolumeType,	AskVolume5)
);

#pragma pack(push, 1)
class CMarketDataUpdateTimeField
{
public:
CInstrumentIDType InstrumentID;   ///��Լ����
CTimeType UpdateTime;   ///����޸�ʱ��
CMillisecType UpdateMillisec;   ///����޸ĺ���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketDataUpdateTimeField,
(CInstrumentIDType,	InstrumentID)
(CTimeType,	UpdateTime)
(CMillisecType,	UpdateMillisec)
);

#pragma pack(push, 1)
class CBaseReserveAccountField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CParticipantIDType ParticipantID;   ///��Ա����
CAccountIDType AccountID;   ///�ʽ��ʺ�
CMoneyType Reserve;   ///����׼����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CBaseReserveAccountField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CParticipantIDType,	ParticipantID)
(CAccountIDType,	AccountID)
(CMoneyType,	Reserve)
);

#pragma pack(push, 1)
class CMarketDataRealPriceBandingField
{
public:
CPriceType BandingUpperPrice;   ///�ϴ���
CPriceType BandingLowerPrice;   ///�´���
CPriceType ReferencePrice;   ///��׼��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketDataRealPriceBandingField,
(CPriceType,	BandingUpperPrice)
(CPriceType,	BandingLowerPrice)
(CPriceType,	ReferencePrice)
);

#pragma pack(push, 1)
class CPartClientProductRightField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CProductIDType ProductID;   ///��Ʒ����
CTradingRightType TradingRight;   ///����Ȩ��
CInformationIDType InformationID;   ///��Ϣ���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CPartClientProductRightField,
(CSettlementGroupIDType,	SettlementGroupID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CProductIDType,	ProductID)
(CTradingRightType,	TradingRight)
(CInformationIDType,	InformationID)
);

#pragma pack(push, 1)
class CPartClientInstrumentRightField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CInstrumentIDType InstrumentID;   ///��Լ����
CTradingRightType TradingRight;   ///����Ȩ��
CInformationIDType InformationID;   ///��Ϣ���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CPartClientInstrumentRightField,
(CSettlementGroupIDType,	SettlementGroupID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CInstrumentIDType,	InstrumentID)
(CTradingRightType,	TradingRight)
(CInformationIDType,	InformationID)
);

#pragma pack(push, 1)
class CMarginCombinationLegField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CInstrumentIDType CombInstrumentID;   ///��Ϻ�Լ����
CLegIDType LegID;   ///���ȱ��
CInstrumentIDType LegInstrumentID;   ///���Ⱥ�Լ����
CDirectionType Direction;   ///��������
CLegMultipleType LegMultiple;   ///���ȳ���
CPriorityType Priority;   ///���ȼ�
CRuleTypeType RuleType;   ///��Ϲ�������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarginCombinationLegField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CInstrumentIDType,	CombInstrumentID)
(CLegIDType,	LegID)
(CInstrumentIDType,	LegInstrumentID)
(CDirectionType,	Direction)
(CLegMultipleType,	LegMultiple)
(CPriorityType,	Priority)
(CRuleTypeType,	RuleType)
);

#pragma pack(push, 1)
class CPartClientCombPositionField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CInstrumentIDType CombInstrumentID;   ///��Ϻ�Լ����
CVolumeType CombPosition;   ///��ϳֲ�
CMoneyType CombFreeMargin;   ///���һ���ͷŵı�֤��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CPartClientCombPositionField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CInstrumentIDType,	CombInstrumentID)
(CVolumeType,	CombPosition)
(CMoneyType,	CombFreeMargin)
);

#pragma pack(push, 1)
class CPartClientLegPositionField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CInstrumentIDType InstrumentID;   ///���Ⱥ�Լ����
CVolumeType LongPosition;   ///��ͷ�ֲ�
CVolumeType ShortPosition;   ///��ͷ�ֲ�
CVolumeType LongCloseFrozenPosition;   ///��ͷƽ�ֶ���ֲ�
CVolumeType ShortCloseFrozenPosition;   ///��ͷƽ�ֶ���ֲ�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CPartClientLegPositionField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CInstrumentIDType,	InstrumentID)
(CVolumeType,	LongPosition)
(CVolumeType,	ShortPosition)
(CVolumeType,	LongCloseFrozenPosition)
(CVolumeType,	ShortCloseFrozenPosition)
);

#pragma pack(push, 1)
class CMarginCombActionField
{
public:
CParticipantIDType ParticipantID;   ///��Ա����
CUserIDType UserID;   ///�����û�����
CClientIDType ClientID;   ///�ͻ�����
COrderLocalIDType ActionLocalID;   ///�������ر��
CInstrumentIDType CombInstrumentID;   ///��Ϻ�Լ����
CVolumeType CombVolume;   ///�������
CCombDirectionType CombDirection;   ///��϶�������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarginCombActionField,
(CParticipantIDType,	ParticipantID)
(CUserIDType,	UserID)
(CClientIDType,	ClientID)
(COrderLocalIDType,	ActionLocalID)
(CInstrumentIDType,	CombInstrumentID)
(CVolumeType,	CombVolume)
(CCombDirectionType,	CombDirection)
);

#pragma pack(push, 1)
class CPartClientMarginCombTypeField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CInstrumentGroupIDType InstrumentGroupID;   ///��Լ�����
CMarginCombTypeType MarginCombType;   ///��֤���������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CPartClientMarginCombTypeField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CInstrumentGroupIDType,	InstrumentGroupID)
(CMarginCombTypeType,	MarginCombType)
);

#pragma pack(push, 1)
class CPartClientInsGroupPositionField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CInstrumentGroupIDType InstrumentGroupID;   ///��Լ�����
CVolumeType LongPosition;   ///��Լ���ͷ�ֲܳ�
CMoneyType LongMargin;   ///��Լ���ͷ��֤��֮��
CVolumeType ShortPosition;   ///��Լ���ͷ�ֲܳ�
CMoneyType ShortMargin;   ///��Լ���ͷ��֤��֮��
CMoneyType ActualMargin;   ///ʵ����ȡ�ı�֤��
CVolumeType LongFrozenPosition;   ///��Լ���ͷ�����ֲܳ�
CMoneyType LongFrozenMargin;   ///��Լ���ͷ���ᱣ֤��֮��
CVolumeType ShortFrozenPosition;   ///��Լ���ͷ�����ֲܳ�
CMoneyType ShortFrozenMargin;   ///��Լ���ͷ���ᱣ֤��֮��
CMoneyType ActualFrozenMargin;   ///ʵ�ʶ���ı�֤��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CPartClientInsGroupPositionField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CInstrumentGroupIDType,	InstrumentGroupID)
(CVolumeType,	LongPosition)
(CMoneyType,	LongMargin)
(CVolumeType,	ShortPosition)
(CMoneyType,	ShortMargin)
(CMoneyType,	ActualMargin)
(CVolumeType,	LongFrozenPosition)
(CMoneyType,	LongFrozenMargin)
(CVolumeType,	ShortFrozenPosition)
(CMoneyType,	ShortFrozenMargin)
(CMoneyType,	ActualFrozenMargin)
);

#pragma pack(push, 1)
class CInstrumentGroupField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CInstrumentIDType InstrumentID;   ///��Լ����
CInstrumentGroupIDType InstrumentGroupID;   ///��Լ�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CInstrumentGroupField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CInstrumentIDType,	InstrumentID)
(CInstrumentGroupIDType,	InstrumentGroupID)
);

#pragma pack(push, 1)
class CRealPriceBandingField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CInstrumentIDType InstrumentID;   ///��Լ����
CValueModeType ValueMode;   ///ȡֵ��ʽ
CRoundingModeType RoundingMode;   ///���뷽ʽ
CPriceType UpperValue;   ///����
CPriceType LowerValue;   ///����
CPriceType LastPrice;   ///��׼��
CPriceType BandingUpperPrice;   ///����
CPriceType BandingLowerPrice;   ///����
CBoolType IsActive;   ///�Ƿ����ü۸񲨶���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CRealPriceBandingField,
(CSettlementGroupIDType,	SettlementGroupID)
(CInstrumentIDType,	InstrumentID)
(CValueModeType,	ValueMode)
(CRoundingModeType,	RoundingMode)
(CPriceType,	UpperValue)
(CPriceType,	LowerValue)
(CPriceType,	LastPrice)
(CPriceType,	BandingUpperPrice)
(CPriceType,	BandingLowerPrice)
(CBoolType,	IsActive)
);

#pragma pack(push, 1)
class CBusinessConfigField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CFunctionCodeType FunctionCode;   ///���ܴ���
COperationTypeType OperationType;   ///��������
CDescriptionType Description;   ///��������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CBusinessConfigField,
(CSettlementGroupIDType,	SettlementGroupID)
(CFunctionCodeType,	FunctionCode)
(COperationTypeType,	OperationType)
(CDescriptionType,	Description)
);

#pragma pack(push, 1)
class CDbmtAccountDepositField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CAccountIDType Account;   ///�ʽ��˺�
CMoneyType Deposit;   ///�����
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtAccountDepositField,
(CSettlementGroupIDType,	SettlementGroupID)
(CAccountIDType,	Account)
(CMoneyType,	Deposit)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtClientField
{
public:
CClientIDType ClientID;   ///�ͻ�����
CClientNameType ClientName;   ///�ͻ�����
CIdCardTypeType IdentifiedCardType;   ///֤������
CIdentifiedCardNoType IdentifiedCardNo;   ///֤������
CTradingRoleType TradingRole;   ///���׽�ɫ
CClientTypeType ClientType;   ///�ͻ�����
CBoolType IsActive;   ///�Ƿ��Ծ
CHedgeFlagType HedgeFlag;   ///�ͻ���������
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtClientField,
(CClientIDType,	ClientID)
(CClientNameType,	ClientName)
(CIdCardTypeType,	IdentifiedCardType)
(CIdentifiedCardNoType,	IdentifiedCardNo)
(CTradingRoleType,	TradingRole)
(CClientTypeType,	ClientType)
(CBoolType,	IsActive)
(CHedgeFlagType,	HedgeFlag)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtPartClientField
{
public:
CClientIDType ClientID;   ///�ͻ�����
CParticipantIDType ParticipantID;   ///��Ա����
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtPartClientField,
(CClientIDType,	ClientID)
(CParticipantIDType,	ParticipantID)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtCurrPartPosiLimitDetailField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CLargeVolumeType StartTotalPosition;   ///�޲����
CValueModeType ValueMode;   ///ȡֵ��ʽ
CRatioType LongPosLimit;   ///��ͷ�޲�
CRatioType ShortPosLimit;   ///��ͷ�޲�
CInstrumentIDType InstrumentID;   ///��Լ����
CParticipantIDType ParticipantID;   ///��Ա����
CPositionTradingRoleType TradingRole;   ///���׽�ɫ
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtCurrPartPosiLimitDetailField,
(CSettlementGroupIDType,	SettlementGroupID)
(CLargeVolumeType,	StartTotalPosition)
(CValueModeType,	ValueMode)
(CRatioType,	LongPosLimit)
(CRatioType,	ShortPosLimit)
(CInstrumentIDType,	InstrumentID)
(CParticipantIDType,	ParticipantID)
(CPositionTradingRoleType,	TradingRole)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtCurrClientPosiLimitDetailField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CLargeVolumeType StartTotalPosition;   ///�޲����
CValueModeType ValueMode;   ///ȡֵ��ʽ
CRatioType LongPosLimit;   ///��ͷ�޲�
CRatioType ShortPosLimit;   ///��ͷ�޲�
CInstrumentIDType InstrumentID;   ///��Լ����
CClientTypeType ClientType;   ///�ͻ�����
CHedgeFlagType HedgeFlag;   ///�ͻ���������
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtCurrClientPosiLimitDetailField,
(CSettlementGroupIDType,	SettlementGroupID)
(CLargeVolumeType,	StartTotalPosition)
(CValueModeType,	ValueMode)
(CRatioType,	LongPosLimit)
(CRatioType,	ShortPosLimit)
(CInstrumentIDType,	InstrumentID)
(CClientTypeType,	ClientType)
(CHedgeFlagType,	HedgeFlag)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtCurrSpecialPosiLimitDetailField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CLargeVolumeType StartTotalPosition;   ///�޲����
CValueModeType ValueMode;   ///ȡֵ��ʽ
CRatioType LongPosLimit;   ///��ͷ�޲�
CRatioType ShortPosLimit;   ///��ͷ�޲�
CInstrumentIDType InstrumentID;   ///��Լ����
CClientIDType ClientID;   ///�ͻ�����
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtCurrSpecialPosiLimitDetailField,
(CSettlementGroupIDType,	SettlementGroupID)
(CLargeVolumeType,	StartTotalPosition)
(CValueModeType,	ValueMode)
(CRatioType,	LongPosLimit)
(CRatioType,	ShortPosLimit)
(CInstrumentIDType,	InstrumentID)
(CClientIDType,	ClientID)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtHedgeDetailField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CSerialNoType HedgeQuotaSN;   ///��ˮ��
COperatorIDType OperatorID;   ///�û�����
CTimeType Time;   ///ʱ��
CInstrumentIDType InstrumentID;   ///��Լ����
CPosiDirectionType PosiDirection;   ///�ֲֶ�շ���
CVolumeType TradingVolume;   ///������
CVolumeType HedgeQuota;   ///��ֵ���
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtHedgeDetailField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CSerialNoType,	HedgeQuotaSN)
(COperatorIDType,	OperatorID)
(CTimeType,	Time)
(CInstrumentIDType,	InstrumentID)
(CPosiDirectionType,	PosiDirection)
(CVolumeType,	TradingVolume)
(CVolumeType,	HedgeQuota)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtUserField
{
public:
CParticipantIDType ParticipantID;   ///��Ա����
CUserIDType UserID;   ///�����û�����
CUserTypeType UserType;   ///�����û�����
CPasswordType Password;   ///����
CUserActiveType IsActive;   ///����ԱȨ��
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtUserField,
(CParticipantIDType,	ParticipantID)
(CUserIDType,	UserID)
(CUserTypeType,	UserType)
(CPasswordType,	Password)
(CUserActiveType,	IsActive)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtPartProductRightField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CProductIDType ProductID;   ///��Ʒ����
CParticipantIDType ParticipantID;   ///��Ա����
CTradingRightType TradingRight;   ///����Ȩ��
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtPartProductRightField,
(CSettlementGroupIDType,	SettlementGroupID)
(CProductIDType,	ProductID)
(CParticipantIDType,	ParticipantID)
(CTradingRightType,	TradingRight)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtClientProductRightField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CProductIDType ProductID;   ///��Ʒ����
CClientIDType ClientID;   ///�ͻ�����
CTradingRightType TradingRight;   ///����Ȩ��
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtClientProductRightField,
(CSettlementGroupIDType,	SettlementGroupID)
(CProductIDType,	ProductID)
(CClientIDType,	ClientID)
(CTradingRightType,	TradingRight)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtPartInstrumentRightField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CInstrumentIDType InstrumentID;   ///��Լ����
CParticipantIDType ParticipantID;   ///��Ա����
CTradingRightType TradingRight;   ///����Ȩ��
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtPartInstrumentRightField,
(CSettlementGroupIDType,	SettlementGroupID)
(CInstrumentIDType,	InstrumentID)
(CParticipantIDType,	ParticipantID)
(CTradingRightType,	TradingRight)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtClientInstrumentRightField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CInstrumentIDType InstrumentID;   ///��Լ����
CClientIDType ClientID;   ///�ͻ�����
CTradingRightType TradingRight;   ///����Ȩ��
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtClientInstrumentRightField,
(CSettlementGroupIDType,	SettlementGroupID)
(CInstrumentIDType,	InstrumentID)
(CClientIDType,	ClientID)
(CTradingRightType,	TradingRight)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtCurrMarginRateDetailField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CTradingRoleType TradingRole;   ///���׽�ɫ
CHedgeFlagType HedgeFlag;   ///Ͷ���ױ���־
CValueModeType ValueMode;   ///ȡֵ��ʽ
CRatioType LongMarginRatio;   ///��ͷ��֤����
CRatioType ShortMarginRatio;   ///��ͷ��֤����
CInstrumentIDType InstrumentID;   ///��Լ����
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtCurrMarginRateDetailField,
(CSettlementGroupIDType,	SettlementGroupID)
(CTradingRoleType,	TradingRole)
(CHedgeFlagType,	HedgeFlag)
(CValueModeType,	ValueMode)
(CRatioType,	LongMarginRatio)
(CRatioType,	ShortMarginRatio)
(CInstrumentIDType,	InstrumentID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtMarketDataField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CPriceType LastPrice;   ///���¼�
CPriceType PreSettlementPrice;   ///�����
CPriceType PreClosePrice;   ///������
CLargeVolumeType PreOpenInterest;   ///��ֲ���
CPriceType OpenPrice;   ///����
CPriceType HighestPrice;   ///��߼�
CPriceType LowestPrice;   ///��ͼ�
CVolumeType Volume;   ///����
CMoneyType Turnover;   ///�ɽ����
CLargeVolumeType OpenInterest;   ///�ֲ���
CPriceType ClosePrice;   ///������
CPriceType SettlementPrice;   ///�����
CPriceType UpperLimitPrice;   ///��ͣ���
CPriceType LowerLimitPrice;   ///��ͣ���
CRatioType PreDelta;   ///����ʵ��
CRatioType CurrDelta;   ///����ʵ��
CTimeType UpdateTime;   ///����޸�ʱ��
CMillisecType UpdateMillisec;   ///����޸ĺ���
CInstrumentIDType InstrumentID;   ///��Լ����
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtMarketDataField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CPriceType,	LastPrice)
(CPriceType,	PreSettlementPrice)
(CPriceType,	PreClosePrice)
(CLargeVolumeType,	PreOpenInterest)
(CPriceType,	OpenPrice)
(CPriceType,	HighestPrice)
(CPriceType,	LowestPrice)
(CVolumeType,	Volume)
(CMoneyType,	Turnover)
(CLargeVolumeType,	OpenInterest)
(CPriceType,	ClosePrice)
(CPriceType,	SettlementPrice)
(CPriceType,	UpperLimitPrice)
(CPriceType,	LowerLimitPrice)
(CRatioType,	PreDelta)
(CRatioType,	CurrDelta)
(CTimeType,	UpdateTime)
(CMillisecType,	UpdateMillisec)
(CInstrumentIDType,	InstrumentID)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtUserIPField
{
public:
CUserIDType UserID;   ///�����û�����
CIPAddressType IPAddress;   ///IP��ַ
CIPAddressType IPMask;   ///IP��ַ����
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtUserIPField,
(CUserIDType,	UserID)
(CIPAddressType,	IPAddress)
(CIPAddressType,	IPMask)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtCurrPriceBandingField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CPriceLimitTypeType PriceLimitType;   ///�޼�����
CValueModeType ValueMode;   ///ȡֵ��ʽ
CRoundingModeType RoundingMode;   ///���뷽ʽ
CPriceType UpperValue;   ///����
CPriceType LowerValue;   ///����
CInstrumentIDType InstrumentID;   ///��Լ����
CTradingSegmentSNType TradingSegmentSN;   ///���׽׶α��
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtCurrPriceBandingField,
(CSettlementGroupIDType,	SettlementGroupID)
(CPriceLimitTypeType,	PriceLimitType)
(CValueModeType,	ValueMode)
(CRoundingModeType,	RoundingMode)
(CPriceType,	UpperValue)
(CPriceType,	LowerValue)
(CInstrumentIDType,	InstrumentID)
(CTradingSegmentSNType,	TradingSegmentSN)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtUpdateAllInstrumentStatusField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CInstrumentStatusType InstrumentStatus;   ///��Լ״̬
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtUpdateAllInstrumentStatusField,
(CSettlementGroupIDType,	SettlementGroupID)
(CInstrumentStatusType,	InstrumentStatus)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtPartTopicSubscribeField
{
public:
CParticipantIDType ParticipantID;   ///�����ߴ���
CParticipantTypeType ParticipantType;   ///����������
CTopicIDType TopicID;   ///�������
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtPartTopicSubscribeField,
(CParticipantIDType,	ParticipantID)
(CParticipantTypeType,	ParticipantType)
(CTopicIDType,	TopicID)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtPartClientProductRightField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CProductIDType ProductID;   ///��Ʒ����
CTradingRightType TradingRight;   ///����Ȩ��
CInformationIDType InformationID;   ///��Ϣ���
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtPartClientProductRightField,
(CSettlementGroupIDType,	SettlementGroupID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CProductIDType,	ProductID)
(CTradingRightType,	TradingRight)
(CInformationIDType,	InformationID)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CDbmtPartClientInstrumentRightField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CInstrumentIDType InstrumentID;   ///��Լ����
CTradingRightType TradingRight;   ///����Ȩ��
CInformationIDType InformationID;   ///��Ϣ���
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtPartClientInstrumentRightField,
(CSettlementGroupIDType,	SettlementGroupID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CInstrumentIDType,	InstrumentID)
(CTradingRightType,	TradingRight)
(CInformationIDType,	InformationID)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CQuoteField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CQuoteSysIDType QuoteSysID;   ///���۱��
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
CVolumeType BidVolume;   ///��������
CVolumeType AskVolume;   ///��������
CInstrumentIDType InstrumentID;   ///��Լ����
COrderLocalIDType QuoteLocalID;   ///���ر��۱��
CBusinessUnitType BusinessUnit;   ///ҵ��Ԫ
CCombOffsetFlagType BidCombOffsetFlag;   ///����Ͽ�ƽ��־
CCombHedgeFlagType BidCombHedgeFlag;   ///������ױ���־
CPriceType BidPrice;   ///�򷽼۸�
CCombOffsetFlagType AskCombOffsetFlag;   ///������Ͽ�ƽ��־
CCombHedgeFlagType AskCombHedgeFlag;   ///��������ױ���־
CPriceType AskPrice;   ///�����۸�
CTimeType InsertTime;   ///����ʱ��
CTimeType CancelTime;   ///����ʱ��
CTimeType TradeTime;   ///�ɽ�ʱ��
COrderSysIDType BidOrderSysID;   ///�򷽱������
COrderSysIDType AskOrderSysID;   ///�����������
CParticipantIDType ClearingPartID;   ///�����Ա���
CMoneyType BidRiskPreFrozen;   ///����Ԥ����
CMoneyType AskRiskPreFrozen;   ///�����Ԥ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQuoteField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CQuoteSysIDType,	QuoteSysID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(CVolumeType,	BidVolume)
(CVolumeType,	AskVolume)
(CInstrumentIDType,	InstrumentID)
(COrderLocalIDType,	QuoteLocalID)
(CBusinessUnitType,	BusinessUnit)
(CCombOffsetFlagType,	BidCombOffsetFlag)
(CCombHedgeFlagType,	BidCombHedgeFlag)
(CPriceType,	BidPrice)
(CCombOffsetFlagType,	AskCombOffsetFlag)
(CCombHedgeFlagType,	AskCombHedgeFlag)
(CPriceType,	AskPrice)
(CTimeType,	InsertTime)
(CTimeType,	CancelTime)
(CTimeType,	TradeTime)
(COrderSysIDType,	BidOrderSysID)
(COrderSysIDType,	AskOrderSysID)
(CParticipantIDType,	ClearingPartID)
(CMoneyType,	BidRiskPreFrozen)
(CMoneyType,	AskRiskPreFrozen)
);

#pragma pack(push, 1)
class CTradeField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CTradeIDType TradeID;   ///�ɽ����
CDirectionType Direction;   ///��������
COrderSysIDType OrderSysID;   ///�������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CTradingRoleType TradingRole;   ///���׽�ɫ
CAccountIDType AccountID;   ///�ʽ��ʺ�
CInstrumentIDType InstrumentID;   ///��Լ����
COffsetFlagType OffsetFlag;   ///��ƽ��־
CHedgeFlagType HedgeFlag;   ///Ͷ���ױ���־
CPriceType Price;   ///�۸�
CVolumeType Volume;   ///����
CTimeType TradeTime;   ///�ɽ�ʱ��
CTradeTypeType TradeType;   ///�ɽ�����
CPriceSourceType PriceSource;   ///�ɽ�����Դ
CUserIDType UserID;   ///�����û�����
COrderLocalIDType OrderLocalID;   ///���ر������
CParticipantIDType ClearingPartID;   ///�����Ա���
CBusinessUnitType BusinessUnit;   ///ҵ��Ԫ
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CTradeField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CTradeIDType,	TradeID)
(CDirectionType,	Direction)
(COrderSysIDType,	OrderSysID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CTradingRoleType,	TradingRole)
(CAccountIDType,	AccountID)
(CInstrumentIDType,	InstrumentID)
(COffsetFlagType,	OffsetFlag)
(CHedgeFlagType,	HedgeFlag)
(CPriceType,	Price)
(CVolumeType,	Volume)
(CTimeType,	TradeTime)
(CTradeTypeType,	TradeType)
(CPriceSourceType,	PriceSource)
(CUserIDType,	UserID)
(COrderLocalIDType,	OrderLocalID)
(CParticipantIDType,	ClearingPartID)
(CBusinessUnitType,	BusinessUnit)
);

#pragma pack(push, 1)
class COrderField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
COrderSysIDType OrderSysID;   ///�������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
CInstrumentIDType InstrumentID;   ///��Լ����
COrderPriceTypeType OrderPriceType;   ///�����۸�����
CDirectionType Direction;   ///��������
CCombOffsetFlagType CombOffsetFlag;   ///��Ͽ�ƽ��־
CCombHedgeFlagType CombHedgeFlag;   ///���Ͷ���ױ���־
CPriceType LimitPrice;   ///�۸�
CVolumeType VolumeTotalOriginal;   ///����
CTimeConditionType TimeCondition;   ///��Ч������
CDateType GTDDate;   ///GTD����
CVolumeConditionType VolumeCondition;   ///�ɽ�������
CVolumeType MinVolume;   ///��С�ɽ���
CContingentConditionType ContingentCondition;   ///��������
CPriceType StopPrice;   ///ֹ���
CForceCloseReasonType ForceCloseReason;   ///ǿƽԭ��
COrderLocalIDType OrderLocalID;   ///���ر������
CBoolType IsAutoSuspend;   ///�Զ������־
CBusinessUnitType BusinessUnit;   ///ҵ��Ԫ
CMoneyType RiskPreFrozen;   ///���Ԥ����
COrderSourceType OrderSource;   ///������Դ
COrderStatusType OrderStatus;   ///����״̬
COrderTypeType OrderType;   ///��������
CVolumeType VolumeTraded;   ///��ɽ�����
CVolumeType VolumeTotal;   ///ʣ������
CDateType InsertDate;   ///��������
CTimeType InsertTime;   ///����ʱ��
CTimeType ActiveTime;   ///����ʱ��
CTimeType SuspendTime;   ///����ʱ��
CTimeType UpdateTime;   ///����޸�ʱ��
CTimeType CancelTime;   ///����ʱ��
CUserIDType ActiveUserID;   ///����޸Ľ����û�����
CPriorityType Priority;   ///����Ȩ
CTimeSortIDType TimeSortID;   ///��ʱ���Ŷӵ����
CParticipantIDType ClearingPartID;   ///�����Ա���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
COrderField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(COrderSysIDType,	OrderSysID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(CInstrumentIDType,	InstrumentID)
(COrderPriceTypeType,	OrderPriceType)
(CDirectionType,	Direction)
(CCombOffsetFlagType,	CombOffsetFlag)
(CCombHedgeFlagType,	CombHedgeFlag)
(CPriceType,	LimitPrice)
(CVolumeType,	VolumeTotalOriginal)
(CTimeConditionType,	TimeCondition)
(CDateType,	GTDDate)
(CVolumeConditionType,	VolumeCondition)
(CVolumeType,	MinVolume)
(CContingentConditionType,	ContingentCondition)
(CPriceType,	StopPrice)
(CForceCloseReasonType,	ForceCloseReason)
(COrderLocalIDType,	OrderLocalID)
(CBoolType,	IsAutoSuspend)
(CBusinessUnitType,	BusinessUnit)
(CMoneyType,	RiskPreFrozen)
(COrderSourceType,	OrderSource)
(COrderStatusType,	OrderStatus)
(COrderTypeType,	OrderType)
(CVolumeType,	VolumeTraded)
(CVolumeType,	VolumeTotal)
(CDateType,	InsertDate)
(CTimeType,	InsertTime)
(CTimeType,	ActiveTime)
(CTimeType,	SuspendTime)
(CTimeType,	UpdateTime)
(CTimeType,	CancelTime)
(CUserIDType,	ActiveUserID)
(CPriorityType,	Priority)
(CTimeSortIDType,	TimeSortID)
(CParticipantIDType,	ClearingPartID)
);

#pragma pack(push, 1)
class CExecOrderField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CInstrumentIDType InstrumentID;   ///��Լ���
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
COrderLocalIDType ExecOrderLocalID;   ///����ִ��������
CVolumeType Volume;   ///����
CBusinessUnitType BusinessUnit;   ///ҵ��Ԫ
CExecOrderSysIDType ExecOrderSysID;   ///ִ��������
CDateType InsertDate;   ///��������
CTimeType InsertTime;   ///����ʱ��
CTimeType CancelTime;   ///����ʱ��
CExecResultType ExecResult;   ///ִ�н��
CParticipantIDType ClearingPartID;   ///�����Ա���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CExecOrderField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CInstrumentIDType,	InstrumentID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(COrderLocalIDType,	ExecOrderLocalID)
(CVolumeType,	Volume)
(CBusinessUnitType,	BusinessUnit)
(CExecOrderSysIDType,	ExecOrderSysID)
(CDateType,	InsertDate)
(CTimeType,	InsertTime)
(CTimeType,	CancelTime)
(CExecResultType,	ExecResult)
(CParticipantIDType,	ClearingPartID)
);

#pragma pack(push, 1)
class CCombOrderField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
COrderSysIDType CombOrderSysID;   ///��ϱ������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CUserIDType UserID;   ///�����û�����
CPriceType LimitPrice;   ///�۸�
CVolumeType VolumeTotalOriginal;   ///����
COrderLocalIDType CombOrderLocalID;   ///���ر������
CBusinessUnitType BusinessUnit;   ///ҵ��Ԫ
CInstrumentIDType InstrumentID1;   ///��Լ����1
CDirectionType Direction1;   ///��������1
CLegMultipleType LegMultiple1;   ///���ȳ���1
COffsetFlagType OffsetFlag1;   ///��ƽ��־1
CHedgeFlagType HedgeFlag1;   ///Ͷ���ױ���־1
CInstrumentIDType InstrumentID2;   ///��Լ����2
CDirectionType Direction2;   ///��������2
CLegMultipleType LegMultiple2;   ///���ȳ���2
COffsetFlagType OffsetFlag2;   ///��ƽ��־2
CHedgeFlagType HedgeFlag2;   ///Ͷ���ױ���־2
CInstrumentIDType InstrumentID3;   ///��Լ����3
CDirectionType Direction3;   ///��������3
CLegMultipleType LegMultiple3;   ///���ȳ���3
COffsetFlagType OffsetFlag3;   ///��ƽ��־3
CHedgeFlagType HedgeFlag3;   ///Ͷ���ױ���־3
CInstrumentIDType InstrumentID4;   ///��Լ����4
CDirectionType Direction4;   ///��������4
CLegMultipleType LegMultiple4;   ///���ȳ���4
COffsetFlagType OffsetFlag4;   ///��ƽ��־4
CHedgeFlagType HedgeFlag4;   ///Ͷ���ױ���־4
COrderSourceType OrderSource;   ///������Դ
CVolumeType VolumeTraded;   ///��ɽ�����
CVolumeType VolumeTotal;   ///ʣ������
CDateType InsertDate;   ///��������
CTimeType InsertTime;   ///����ʱ��
CParticipantIDType ClearingPartID;   ///�����Ա���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CCombOrderField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(COrderSysIDType,	CombOrderSysID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CUserIDType,	UserID)
(CPriceType,	LimitPrice)
(CVolumeType,	VolumeTotalOriginal)
(COrderLocalIDType,	CombOrderLocalID)
(CBusinessUnitType,	BusinessUnit)
(CInstrumentIDType,	InstrumentID1)
(CDirectionType,	Direction1)
(CLegMultipleType,	LegMultiple1)
(COffsetFlagType,	OffsetFlag1)
(CHedgeFlagType,	HedgeFlag1)
(CInstrumentIDType,	InstrumentID2)
(CDirectionType,	Direction2)
(CLegMultipleType,	LegMultiple2)
(COffsetFlagType,	OffsetFlag2)
(CHedgeFlagType,	HedgeFlag2)
(CInstrumentIDType,	InstrumentID3)
(CDirectionType,	Direction3)
(CLegMultipleType,	LegMultiple3)
(COffsetFlagType,	OffsetFlag3)
(CHedgeFlagType,	HedgeFlag3)
(CInstrumentIDType,	InstrumentID4)
(CDirectionType,	Direction4)
(CLegMultipleType,	LegMultiple4)
(COffsetFlagType,	OffsetFlag4)
(CHedgeFlagType,	HedgeFlag4)
(COrderSourceType,	OrderSource)
(CVolumeType,	VolumeTraded)
(CVolumeType,	VolumeTotal)
(CDateType,	InsertDate)
(CTimeType,	InsertTime)
(CParticipantIDType,	ClearingPartID)
);

#pragma pack(push, 1)
class CAdminOrderField
{
public:
CInstrumentIDType InstrumentID;   ///��Լ����
CAdminOrderCommandFlagType AdminOrderCommand;   ///����������
CParticipantIDType ClearingPartID;   ///�����Ա���
CParticipantIDType ParticipantID;   ///���׻�Ա���
CMoneyType Amount;   ///���
CSettlementGroupIDType SettlementGroupID;   ///���������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CAdminOrderField,
(CInstrumentIDType,	InstrumentID)
(CAdminOrderCommandFlagType,	AdminOrderCommand)
(CParticipantIDType,	ClearingPartID)
(CParticipantIDType,	ParticipantID)
(CMoneyType,	Amount)
(CSettlementGroupIDType,	SettlementGroupID)
);

#pragma pack(push, 1)
class CInputAdminOrderField
{
public:
CInstrumentIDType InstrumentID;   ///��Լ����
CAdminOrderCommandFlagType AdminOrderCommand;   ///����������
CParticipantIDType ClearingPartID;   ///�����Ա���
CParticipantIDType ParticipantID;   ///���׻�Ա���
CMoneyType Amount;   ///���
CSettlementGroupIDType SettlementGroupID;   ///���������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CInputAdminOrderField,
(CInstrumentIDType,	InstrumentID)
(CAdminOrderCommandFlagType,	AdminOrderCommand)
(CParticipantIDType,	ClearingPartID)
(CParticipantIDType,	ParticipantID)
(CMoneyType,	Amount)
(CSettlementGroupIDType,	SettlementGroupID)
);

#pragma pack(push, 1)
class CBulletinField
{
public:
CDateType TradingDay;   ///������
CBulletinIDType BulletinID;   ///������
CSequenceNoType SequenceNo;   ///���к�
CNewsTypeType NewsType;   ///��������
CNewsUrgencyType NewsUrgency;   ///�����̶�
CTimeType SendTime;   ///����ʱ��
CAbstractType Abstract;   ///��ϢժҪ
CComeFromType ComeFrom;   ///��Ϣ��Դ
CContentType Content;   ///��Ϣ����
CURLLinkType URLLink;   ///WEB��ַ
CMarketIDType MarketID;   ///�г�����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CBulletinField,
(CDateType,	TradingDay)
(CBulletinIDType,	BulletinID)
(CSequenceNoType,	SequenceNo)
(CNewsTypeType,	NewsType)
(CNewsUrgencyType,	NewsUrgency)
(CTimeType,	SendTime)
(CAbstractType,	Abstract)
(CComeFromType,	ComeFrom)
(CContentType,	Content)
(CURLLinkType,	URLLink)
(CMarketIDType,	MarketID)
);

#pragma pack(push, 1)
class CExchangeDataSyncStatusField
{
public:
CDateType TradingDay;   ///������
CExchangeIDType ExchangeID;   ///����������
CExchangeDataSyncStatusType ExchangeDataSyncStatus;   ///����������ͬ��״̬
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CExchangeDataSyncStatusField,
(CDateType,	TradingDay)
(CExchangeIDType,	ExchangeID)
(CExchangeDataSyncStatusType,	ExchangeDataSyncStatus)
);

#pragma pack(push, 1)
class CSGDataSyncStatusField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CDateType TradingDay;   ///������
CSettlementIDType SettlementID;   ///������
CSGDataSyncStatusType SGDataSyncStatus;   ///����������ͬ��״̬
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CSGDataSyncStatusField,
(CSettlementGroupIDType,	SettlementGroupID)
(CDateType,	TradingDay)
(CSettlementIDType,	SettlementID)
(CSGDataSyncStatusType,	SGDataSyncStatus)
);

#pragma pack(push, 1)
class CInstrumentStatusField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CInstrumentIDType InstrumentID;   ///��Լ����
CInstrumentStatusType InstrumentStatus;   ///��Լ����״̬
CTradingSegmentSNType TradingSegmentSN;   ///���׽׶α��
CTimeType EnterTime;   ///���뱾״̬ʱ��
CInstStatusEnterReasonType EnterReason;   ///���뱾״̬ԭ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CInstrumentStatusField,
(CSettlementGroupIDType,	SettlementGroupID)
(CInstrumentIDType,	InstrumentID)
(CInstrumentStatusType,	InstrumentStatus)
(CTradingSegmentSNType,	TradingSegmentSN)
(CTimeType,	EnterTime)
(CInstStatusEnterReasonType,	EnterReason)
);

#pragma pack(push, 1)
class CInstrumentStatusDetailField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CInstrumentIDType InstrumentID;   ///��Լ����
CInstrumentStatusType InstrumentStatus;   ///��Լ����״̬
CTradingSegmentSNType TradingSegmentSN;   ///���׽׶α��
CTimeType EnterTime;   ///���뱾״̬ʱ��
CInstStatusEnterReasonType EnterReason;   ///���뱾״̬ԭ��
CSettlementIDType SettlementID;   ///������
CSequenceNoType SequenceNo;   ///���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CInstrumentStatusDetailField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CInstrumentIDType,	InstrumentID)
(CInstrumentStatusType,	InstrumentStatus)
(CTradingSegmentSNType,	TradingSegmentSN)
(CTimeType,	EnterTime)
(CInstStatusEnterReasonType,	EnterReason)
(CSettlementIDType,	SettlementID)
(CSequenceNoType,	SequenceNo)
);

#pragma pack(push, 1)
class CFrontStatusField
{
public:
CFrontIDType FrontID;   ///ǰ�ñ��
CTimeType LastReportTime;   ///�ϴα���ʱ��
CBoolType IsActive;   ///�Ƿ��Ծ
CMatchIDType MatchID;   ///��Ϻ��ı��
CMatchStatusType MatchStatus;   ///���״̬��
CRiskIDType RiskID;   ///��غ��ı��
CRiskStatusType RiskStatus;   ///���״̬��
CFrontStatusType FrontStatus;   ///ǰ��״̬��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CFrontStatusField,
(CFrontIDType,	FrontID)
(CTimeType,	LastReportTime)
(CBoolType,	IsActive)
(CMatchIDType,	MatchID)
(CMatchStatusType,	MatchStatus)
(CRiskIDType,	RiskID)
(CRiskStatusType,	RiskStatus)
(CFrontStatusType,	FrontStatus)
);

#pragma pack(push, 1)
class CExchangeStatusField
{
public:
CDateType TradingDay;   ///������
CExchangeIDType ExchangeID;   ///����������
CExchangeStatusType ExchangeStatus;   ///������״̬
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CExchangeStatusField,
(CDateType,	TradingDay)
(CExchangeIDType,	ExchangeID)
(CExchangeStatusType,	ExchangeStatus)
);

#pragma pack(push, 1)
class CSettlementGroupStatusField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CDateType TradingDay;   ///������
CSettlementIDType SettlementID;   ///������
CSettlementGroupStatusType SettlementGroupStatus;   ///������״̬
CTimeType EnterTime;   ///���뱾״̬ʱ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CSettlementGroupStatusField,
(CSettlementGroupIDType,	SettlementGroupID)
(CDateType,	TradingDay)
(CSettlementIDType,	SettlementID)
(CSettlementGroupStatusType,	SettlementGroupStatus)
(CTimeType,	EnterTime)
);

#pragma pack(push, 1)
class CUniPressureField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CInstrumentIDType InstrumentID;   ///��Լ����
CTimeType UpperPressureStartTime;   ///��ѹ����ʼʱ��
CTimeType LowerPressureStartTime;   ///��ѹ����ʼʱ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CUniPressureField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CInstrumentIDType,	InstrumentID)
(CTimeType,	UpperPressureStartTime)
(CTimeType,	LowerPressureStartTime)
);

#pragma pack(push, 1)
class CDepthMarketDataDetailField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CPriceType LastPrice;   ///���¼�
CPriceType PreSettlementPrice;   ///�����
CPriceType PreClosePrice;   ///������
CLargeVolumeType PreOpenInterest;   ///��ֲ���
CPriceType OpenPrice;   ///����
CPriceType HighestPrice;   ///��߼�
CPriceType LowestPrice;   ///��ͼ�
CVolumeType Volume;   ///����
CMoneyType Turnover;   ///�ɽ����
CLargeVolumeType OpenInterest;   ///�ֲ���
CPriceType ClosePrice;   ///������
CPriceType SettlementPrice;   ///�����
CPriceType UpperLimitPrice;   ///��ͣ���
CPriceType LowerLimitPrice;   ///��ͣ���
CRatioType PreDelta;   ///����ʵ��
CRatioType CurrDelta;   ///����ʵ��
CTimeType UpdateTime;   ///����޸�ʱ��
CMillisecType UpdateMillisec;   ///����޸ĺ���
CInstrumentIDType InstrumentID;   ///��Լ����
CPriceType BidPrice1;   ///�����һ
CVolumeType BidVolume1;   ///������һ
CPriceType AskPrice1;   ///������һ
CVolumeType AskVolume1;   ///������һ
CPriceType BidPrice2;   ///����۶�
CVolumeType BidVolume2;   ///��������
CPriceType AskPrice2;   ///�����۶�
CVolumeType AskVolume2;   ///��������
CPriceType BidPrice3;   ///�������
CVolumeType BidVolume3;   ///��������
CPriceType AskPrice3;   ///��������
CVolumeType AskVolume3;   ///��������
CPriceType BidPrice4;   ///�������
CVolumeType BidVolume4;   ///��������
CPriceType AskPrice4;   ///��������
CVolumeType AskVolume4;   ///��������
CPriceType BidPrice5;   ///�������
CVolumeType BidVolume5;   ///��������
CPriceType AskPrice5;   ///��������
CVolumeType AskVolume5;   ///��������
CPriceType BandingUpperPrice;   ///�ϴ���
CPriceType BandingLowerPrice;   ///�´���
CPriceType ReferencePrice;   ///��׼��
CSequenceNoType SequenceNo;   ///���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDepthMarketDataDetailField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CPriceType,	LastPrice)
(CPriceType,	PreSettlementPrice)
(CPriceType,	PreClosePrice)
(CLargeVolumeType,	PreOpenInterest)
(CPriceType,	OpenPrice)
(CPriceType,	HighestPrice)
(CPriceType,	LowestPrice)
(CVolumeType,	Volume)
(CMoneyType,	Turnover)
(CLargeVolumeType,	OpenInterest)
(CPriceType,	ClosePrice)
(CPriceType,	SettlementPrice)
(CPriceType,	UpperLimitPrice)
(CPriceType,	LowerLimitPrice)
(CRatioType,	PreDelta)
(CRatioType,	CurrDelta)
(CTimeType,	UpdateTime)
(CMillisecType,	UpdateMillisec)
(CInstrumentIDType,	InstrumentID)
(CPriceType,	BidPrice1)
(CVolumeType,	BidVolume1)
(CPriceType,	AskPrice1)
(CVolumeType,	AskVolume1)
(CPriceType,	BidPrice2)
(CVolumeType,	BidVolume2)
(CPriceType,	AskPrice2)
(CVolumeType,	AskVolume2)
(CPriceType,	BidPrice3)
(CVolumeType,	BidVolume3)
(CPriceType,	AskPrice3)
(CVolumeType,	AskVolume3)
(CPriceType,	BidPrice4)
(CVolumeType,	BidVolume4)
(CPriceType,	AskPrice4)
(CVolumeType,	AskVolume4)
(CPriceType,	BidPrice5)
(CVolumeType,	BidVolume5)
(CPriceType,	AskPrice5)
(CVolumeType,	AskVolume5)
(CPriceType,	BandingUpperPrice)
(CPriceType,	BandingLowerPrice)
(CPriceType,	ReferencePrice)
(CSequenceNoType,	SequenceNo)
);

#pragma pack(push, 1)
class CInputReqForQuoteField
{
public:
CQuoteSysIDType ReqForQuoteID;   ///ѯ�۱��
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CInstrumentIDType InstrumentID;   ///��Լ����
CTradingDayType TradingDay;   ///��������
CTimeType ReqForQuoteTime;   ///ѯ��ʱ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CInputReqForQuoteField,
(CQuoteSysIDType,	ReqForQuoteID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CInstrumentIDType,	InstrumentID)
(CTradingDayType,	TradingDay)
(CTimeType,	ReqForQuoteTime)
);

#pragma pack(push, 1)
class CMarketMakerQuoteRightField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CInstrumentIDType InstrumentID;   ///��Լ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMarketMakerQuoteRightField,
(CSettlementGroupIDType,	SettlementGroupID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CInstrumentIDType,	InstrumentID)
);

#pragma pack(push, 1)
class CDbmtMarketMakerQuoteRightField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CInstrumentIDType InstrumentID;   ///��Լ����
CDbmtTopicIDType DbmtTopicID;   ///Dbmt�����
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDbmtMarketMakerQuoteRightField,
(CSettlementGroupIDType,	SettlementGroupID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CInstrumentIDType,	InstrumentID)
(CDbmtTopicIDType,	DbmtTopicID)
(CDbmtSequenceIDType,	DbmtSequenceID)
);

#pragma pack(push, 1)
class CReqForQuoteField
{
public:
CSettlementGroupIDType SettlementGroupID;   ///���������
CQuoteSysIDType ReqForQuoteID;   ///ѯ�۱��
CParticipantIDType ParticipantID;   ///��Ա����
CClientIDType ClientID;   ///�ͻ�����
CInstrumentIDType InstrumentID;   ///��Լ����
CTradingDayType TradingDay;   ///��������
CTimeType ReqForQuoteTime;   ///ѯ��ʱ��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CReqForQuoteField,
(CSettlementGroupIDType,	SettlementGroupID)
(CQuoteSysIDType,	ReqForQuoteID)
(CParticipantIDType,	ParticipantID)
(CClientIDType,	ClientID)
(CInstrumentIDType,	InstrumentID)
(CTradingDayType,	TradingDay)
(CTimeType,	ReqForQuoteTime)
);

#pragma pack(push, 1)
class CExchange_RateField
{
public:
CDateType TradingDay;   ///������
CSettlementGroupIDType SettlementGroupID;   ///���������
CSettlementIDType SettlementID;   ///������
CProductIDType ProductID;   ///��Ʒ����
CExchangeRateType ExchangeRate;   ///����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CExchange_RateField,
(CDateType,	TradingDay)
(CSettlementGroupIDType,	SettlementGroupID)
(CSettlementIDType,	SettlementID)
(CProductIDType,	ProductID)
(CExchangeRateType,	ExchangeRate)
);

#pragma pack(push, 1)
class CQryPartClientCombPositionField
{
public:
CParticipantIDType PartIDStart;   ///��ʼ��Ա����
CParticipantIDType PartIDEnd;   ///������Ա����
CClientIDType ClientIDStart;   ///��ʼ�ͻ�����
CClientIDType ClientIDEnd;   ///�����ͻ�����
CInstrumentIDType combInstIDStart;   ///��ʼ��Ϻ�Լ����
CInstrumentIDType combInstIDEnd;   ///������Ϻ�Լ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryPartClientCombPositionField,
(CParticipantIDType,	PartIDStart)
(CParticipantIDType,	PartIDEnd)
(CClientIDType,	ClientIDStart)
(CClientIDType,	ClientIDEnd)
(CInstrumentIDType,	combInstIDStart)
(CInstrumentIDType,	combInstIDEnd)
);

#pragma pack(push, 1)
class CQryPartClientLegPositionField
{
public:
CParticipantIDType PartIDStart;   ///��ʼ��Ա����
CParticipantIDType PartIDEnd;   ///������Ա����
CClientIDType ClientIDStart;   ///��ʼ�ͻ�����
CClientIDType ClientIDEnd;   ///�����ͻ�����
CInstrumentIDType LegInstIDStart;   ///��ʼ���Ⱥ�Լ����
CInstrumentIDType LegInstIDEnd;   ///�������Ⱥ�Լ����
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CQryPartClientLegPositionField,
(CParticipantIDType,	PartIDStart)
(CParticipantIDType,	PartIDEnd)
(CClientIDType,	ClientIDStart)
(CClientIDType,	ClientIDEnd)
(CInstrumentIDType,	LegInstIDStart)
(CInstrumentIDType,	LegInstIDEnd)
);

#pragma pack(push, 1)
class CDumpMemTableField
{
public:
CTableNameType TableName;   ///�ڴ������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CDumpMemTableField,
(CTableNameType,	TableName)
);

#pragma pack(push, 1)
class CRiskStatusField
{
public:
CRiskIDType RiskID;   ///��غ��ı��
CMatchIDType MatchID;   ///��Ϻ��ı��
CBoolType IsActive;   ///�Ƿ��Ծ
CFrontIDType FrontID;   ///ǰ�ñ��
CSequenceNoType SequenceNo;   ///�Ѵ������Ϣ���
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CRiskStatusField,
(CRiskIDType,	RiskID)
(CMatchIDType,	MatchID)
(CBoolType,	IsActive)
(CFrontIDType,	FrontID)
(CSequenceNoType,	SequenceNo)
);

#pragma pack(push, 1)
class CFlowRelayField
{
public:
CParticipantIDType ParticipantID;   ///��Ա����
CUserIDType UserID;   ///�û�����
CSequenceSeriesType SequenceSeries;   ///������
CSequenceNoType SequenceNo;   ///���к�
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CFlowRelayField,
(CParticipantIDType,	ParticipantID)
(CUserIDType,	UserID)
(CSequenceSeriesType,	SequenceSeries)
(CSequenceNoType,	SequenceNo)
);

#pragma pack(push, 1)
class CMatchGroupField
{
public:
CProductIDType ProductID;   ///��Ʒ����
CMatchIDType MatchID;   ///��Ϻ��ı��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CMatchGroupField,
(CProductIDType,	ProductID)
(CMatchIDType,	MatchID)
);

#pragma pack(push, 1)
class CRiskGroupField
{
public:
CParticipantIDType ParticipantID;   ///ParticipantID
CRiskIDType RiskID;   ///��ر��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CRiskGroupField,
(CParticipantIDType,	ParticipantID)
(CRiskIDType,	RiskID)
);

#pragma pack(push, 1)
class CGroupsInfoField
{
public:
CGroupNameType GroupName;   ///��������
CGroupNumberType GroupNumber;   ///��������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CGroupsInfoField,
(CGroupNameType,	GroupName)
(CGroupNumberType,	GroupNumber)
);

#pragma pack(push, 1)
class CRiskPreFrozenField
{
public:
CClientIDType ClientID;   ///�ͻ����
CParticipantIDType ParticipantID;   ///��Ա����
CMoneyType PreFrozen;   ///Ԥ������
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CRiskPreFrozenField,
(CClientIDType,	ClientID)
(CParticipantIDType,	ParticipantID)
(CMoneyType,	PreFrozen)
);

#pragma pack(push, 1)
class CRiskBeaconField
{
public:
CRiskIDType RiskID;   ///��ر��
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CRiskBeaconField,
(CRiskIDType,	RiskID)
);

#endif
