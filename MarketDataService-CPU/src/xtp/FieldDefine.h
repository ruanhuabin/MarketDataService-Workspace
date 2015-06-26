#ifndef _ITEMTYPEDEF_H
#define _ITEMTYPEDEF_H

#include "ItemTypedef.h"
#include <boost/fusion/adapted/struct/adapt_struct.hpp>
#include <boost/fusion/include/adapt_struct.hpp>

#pragma pack(push, 1)
class CUserLoginField
{
public:
CDateType TradingDay;   ///交易日
CUserIDType UserID;   ///交易用户代码
CParticipantIDType ParticipantID;   ///会员代码
CPasswordType Password;   ///密码
CProductInfoType UserProductInfo;   ///用户端产品信息
CProductInfoType InterfaceProductInfo;   ///接口端产品信息
CProtocolInfoType ProtocolInfo;   ///协议信息
CDataCenterIDType DataCenterID;   ///数据中心代码
CTimeType LoginTime;   ///登录成功时间
CIPAddressType IPAddress;   ///IP地址
COrderLocalIDType MaxOrderLocalID;   ///最大报单本地编号
CTradingSystemNameType TradingSystemName;   ///交易系统名称
CUserTypeType UserType;   ///用户类型
CCommFluxType MaxCommFlux;   ///最大通讯量
CRiskIDType RiskID;   ///风控编号
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
CErrorIDType ErrorID;   ///错误代码
CErrorMsgType ErrorMsg;   ///错误信息
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
CDateType TradingDay;   ///交易日
CCommPhaseNoType CommPhaseNo;   ///通讯时段号
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
CDateType TradingDay;   ///交易日
CExchangeIDType ExchangeID;   ///交易所代码
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
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
CDateType CurrDate;   ///char[9]
CTimeType CurrTime;   ///char[9]
CMillisecType CurrMillisec;   ///uint32
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
CDataCenterIDType DataCenterID;   ///数据中心代码
CStartModeType StartMode;   ///启动模式
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
CDataCenterIDType DataCenterID;   ///数据中心代码
CStartModeType StartMode;   ///启动模式
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
COrderSysIDType OrderSysID;   ///报单编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
CInstrumentIDType InstrumentID;   ///合约代码
COrderPriceTypeType OrderPriceType;   ///报单价格条件
CDirectionType Direction;   ///买卖方向
CCombOffsetFlagType CombOffsetFlag;   ///组合开平标志
CCombHedgeFlagType CombHedgeFlag;   ///组合投机套保标志
CPriceType LimitPrice;   ///价格
CVolumeType VolumeTotalOriginal;   ///数量
CTimeConditionType TimeCondition;   ///有效期类型
CDateType GTDDate;   ///GTD日期
CVolumeConditionType VolumeCondition;   ///成交量类型
CVolumeType MinVolume;   ///最小成交量
CContingentConditionType ContingentCondition;   ///触发条件
CPriceType StopPrice;   ///止损价
CForceCloseReasonType ForceCloseReason;   ///强平原因
COrderLocalIDType OrderLocalID;   ///本地报单编号
CBoolType IsAutoSuspend;   ///自动挂起标志
CBusinessUnitType BusinessUnit;   ///业务单元
CMoneyType RiskPreFrozen;   ///风控预冻结
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
COrderSysIDType OrderSysID;   ///报单编号
COrderLocalIDType OrderLocalID;   ///本地报单编号
CActionFlagType ActionFlag;   ///报单操作标志
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
CPriceType LimitPrice;   ///价格
CVolumeType VolumeChange;   ///数量变化
COrderLocalIDType ActionLocalID;   ///操作本地编号
CBusinessUnitType BusinessUnit;   ///业务单元
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
COTCOrderSysIDType OTCOrderSysID;   ///OTC报单编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
CInstrumentIDType InstrumentID;   ///合约代码
CDirectionType Direction;   ///买卖方向
COffsetFlagType OffsetFlag;   ///开平标志
CHedgeFlagType HedgeFlag;   ///投机套保标志
CPriceType Price;   ///价格
CVolumeType Volume;   ///数量
CParticipantIDType OtherParticipantID;   ///对手方会员代码
CClientIDType OtherClientID;   ///对手方客户代码
CUserIDType OtherUserID;   ///对手方交易用户代码
COffsetFlagType OtherOffsetFlag;   ///对手方开平标志
CHedgeFlagType OtherHedgeFlag;   ///对手方套保标志
COrderLocalIDType OTCOrderLocalID;   ///本地OTC报单编号
COTCOrderStatusType OTCOrderStatus;   ///OTC报单状态
CTimeType InsertTime;   ///插入时间
CTimeType CancelTime;   ///撤销时间
CParticipantIDType ClearingPartID;   ///结算会员编号
CParticipantIDType OtherClearingPartID;   ///对手方结算会员编号
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
CQuoteSysIDType QuoteSysID;   ///报价编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
CVolumeType BidVolume;   ///买入数量
CVolumeType AskVolume;   ///卖出数量
CInstrumentIDType InstrumentID;   ///合约代码
COrderLocalIDType QuoteLocalID;   ///本地报价编号
CBusinessUnitType BusinessUnit;   ///业务单元
CCombOffsetFlagType BidCombOffsetFlag;   ///买方组合开平标志
CCombHedgeFlagType BidCombHedgeFlag;   ///买方组合套保标志
CPriceType BidPrice;   ///买方价格
CCombOffsetFlagType AskCombOffsetFlag;   ///卖方组合开平标志
CCombHedgeFlagType AskCombHedgeFlag;   ///卖方组合套保标志
CPriceType AskPrice;   ///卖方价格
CMoneyType BidRiskPreFrozen;   ///买风控预冻结
CMoneyType AskRiskPreFrozen;   ///卖风控预冻结
COrderSysIDType BidOrderSysID;   ///买方报单编号
COrderSysIDType AskOrderSysID;   ///卖方报单编号
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
CQuoteSysIDType QuoteSysID;   ///报价编号
COrderLocalIDType QuoteLocalID;   ///本地报价编号
CActionFlagType ActionFlag;   ///报单操作标志
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
COrderLocalIDType ActionLocalID;   ///操作本地编号
CBusinessUnitType BusinessUnit;   ///业务单元
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
CInstrumentIDType InstrumentID;   ///合约编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
COrderLocalIDType ExecOrderLocalID;   ///本地执行宣告编号
CVolumeType Volume;   ///数量
CBusinessUnitType BusinessUnit;   ///业务单元
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
CExecOrderSysIDType ExecOrderSysID;   ///执行宣告编号
COrderLocalIDType ExecOrderLocalID;   ///本地执行宣告编号
CActionFlagType ActionFlag;   ///报单操作标志
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
COrderLocalIDType ActionLocalID;   ///操作本地编号
CBusinessUnitType BusinessUnit;   ///业务单元
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
CUserIDType UserID;   ///交易用户代码
CParticipantIDType ParticipantID;   ///会员代码
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
CUserIDType UserID;   ///交易用户代码
CParticipantIDType ParticipantID;   ///会员代码
CPasswordType OldPassword;   ///旧密码
CPasswordType NewPassword;   ///新密码
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
COrderSysIDType CombOrderSysID;   ///组合报单编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
CPriceType LimitPrice;   ///价格
CVolumeType VolumeTotalOriginal;   ///数量
COrderLocalIDType CombOrderLocalID;   ///本地报单编号
CBusinessUnitType BusinessUnit;   ///业务单元
CInstrumentIDType InstrumentID1;   ///合约代码1
CDirectionType Direction1;   ///买卖方向1
CLegMultipleType LegMultiple1;   ///分腿乘数1
COffsetFlagType OffsetFlag1;   ///开平标志1
CHedgeFlagType HedgeFlag1;   ///投机套保标志1
CInstrumentIDType InstrumentID2;   ///合约代码2
CDirectionType Direction2;   ///买卖方向2
CLegMultipleType LegMultiple2;   ///分腿乘数2
COffsetFlagType OffsetFlag2;   ///开平标志2
CHedgeFlagType HedgeFlag2;   ///投机套保标志2
CInstrumentIDType InstrumentID3;   ///合约代码3
CDirectionType Direction3;   ///买卖方向3
CLegMultipleType LegMultiple3;   ///分腿乘数3
COffsetFlagType OffsetFlag3;   ///开平标志3
CHedgeFlagType HedgeFlag3;   ///投机套保标志3
CInstrumentIDType InstrumentID4;   ///合约代码4
CDirectionType Direction4;   ///买卖方向4
CLegMultipleType LegMultiple4;   ///分腿乘数4
COffsetFlagType OffsetFlag4;   ///开平标志4
CHedgeFlagType HedgeFlag4;   ///投机套保标志4
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
CParticipantIDType ParticipantID;   ///会员代码
CUserIDType UserID;   ///交易用户代码
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
CParticipantIDType PartIDStart;   ///起始会员代码
CParticipantIDType PartIDEnd;   ///结束会员代码
COrderSysIDType OrderSysID;   ///报单编号
CInstrumentIDType InstrumentID;   ///合约代码
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
CTimeType TimeStart;   ///开始时间
CTimeType TimeEnd;   ///结束时间
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
CParticipantIDType PartIDStart;   ///起始会员代码
CParticipantIDType PartIDEnd;   ///结束会员代码
CQuoteSysIDType QuoteSysID;   ///报价编号
CClientIDType ClientID;   ///客户代码
CInstrumentIDType InstrumentID;   ///合约代码
CUserIDType UserID;   ///交易用户代码
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
CParticipantIDType PartIDStart;   ///起始会员代码
CParticipantIDType PartIDEnd;   ///结束会员代码
CInstrumentIDType InstIDStart;   ///起始合约代码
CInstrumentIDType InstIDEnd;   ///结束合约代码
CTradeIDType TradeID;   ///成交编号
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
CTimeType TimeStart;   ///开始时间
CTimeType TimeEnd;   ///结束时间
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
CProductIDType ProductID;   ///产品代码
CInstrumentIDType InstrumentID;   ///合约代码
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
CParticipantIDType PartIDStart;   ///起始会员代码
CParticipantIDType PartIDEnd;   ///结束会员代码
CClientIDType ClientIDStart;   ///起始客户代码
CClientIDType ClientIDEnd;   ///结束客户代码
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
CParticipantIDType PartIDStart;   ///起始会员代码
CParticipantIDType PartIDEnd;   ///结束会员代码
CInstrumentIDType InstIDStart;   ///起始合约代码
CInstrumentIDType InstIDEnd;   ///结束合约代码
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
CParticipantIDType PartIDStart;   ///起始会员代码
CParticipantIDType PartIDEnd;   ///结束会员代码
CClientIDType ClientIDStart;   ///起始客户代码
CClientIDType ClientIDEnd;   ///结束客户代码
CInstrumentIDType InstIDStart;   ///起始合约代码
CInstrumentIDType InstIDEnd;   ///结束合约代码
CClientTypeType ClientType;   ///客户类型
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
CParticipantIDType PartIDStart;   ///起始会员代码
CParticipantIDType PartIDEnd;   ///结束会员代码
CAccountIDType AccountID;   ///资金帐号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CProductGroupIDType ProductGroupID;   ///产品组代码
CProductIDType ProductID;   ///产品代码
CInstrumentIDType InstrumentID;   ///合约代码
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
CInstrumentIDType InstIDStart;   ///起始合约代码
CInstrumentIDType InstIDEnd;   ///结束合约代码
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
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
CUserIDType UserIDStart;   ///起始交易用户代码
CUserIDType UserIDEnd;   ///结束交易用户代码
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
CUserIDType UserIDStart;   ///起始交易用户代码
CUserIDType UserIDEnd;   ///结束交易用户代码
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
CDateType TradingDay;   ///交易日
CMarketIDType MarketID;   ///市场代码
CBulletinIDType BulletinID;   ///公告编号
CNewsTypeType NewsType;   ///公告类型
CNewsUrgencyType NewsUrgency;   ///紧急程度
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
CParticipantIDType PartIDStart;   ///起始会员代码
CParticipantIDType PartIDEnd;   ///结束会员代码
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
CParticipantIDType PartIDStart;   ///起始会员代码
CParticipantIDType PartIDEnd;   ///结束会员代码
CClientIDType ClientIDStart;   ///起始客户代码
CClientIDType ClientIDEnd;   ///结束客户代码
CInstrumentIDType InstIDStart;   ///起始合约代码
CInstrumentIDType InstIDEnd;   ///结束合约代码
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
CExchangeIDType ExchangeID;   ///交易所代码
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
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
CInstrumentIDType InstIDStart;   ///起始合约代码
CInstrumentIDType InstIDEnd;   ///结束合约代码
CDirectionType Direction;   ///买卖方向
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
CExchangeIDType ExchangeID;   ///交易所代码
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
CParticipantIDType PartIDStart;   ///起始会员代码
CParticipantIDType PartIDEnd;   ///结束会员代码
COrderSysIDType CombOrderSysID;   ///组合报单编号
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CMoneyType PreBalance;   ///上次结算准备金
CMoneyType CurrMargin;   ///当前保证金总额
CMoneyType CloseProfit;   ///平仓盈亏
CMoneyType Premium;   ///期权权利金收支
CMoneyType Deposit;   ///入金金额
CMoneyType Withdraw;   ///出金金额
CMoneyType Balance;   ///期货结算准备金
CMoneyType Available;   ///可提资金
CAccountIDType AccountID;   ///资金帐号
CMoneyType FrozenMargin;   ///冻结的保证金
CMoneyType FrozenPremium;   ///冻结的权利金
CMoneyType BaseReserve;   ///基本准备金
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CHedgeFlagType HedgeFlag;   ///投机套保标志
CPosiDirectionType PosiDirection;   ///持仓多空方向
CVolumeType YdPosition;   ///上日持仓
CVolumeType Position;   ///今日持仓
CVolumeType LongFrozen;   ///多头冻结
CVolumeType ShortFrozen;   ///空头冻结
CVolumeType YdLongFrozen;   ///昨日多头冻结
CVolumeType YdShortFrozen;   ///昨日空头冻结
CInstrumentIDType InstrumentID;   ///合约代码
CParticipantIDType ParticipantID;   ///会员代码
CTradingRoleType TradingRole;   ///交易角色
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CHedgeFlagType HedgeFlag;   ///投机套保标志
CPosiDirectionType PosiDirection;   ///持仓多空方向
CVolumeType YdPosition;   ///上日持仓
CVolumeType Position;   ///今日持仓
CVolumeType LongFrozen;   ///多头冻结
CVolumeType ShortFrozen;   ///空头冻结
CVolumeType YdLongFrozen;   ///昨日多头冻结
CVolumeType YdShortFrozen;   ///昨日空头冻结
CVolumeType BuyTradeVolume;   ///当日买成交量
CVolumeType SellTradeVolume;   ///当日卖成交量
CMoneyType PositionCost;   ///持仓成本
CMoneyType YdPositionCost;   ///昨日持仓成本
CMoneyType UseMargin;   ///占用的保证金
CMoneyType FrozenMargin;   ///冻结的保证金
CMoneyType LongFrozenMargin;   ///多头冻结的保证金
CMoneyType ShortFrozenMargin;   ///空头冻结的保证金
CMoneyType FrozenPremium;   ///冻结的权利金
CInstrumentIDType InstrumentID;   ///合约代码
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CProductIDType ProductID;   ///产品代码
CProductGroupIDType ProductGroupID;   ///产品组代码
CInstrumentIDType UnderlyingInstrID;   ///基础商品代码
CProductClassType ProductClass;   ///产品类型
CPositionTypeType PositionType;   ///持仓类型
CPriceType StrikePrice;   ///执行价
COptionsTypeType OptionsType;   ///期权类型
CVolumeMultipleType VolumeMultiple;   ///合约数量乘数
CUnderlyingMultipleType UnderlyingMultiple;   ///合约基础商品乘数
CInstrumentIDType InstrumentID;   ///合约代码
CInstrumentNameType InstrumentName;   ///合约名称
CYearType DeliveryYear;   ///交割年份
CMonthType DeliveryMonth;   ///交割月
CAdvanceMonthType AdvanceMonth;   ///提前月份
CBoolType IsTrading;   ///当前是否交易
CDateType CreateDate;   ///创建日
CDateType OpenDate;   ///上市日
CDateType ExpireDate;   ///到期日
CDateType StartDelivDate;   ///开始交割日
CDateType EndDelivDate;   ///最后交割日
CPriceType BasisPrice;   ///挂牌基准价
CVolumeType MaxMarketOrderVolume;   ///市价单最大下单量
CVolumeType MinMarketOrderVolume;   ///市价单最小下单量
CVolumeType MaxLimitOrderVolume;   ///限价单最大下单量
CVolumeType MinLimitOrderVolume;   ///限价单最小下单量
CPriceType PriceTick;   ///最小变动价位
CMonthCountType AllowDelivPersonOpen;   ///交割月自然人开仓
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
CInformationIDType InformationIDStart;   ///起始信息代码
CInformationIDType InformationIDEnd;   ///结束信息代码
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
CInformationIDType InformationID;   ///信息编号
CSequenceNoType SequenceNo;   ///序列号
CContentType Content;   ///消息正文
CContentLengthType ContentLength;   ///正文长度
CBoolType IsAccomplished;   ///是否完成
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
CParticipantIDType ParticipantID;   ///交易会员编号
CParticipantIDType ClearingPartID;   ///结算会员编号
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CMoneyType PreBalance;   ///上次结算准备金
CMoneyType CurrMargin;   ///当前保证金总额
CMoneyType CloseProfit;   ///平仓盈亏
CMoneyType Premium;   ///期权权利金收支
CMoneyType Deposit;   ///入金金额
CMoneyType Withdraw;   ///出金金额
CMoneyType Balance;   ///期货结算准备金
CMoneyType Available;   ///可提资金
CParticipantIDType ParticipantID;   ///交易会员编号
CParticipantIDType ClearingPartID;   ///结算会员编号
CMoneyType FrozenMargin;   ///冻结的保证金
CMoneyType FrozenPremium;   ///冻结的权利金
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
CClientIDType ClientID;   ///客户代码
CClientNameType ClientName;   ///客户名称
CIdCardTypeType IdentifiedCardType;   ///证件类型
CIdentifiedCardNoType IdentifiedCardNo;   ///证件号码
CTradingRoleType TradingRole;   ///交易角色
CClientTypeType ClientType;   ///客户类型
CBoolType IsActive;   ///是否活跃
CHedgeFlagType HedgeFlag;   ///客户交易类型
CParticipantIDType ParticipantID;   ///会员号
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
CExchangeIDType ExchangeID;   ///交易所代码
CExchangeNameType ExchangeName;   ///交易所名称
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementGroupNameType SettlementGroupName;   ///结算组名称
CExchangeIDType ExchangeID;   ///交易所代码
CCurrencyType Currency;   ///币种
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
CMarketIDType MarketID;   ///市场代码
CMarketNameType MarketName;   ///市场名称
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
CMarketIDType MarketID;   ///市场代码
CProductIDType ProductID;   ///产品代码
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
CMarketIDType MarketID;   ///市场代码
CProductGroupIDType ProductGroupID;   ///产品组代码
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
CTopicIDType TopicID;   ///主题代码
CTopicNameType TopicName;   ///主题名称
CMarketIDType MarketID;   ///市场代码
CSecondsType SnapShotFeq;   ///采样频率
CMarketDataDepthType MarketDataDepth;   ///市场行情深度
CSecondsType DelaySeconds;   ///延迟秒数
CMarketDataModeType MarketDataMode;   ///行情模式
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
CParticipantIDType ParticipantID;   ///参与者代码
CParticipantTypeType ParticipantType;   ///参与者类型
CTopicIDType TopicID;   ///主题代码
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
CParticipantIDType ParticipantID;   ///会员代码
CParticipantNameType ParticipantName;   ///会员名称
CParticipantAbbrType ParticipantAbbr;   ///会员简称
CMemberTypeType MemberType;   ///会员类型
CBoolType IsActive;   ///是否活跃
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
CParticipantIDType ParticipantID;   ///会员代码
CUserIDType UserID;   ///交易用户代码
CUserTypeType UserType;   ///交易用户类型
CPasswordType Password;   ///密码
CUserActiveType IsActive;   ///交易员权限
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
CClientIDType ClientID;   ///客户代码
CClientNameType ClientName;   ///客户名称
CIdCardTypeType IdentifiedCardType;   ///证件类型
CIdentifiedCardNoType IdentifiedCardNo;   ///证件号码
CTradingRoleType TradingRole;   ///交易角色
CClientTypeType ClientType;   ///客户类型
CBoolType IsActive;   ///是否活跃
CHedgeFlagType HedgeFlag;   ///客户交易类型
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
CClientIDType ClientID;   ///客户代码
CParticipantIDType ParticipantID;   ///会员代码
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
CUserIDType UserID;   ///交易用户代码
CIPAddressType IPAddress;   ///IP地址
CIPAddressType IPMask;   ///IP地址掩码
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
CFrontIDType FrontID;   ///前置编号
CUserIDType UserID;   ///交易用户代码
CUserTypeType UserType;   ///交易用户类型
CSessionIDType SessionID;   ///会话编号
CTimeType LoginTime;   ///登录时间
CParticipantIDType ParticipantID;   ///会员代码
CIPAddressType IPAddress;   ///IP地址
CProductInfoType UserProductInfo;   ///用户端产品信息
CProductInfoType InterfaceProductInfo;   ///接口端产品信息
CProtocolInfoType ProtocolInfo;   ///协议信息
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
CProductIDType ProductID;   ///产品代码
CInstrumentStatusType InstrumentStatus;   ///合约交易状态
CMdPubStatusType MdPubStatus;   ///行情发布状态
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
CParticipantIDType ClearingPartID;   ///结算会员
CParticipantIDType ParticipantID;   ///交易会员
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
CUserIDType UserID;   ///交易用户代码
CFunctionCodeType FunctionCode;   ///功能代码
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CAccountIDType AccountID;   ///资金帐号
CParticipantIDType ParticipantID;   ///会员代码
CCurrencyType Currency;   ///币种
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
CUserIDType UserID;   ///交易用户代码
CCommFluxType MaxCommFlux;   ///最大通讯量
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CProductGroupIDType ProductGroupID;   ///产品组代码
CProductGroupNameType ProductGroupName;   ///产品组名称
CCommodityIDType CommodityID;   ///商品代码
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CProductIDType ProductID;   ///产品代码
CProductGroupIDType ProductGroupID;   ///产品组代码
CProductNameType ProductName;   ///产品名称
CProductClassType ProductClass;   ///产品类型
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
CSettlementGroupIDType SettlementGroupID;   ///char[9]
CProductIDType ProductID;   ///char[9]
CProductGroupIDType ProductGroupID;   ///char[9]
CInstrumentIDType UnderlyingInstrID;   ///char[31]
CProductClassType ProductClass;   ///char[1]
CPositionTypeType PositionType;   ///char[1]
CPriceType StrikePrice;   ///double
COptionsTypeType OptionsType;   ///char[1]
CVolumeMultipleType VolumeMultiple;   ///uint32_t
CUnderlyingMultipleType UnderlyingMultiple;   ///double
CInstrumentIDType InstrumentID;   ///char[31]
CInstrumentNameType InstrumentName;   ///char[21]
CYearType DeliveryYear;   ///int
CMonthType DeliveryMonth;   ///int
CAdvanceMonthType AdvanceMonth;   ///char[4]
CBoolType IsTrading;   ///int
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CInstrumentIDType CombInstrumentID;   ///组合合约代码
CLegIDType LegID;   ///单腿编号
CInstrumentIDType LegInstrumentID;   ///单腿合约代码
CDirectionType Direction;   ///买卖方向
CLegMultipleType LegMultiple;   ///单腿乘数
CImplyLevelType ImplyLevel;   ///推导层数
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CParticipantIDType ParticipantID;   ///会员代码
CTradingRoleType TradingRole;   ///交易角色
CAccountIDType AccountID;   ///资金帐号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CParticipantIDType ParticipantID;   ///会员代码
CProductIDType ProductID;   ///产品代码
CTradingRoleType TradingRole;   ///交易角色
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CProductIDType ProductID;   ///产品代码
CParticipantIDType ParticipantID;   ///会员代码
CTradingRightType TradingRight;   ///交易权限
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CInstrumentIDType InstrumentID;   ///合约代码
CParticipantIDType ParticipantID;   ///会员代码
CTradingRightType TradingRight;   ///交易权限
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CProductIDType ProductID;   ///产品代码
CClientIDType ClientID;   ///客户代码
CTradingRightType TradingRight;   ///交易权限
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CInstrumentIDType InstrumentID;   ///合约代码
CClientIDType ClientID;   ///客户代码
CTradingRightType TradingRight;   ///交易权限
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CProductIDType ProductID;   ///产品代码
CProductLifePhaseType ProductLifePhase;   ///产品生命周期状态
CTradingModelType TradingModel;   ///交易模式
CRatioType OptionsLimitRatio;   ///期权限仓系数
CRatioType OptionsMgRatio;   ///期权保证金调整系数
CSettlePriceSecondsType SettlePriceSeconds;   ///结算取样时间
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CDateType CreateDate;   ///创建日
CDateType OpenDate;   ///上市日
CDateType ExpireDate;   ///到期日
CDateType StartDelivDate;   ///开始交割日
CDateType EndDelivDate;   ///最后交割日
CPriceType BasisPrice;   ///挂牌基准价
CVolumeType MaxMarketOrderVolume;   ///市价单最大下单量
CVolumeType MinMarketOrderVolume;   ///市价单最小下单量
CVolumeType MaxLimitOrderVolume;   ///限价单最大下单量
CVolumeType MinLimitOrderVolume;   ///限价单最小下单量
CPriceType PriceTick;   ///最小变动价位
CMonthCountType AllowDelivPersonOpen;   ///交割月自然人开仓
CInstrumentIDType InstrumentID;   ///合约代码
CInstLifePhaseType InstLifePhase;   ///合约生命周期状态
CBoolType IsFirstTradingDay;   ///是否首交易日
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CPriceLimitTypeType PriceLimitType;   ///限价类型
CValueModeType ValueMode;   ///取值方式
CRoundingModeType RoundingMode;   ///舍入方式
CPriceType UpperValue;   ///上限
CPriceType LowerValue;   ///下限
CInstrumentIDType InstrumentID;   ///合约代码
CTradingSegmentSNType TradingSegmentSN;   ///交易阶段编号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CMarginCalcIDType MarginCalcID;   ///保证金算法代码
CInstrumentIDType InstrumentID;   ///合约代码
CParticipantIDType ParticipantID;   ///会员代码
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CTradingRoleType TradingRole;   ///交易角色
CHedgeFlagType HedgeFlag;   ///投机套保标志
CValueModeType ValueMode;   ///取值方式
CRatioType LongMarginRatio;   ///多头保证金率
CRatioType ShortMarginRatio;   ///空头保证金率
CInstrumentIDType InstrumentID;   ///合约代码
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CPartPosiLimitCalcIDType PartPosiLimitCalcID;   ///会员限仓算法代码
CInstrumentIDType InstrumentID;   ///合约代码
CParticipantIDType ParticipantID;   ///会员代码
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CLargeVolumeType StartTotalPosition;   ///限仓起点
CValueModeType ValueMode;   ///取值方式
CRatioType LongPosLimit;   ///多头限仓
CRatioType ShortPosLimit;   ///空头限仓
CInstrumentIDType InstrumentID;   ///合约代码
CParticipantIDType ParticipantID;   ///会员代码
CPositionTradingRoleType TradingRole;   ///交易角色
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CClientPosiLimitCalcIDType ClientPosiLimitCalcID;   ///客户限仓算法代码
CInstrumentIDType InstrumentID;   ///合约代码
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CLargeVolumeType StartTotalPosition;   ///限仓起点
CValueModeType ValueMode;   ///取值方式
CRatioType LongPosLimit;   ///多头限仓
CRatioType ShortPosLimit;   ///空头限仓
CInstrumentIDType InstrumentID;   ///合约代码
CClientTypeType ClientType;   ///客户类型
CHedgeFlagType HedgeFlag;   ///客户交易类型
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CClientPosiLimitCalcIDType ClientPosiLimitCalcID;   ///客户限仓算法代码
CInstrumentIDType InstrumentID;   ///合约代码
CClientIDType ClientID;   ///客户代码
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CLargeVolumeType StartTotalPosition;   ///限仓起点
CValueModeType ValueMode;   ///取值方式
CRatioType LongPosLimit;   ///多头限仓
CRatioType ShortPosLimit;   ///空头限仓
CInstrumentIDType InstrumentID;   ///合约代码
CClientIDType ClientID;   ///客户代码
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CHedgeUsageTypeType HedgeUsageType;   ///套保额度使用类型
CInstrumentIDType InstrumentID;   ///合约代码
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CTradingSegmentSNType TradingSegmentSN;   ///交易阶段编号
CTradingSegmentNameType TradingSegmentName;   ///交易阶段名称
CTimeType StartTime;   ///起始时间
CInstrumentStatusType InstrumentStatus;   ///合约交易状态
CInstrumentIDType InstrumentID;   ///合约代码
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CPriceLimitTypeType PriceLimitType;   ///限价类型
CValueModeType ValueMode;   ///取值方式
CRoundingModeType RoundingMode;   ///舍入方式
CPriceType UpperValue;   ///上限
CPriceType LowerValue;   ///下限
CDurationType PriceLimitDuration;   ///停板持续时间
CDurationType FuseDuration;   ///熔断期
CBoolType TradingFlag;   ///熔断期是否交易
CTimeType NoFuseTime;   ///不启动熔断时间
CInstrumentIDType InstrumentID;   ///合约代码
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CMoneyType PreBalance;   ///上次结算准备金
CMoneyType CurrMargin;   ///当前保证金总额
CMoneyType CloseProfit;   ///平仓盈亏
CMoneyType Premium;   ///期权权利金收支
CMoneyType Deposit;   ///入金金额
CMoneyType Withdraw;   ///出金金额
CMoneyType Balance;   ///期货结算准备金
CMoneyType Available;   ///可提资金
CAccountIDType AccountID;   ///资金帐号
CMoneyType FrozenMargin;   ///冻结的保证金
CMoneyType FrozenPremium;   ///冻结的权利金
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CHedgeFlagType HedgeFlag;   ///投机套保标志
CPosiDirectionType PosiDirection;   ///持仓多空方向
CVolumeType YdPosition;   ///上日持仓
CVolumeType Position;   ///今日持仓
CVolumeType LongFrozen;   ///多头冻结
CVolumeType ShortFrozen;   ///空头冻结
CVolumeType YdLongFrozen;   ///昨日多头冻结
CVolumeType YdShortFrozen;   ///昨日空头冻结
CInstrumentIDType InstrumentID;   ///合约代码
CParticipantIDType ParticipantID;   ///会员代码
CTradingRoleType TradingRole;   ///交易角色
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CHedgeFlagType HedgeFlag;   ///投机套保标志
CPosiDirectionType PosiDirection;   ///持仓多空方向
CVolumeType YdPosition;   ///上日持仓
CVolumeType Position;   ///今日持仓
CVolumeType LongFrozen;   ///多头冻结
CVolumeType ShortFrozen;   ///空头冻结
CVolumeType YdLongFrozen;   ///昨日多头冻结
CVolumeType YdShortFrozen;   ///昨日空头冻结
CVolumeType BuyTradeVolume;   ///当日买成交量
CVolumeType SellTradeVolume;   ///当日卖成交量
CMoneyType PositionCost;   ///持仓成本
CMoneyType YdPositionCost;   ///昨日持仓成本
CMoneyType UseMargin;   ///占用的保证金
CMoneyType FrozenMargin;   ///冻结的保证金
CMoneyType LongFrozenMargin;   ///多头冻结的保证金
CMoneyType ShortFrozenMargin;   ///空头冻结的保证金
CMoneyType FrozenPremium;   ///冻结的权利金
CInstrumentIDType InstrumentID;   ///合约代码
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CInstrumentIDType InstrumentID;   ///合约代码
CVolumeType LongVolumeOriginal;   ///多头保值额度最初申请量
CVolumeType ShortVolumeOriginal;   ///空头保值额度最初申请量
CVolumeType LongVolume;   ///多头保值额度
CVolumeType ShortVolume;   ///空头保值额度
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
COrderSysIDType OrderSysID;   ///报单编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
CInstrumentIDType InstrumentID;   ///合约代码
COrderPriceTypeType OrderPriceType;   ///报单价格条件
CDirectionType Direction;   ///买卖方向
CCombOffsetFlagType CombOffsetFlag;   ///组合开平标志
CCombHedgeFlagType CombHedgeFlag;   ///组合投机套保标志
CPriceType LimitPrice;   ///价格
CVolumeType VolumeTotalOriginal;   ///数量
CTimeConditionType TimeCondition;   ///有效期类型
CDateType GTDDate;   ///GTD日期
CVolumeConditionType VolumeCondition;   ///成交量类型
CVolumeType MinVolume;   ///最小成交量
CContingentConditionType ContingentCondition;   ///触发条件
CPriceType StopPrice;   ///止损价
CForceCloseReasonType ForceCloseReason;   ///强平原因
COrderLocalIDType OrderLocalID;   ///本地报单编号
CBoolType IsAutoSuspend;   ///自动挂起标志
CBusinessUnitType BusinessUnit;   ///业务单元
CMoneyType RiskPreFrozen;   ///风控预冻结
COrderSourceType OrderSource;   ///报单来源
COrderStatusType OrderStatus;   ///报单状态
COrderTypeType OrderType;   ///报单类型
CVolumeType VolumeTraded;   ///今成交数量
CVolumeType VolumeTotal;   ///剩余数量
CDateType InsertDate;   ///报单日期
CTimeType InsertTime;   ///插入时间
CTimeType ActiveTime;   ///激活时间
CTimeType SuspendTime;   ///挂起时间
CTimeType UpdateTime;   ///最后修改时间
CTimeType CancelTime;   ///撤销时间
CUserIDType ActiveUserID;   ///最后修改交易用户代码
CPriorityType Priority;   ///优先权
CTimeSortIDType TimeSortID;   ///按时间排队的序号
CParticipantIDType ClearingPartID;   ///结算会员编号
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CPriceType LastPrice;   ///最新价
CPriceType PreSettlementPrice;   ///昨结算
CPriceType PreClosePrice;   ///昨收盘
CLargeVolumeType PreOpenInterest;   ///昨持仓量
CPriceType OpenPrice;   ///今开盘
CPriceType HighestPrice;   ///最高价
CPriceType LowestPrice;   ///最低价
CVolumeType Volume;   ///数量
CMoneyType Turnover;   ///成交金额
CLargeVolumeType OpenInterest;   ///持仓量
CPriceType ClosePrice;   ///今收盘
CPriceType SettlementPrice;   ///今结算
CPriceType UpperLimitPrice;   ///涨停板价
CPriceType LowerLimitPrice;   ///跌停板价
CRatioType PreDelta;   ///昨虚实度
CRatioType CurrDelta;   ///今虚实度
CTimeType UpdateTime;   ///最后修改时间
CMillisecType UpdateMillisec;   ///最后修改毫秒
CInstrumentIDType InstrumentID;   ///合约代码
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CPriceType LastPrice;   ///最新价
CPriceType PreSettlementPrice;   ///昨结算
CPriceType PreClosePrice;   ///昨收盘
CLargeVolumeType PreOpenInterest;   ///昨持仓量
CPriceType OpenPrice;   ///今开盘
CPriceType HighestPrice;   ///最高价
CPriceType LowestPrice;   ///最低价
CVolumeType Volume;   ///数量
CMoneyType Turnover;   ///成交金额
CLargeVolumeType OpenInterest;   ///持仓量
CPriceType ClosePrice;   ///今收盘
CPriceType SettlementPrice;   ///今结算
CPriceType UpperLimitPrice;   ///涨停板价
CPriceType LowerLimitPrice;   ///跌停板价
CRatioType PreDelta;   ///昨虚实度
CRatioType CurrDelta;   ///今虚实度
CTimeType UpdateTime;   ///最后修改时间
CMillisecType UpdateMillisec;   ///最后修改毫秒
CInstrumentIDType InstrumentID;   ///合约代码
CPriceType BidPrice1;   ///申买价一
CVolumeType BidVolume1;   ///申买量一
CPriceType AskPrice1;   ///申卖价一
CVolumeType AskVolume1;   ///申卖量一
CPriceType BidPrice2;   ///申买价二
CVolumeType BidVolume2;   ///申买量二
CPriceType AskPrice2;   ///申卖价二
CVolumeType AskVolume2;   ///申卖量二
CPriceType BidPrice3;   ///申买价三
CVolumeType BidVolume3;   ///申买量三
CPriceType AskPrice3;   ///申卖价三
CVolumeType AskVolume3;   ///申卖量三
CPriceType BidPrice4;   ///申买价四
CVolumeType BidVolume4;   ///申买量四
CPriceType AskPrice4;   ///申卖价四
CVolumeType AskVolume4;   ///申卖量四
CPriceType BidPrice5;   ///申买价五
CVolumeType BidVolume5;   ///申买量五
CPriceType AskPrice5;   ///申卖价五
CVolumeType AskVolume5;   ///申卖量五
CPriceType BandingUpperPrice;   ///上带价
CPriceType BandingLowerPrice;   ///下带价
CPriceType ReferencePrice;   ///基准价
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
CInstrumentIDType InstrumentID;   ///合约代码
CDirectionType Direction;   ///买卖方向
CPriceType Price;   ///价格
CVolumeType Volume;   ///数量
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
CStartPosType StartPos;   ///起始位置
CAliasType Alias;   ///别名
COriginalTextType OriginalText;   ///原文
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CPriceType PreSettlementPrice;   ///昨结算
CPriceType PreClosePrice;   ///昨收盘
CLargeVolumeType PreOpenInterest;   ///昨持仓量
CRatioType PreDelta;   ///昨虚实度
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
CPriceType OpenPrice;   ///今开盘
CPriceType HighestPrice;   ///最高价
CPriceType LowestPrice;   ///最低价
CPriceType ClosePrice;   ///今收盘
CPriceType UpperLimitPrice;   ///涨停板价
CPriceType LowerLimitPrice;   ///跌停板价
CPriceType SettlementPrice;   ///今结算
CRatioType CurrDelta;   ///今虚实度
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
CPriceType LastPrice;   ///最新价
CVolumeType Volume;   ///数量
CMoneyType Turnover;   ///成交金额
CLargeVolumeType OpenInterest;   ///持仓量
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
CPriceType BidPrice1;   ///申买价一
CVolumeType BidVolume1;   ///申买量一
CPriceType AskPrice1;   ///申卖价一
CVolumeType AskVolume1;   ///申卖量一
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
CPriceType BidPrice2;   ///申买价二
CVolumeType BidVolume2;   ///申买量二
CPriceType BidPrice3;   ///申买价三
CVolumeType BidVolume3;   ///申买量三
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
CPriceType AskPrice2;   ///申卖价二
CVolumeType AskVolume2;   ///申卖量二
CPriceType AskPrice3;   ///申卖价三
CVolumeType AskVolume3;   ///申卖量三
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
CPriceType BidPrice4;   ///申买价四
CVolumeType BidVolume4;   ///申买量四
CPriceType BidPrice5;   ///申买价五
CVolumeType BidVolume5;   ///申买量五
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
CPriceType AskPrice4;   ///申卖价四
CVolumeType AskVolume4;   ///申卖量四
CPriceType AskPrice5;   ///申卖价五
CVolumeType AskVolume5;   ///申卖量五
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
CInstrumentIDType InstrumentID;   ///合约代码
CTimeType UpdateTime;   ///最后修改时间
CMillisecType UpdateMillisec;   ///最后修改毫秒
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CParticipantIDType ParticipantID;   ///会员代码
CAccountIDType AccountID;   ///资金帐号
CMoneyType Reserve;   ///基本准备金
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
CPriceType BandingUpperPrice;   ///上带价
CPriceType BandingLowerPrice;   ///下带价
CPriceType ReferencePrice;   ///基准价
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CProductIDType ProductID;   ///产品代码
CTradingRightType TradingRight;   ///交易权限
CInformationIDType InformationID;   ///信息编号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CInstrumentIDType InstrumentID;   ///合约代码
CTradingRightType TradingRight;   ///交易权限
CInformationIDType InformationID;   ///信息编号
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CInstrumentIDType CombInstrumentID;   ///组合合约代码
CLegIDType LegID;   ///单腿编号
CInstrumentIDType LegInstrumentID;   ///单腿合约代码
CDirectionType Direction;   ///买卖方向
CLegMultipleType LegMultiple;   ///单腿乘数
CPriorityType Priority;   ///优先级
CRuleTypeType RuleType;   ///组合规则类型
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CInstrumentIDType CombInstrumentID;   ///组合合约代码
CVolumeType CombPosition;   ///组合持仓
CMoneyType CombFreeMargin;   ///组合一手释放的保证金
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CInstrumentIDType InstrumentID;   ///单腿合约代码
CVolumeType LongPosition;   ///多头持仓
CVolumeType ShortPosition;   ///空头持仓
CVolumeType LongCloseFrozenPosition;   ///多头平仓冻结持仓
CVolumeType ShortCloseFrozenPosition;   ///空头平仓冻结持仓
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
CParticipantIDType ParticipantID;   ///会员代码
CUserIDType UserID;   ///交易用户代码
CClientIDType ClientID;   ///客户代码
COrderLocalIDType ActionLocalID;   ///操作本地编号
CInstrumentIDType CombInstrumentID;   ///组合合约代码
CVolumeType CombVolume;   ///组合数量
CCombDirectionType CombDirection;   ///组合动作方向
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CInstrumentGroupIDType InstrumentGroupID;   ///合约组代码
CMarginCombTypeType MarginCombType;   ///保证金组合类型
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CInstrumentGroupIDType InstrumentGroupID;   ///合约组代码
CVolumeType LongPosition;   ///合约组多头总持仓
CMoneyType LongMargin;   ///合约组多头保证金之和
CVolumeType ShortPosition;   ///合约组空头总持仓
CMoneyType ShortMargin;   ///合约组空头保证金之和
CMoneyType ActualMargin;   ///实际收取的保证金
CVolumeType LongFrozenPosition;   ///合约组多头冻结总持仓
CMoneyType LongFrozenMargin;   ///合约组多头冻结保证金之和
CVolumeType ShortFrozenPosition;   ///合约组空头冻结总持仓
CMoneyType ShortFrozenMargin;   ///合约组空头冻结保证金之和
CMoneyType ActualFrozenMargin;   ///实际冻结的保证金
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CInstrumentIDType InstrumentID;   ///合约代码
CInstrumentGroupIDType InstrumentGroupID;   ///合约组代码
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CInstrumentIDType InstrumentID;   ///合约代码
CValueModeType ValueMode;   ///取值方式
CRoundingModeType RoundingMode;   ///舍入方式
CPriceType UpperValue;   ///上限
CPriceType LowerValue;   ///下限
CPriceType LastPrice;   ///基准价
CPriceType BandingUpperPrice;   ///上限
CPriceType BandingLowerPrice;   ///下限
CBoolType IsActive;   ///是否启用价格波动带
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CFunctionCodeType FunctionCode;   ///功能代码
COperationTypeType OperationType;   ///操作类型
CDescriptionType Description;   ///功能描述
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CAccountIDType Account;   ///资金账号
CMoneyType Deposit;   ///入金金额
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CClientIDType ClientID;   ///客户代码
CClientNameType ClientName;   ///客户名称
CIdCardTypeType IdentifiedCardType;   ///证件类型
CIdentifiedCardNoType IdentifiedCardNo;   ///证件号码
CTradingRoleType TradingRole;   ///交易角色
CClientTypeType ClientType;   ///客户类型
CBoolType IsActive;   ///是否活跃
CHedgeFlagType HedgeFlag;   ///客户交易类型
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CClientIDType ClientID;   ///客户代码
CParticipantIDType ParticipantID;   ///会员代码
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CLargeVolumeType StartTotalPosition;   ///限仓起点
CValueModeType ValueMode;   ///取值方式
CRatioType LongPosLimit;   ///多头限仓
CRatioType ShortPosLimit;   ///空头限仓
CInstrumentIDType InstrumentID;   ///合约代码
CParticipantIDType ParticipantID;   ///会员代码
CPositionTradingRoleType TradingRole;   ///交易角色
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CLargeVolumeType StartTotalPosition;   ///限仓起点
CValueModeType ValueMode;   ///取值方式
CRatioType LongPosLimit;   ///多头限仓
CRatioType ShortPosLimit;   ///空头限仓
CInstrumentIDType InstrumentID;   ///合约代码
CClientTypeType ClientType;   ///客户类型
CHedgeFlagType HedgeFlag;   ///客户交易类型
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CLargeVolumeType StartTotalPosition;   ///限仓起点
CValueModeType ValueMode;   ///取值方式
CRatioType LongPosLimit;   ///多头限仓
CRatioType ShortPosLimit;   ///空头限仓
CInstrumentIDType InstrumentID;   ///合约代码
CClientIDType ClientID;   ///客户代码
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CSerialNoType HedgeQuotaSN;   ///流水号
COperatorIDType OperatorID;   ///用户代码
CTimeType Time;   ///时间
CInstrumentIDType InstrumentID;   ///合约代码
CPosiDirectionType PosiDirection;   ///持仓多空方向
CVolumeType TradingVolume;   ///发生额
CVolumeType HedgeQuota;   ///保值额度
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CParticipantIDType ParticipantID;   ///会员代码
CUserIDType UserID;   ///交易用户代码
CUserTypeType UserType;   ///交易用户类型
CPasswordType Password;   ///密码
CUserActiveType IsActive;   ///交易员权限
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CProductIDType ProductID;   ///产品代码
CParticipantIDType ParticipantID;   ///会员代码
CTradingRightType TradingRight;   ///交易权限
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CProductIDType ProductID;   ///产品代码
CClientIDType ClientID;   ///客户代码
CTradingRightType TradingRight;   ///交易权限
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CInstrumentIDType InstrumentID;   ///合约代码
CParticipantIDType ParticipantID;   ///会员代码
CTradingRightType TradingRight;   ///交易权限
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CInstrumentIDType InstrumentID;   ///合约代码
CClientIDType ClientID;   ///客户代码
CTradingRightType TradingRight;   ///交易权限
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CTradingRoleType TradingRole;   ///交易角色
CHedgeFlagType HedgeFlag;   ///投机套保标志
CValueModeType ValueMode;   ///取值方式
CRatioType LongMarginRatio;   ///多头保证金率
CRatioType ShortMarginRatio;   ///空头保证金率
CInstrumentIDType InstrumentID;   ///合约代码
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CPriceType LastPrice;   ///最新价
CPriceType PreSettlementPrice;   ///昨结算
CPriceType PreClosePrice;   ///昨收盘
CLargeVolumeType PreOpenInterest;   ///昨持仓量
CPriceType OpenPrice;   ///今开盘
CPriceType HighestPrice;   ///最高价
CPriceType LowestPrice;   ///最低价
CVolumeType Volume;   ///数量
CMoneyType Turnover;   ///成交金额
CLargeVolumeType OpenInterest;   ///持仓量
CPriceType ClosePrice;   ///今收盘
CPriceType SettlementPrice;   ///今结算
CPriceType UpperLimitPrice;   ///涨停板价
CPriceType LowerLimitPrice;   ///跌停板价
CRatioType PreDelta;   ///昨虚实度
CRatioType CurrDelta;   ///今虚实度
CTimeType UpdateTime;   ///最后修改时间
CMillisecType UpdateMillisec;   ///最后修改毫秒
CInstrumentIDType InstrumentID;   ///合约代码
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CUserIDType UserID;   ///交易用户代码
CIPAddressType IPAddress;   ///IP地址
CIPAddressType IPMask;   ///IP地址掩码
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CPriceLimitTypeType PriceLimitType;   ///限价类型
CValueModeType ValueMode;   ///取值方式
CRoundingModeType RoundingMode;   ///舍入方式
CPriceType UpperValue;   ///上限
CPriceType LowerValue;   ///下限
CInstrumentIDType InstrumentID;   ///合约代码
CTradingSegmentSNType TradingSegmentSN;   ///交易阶段编号
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CInstrumentStatusType InstrumentStatus;   ///合约状态
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CParticipantIDType ParticipantID;   ///参与者代码
CParticipantTypeType ParticipantType;   ///参与者类型
CTopicIDType TopicID;   ///主题代码
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CProductIDType ProductID;   ///产品代码
CTradingRightType TradingRight;   ///交易权限
CInformationIDType InformationID;   ///信息编号
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CInstrumentIDType InstrumentID;   ///合约代码
CTradingRightType TradingRight;   ///交易权限
CInformationIDType InformationID;   ///信息编号
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CQuoteSysIDType QuoteSysID;   ///报价编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
CVolumeType BidVolume;   ///买入数量
CVolumeType AskVolume;   ///卖出数量
CInstrumentIDType InstrumentID;   ///合约代码
COrderLocalIDType QuoteLocalID;   ///本地报价编号
CBusinessUnitType BusinessUnit;   ///业务单元
CCombOffsetFlagType BidCombOffsetFlag;   ///买方组合开平标志
CCombHedgeFlagType BidCombHedgeFlag;   ///买方组合套保标志
CPriceType BidPrice;   ///买方价格
CCombOffsetFlagType AskCombOffsetFlag;   ///卖方组合开平标志
CCombHedgeFlagType AskCombHedgeFlag;   ///卖方组合套保标志
CPriceType AskPrice;   ///卖方价格
CTimeType InsertTime;   ///插入时间
CTimeType CancelTime;   ///撤销时间
CTimeType TradeTime;   ///成交时间
COrderSysIDType BidOrderSysID;   ///买方报单编号
COrderSysIDType AskOrderSysID;   ///卖方报单编号
CParticipantIDType ClearingPartID;   ///结算会员编号
CMoneyType BidRiskPreFrozen;   ///买风控预冻结
CMoneyType AskRiskPreFrozen;   ///卖风控预冻结
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CTradeIDType TradeID;   ///成交编号
CDirectionType Direction;   ///买卖方向
COrderSysIDType OrderSysID;   ///报单编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CTradingRoleType TradingRole;   ///交易角色
CAccountIDType AccountID;   ///资金帐号
CInstrumentIDType InstrumentID;   ///合约代码
COffsetFlagType OffsetFlag;   ///开平标志
CHedgeFlagType HedgeFlag;   ///投机套保标志
CPriceType Price;   ///价格
CVolumeType Volume;   ///数量
CTimeType TradeTime;   ///成交时间
CTradeTypeType TradeType;   ///成交类型
CPriceSourceType PriceSource;   ///成交价来源
CUserIDType UserID;   ///交易用户代码
COrderLocalIDType OrderLocalID;   ///本地报单编号
CParticipantIDType ClearingPartID;   ///结算会员编号
CBusinessUnitType BusinessUnit;   ///业务单元
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
CDateType TradingDay;   ///char[9]
CSettlementGroupIDType SettlementGroupID;   ///char[9]
CSettlementIDType SettlementID;   ///uint32_t
COrderSysIDType OrderSysID;   ///char[13]
CParticipantIDType ParticipantID;   ///char[11]
CClientIDType ClientID;   ///char[11]
CUserIDType UserID;   //char[16]
CInstrumentIDType InstrumentID;   ///char[32]
COrderPriceTypeType OrderPriceType;   ///char[1]
CDirectionType Direction;   ///char[1]
CCombOffsetFlagType CombOffsetFlag;   ///char[5]
CCombHedgeFlagType CombHedgeFlag;   ///char[5]
CPriceType LimitPrice;   ///double
CVolumeType VolumeTotalOriginal;   ///uint32_t
CTimeConditionType TimeCondition;   ///char[1]
CDateType GTDDate;   ///char[9]
CVolumeConditionType VolumeCondition;   ///char[1]
CVolumeType MinVolume;   ///uint32_t
CContingentConditionType ContingentCondition;   ///char[1]
CPriceType StopPrice;   ///double
CForceCloseReasonType ForceCloseReason;   ///char[1]
COrderLocalIDType OrderLocalID;   ///char[13]
CBoolType IsAutoSuspend;   ///int
CBusinessUnitType BusinessUnit;   ///char[21]
CMoneyType RiskPreFrozen;   ///double
COrderSourceType OrderSource;   ///char[1]
COrderStatusType OrderStatus;   ///char[1]
COrderTypeType OrderType;   ///char[1]
CVolumeType VolumeTraded;   ///uint32_t
CVolumeType VolumeTotal;   ///uint32_t
CDateType InsertDate;   ///char[9]
CTimeType InsertTime;   ///char[9]
CTimeType ActiveTime;   ///char[9]
CTimeType SuspendTime;   ///char[9]
CTimeType UpdateTime;   ///char[9]
CTimeType CancelTime;   ///char[9]
CUserIDType ActiveUserID;   ///char[16]
CPriorityType Priority;   ///uint32_t
CTimeSortIDType TimeSortID;   ///uint32_t
CParticipantIDType ClearingPartID;   ///char[11]
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CInstrumentIDType InstrumentID;   ///合约编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
COrderLocalIDType ExecOrderLocalID;   ///本地执行宣告编号
CVolumeType Volume;   ///数量
CBusinessUnitType BusinessUnit;   ///业务单元
CExecOrderSysIDType ExecOrderSysID;   ///执行宣告编号
CDateType InsertDate;   ///报单日期
CTimeType InsertTime;   ///插入时间
CTimeType CancelTime;   ///撤销时间
CExecResultType ExecResult;   ///执行结果
CParticipantIDType ClearingPartID;   ///结算会员编号
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
COrderSysIDType CombOrderSysID;   ///组合报单编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CUserIDType UserID;   ///交易用户代码
CPriceType LimitPrice;   ///价格
CVolumeType VolumeTotalOriginal;   ///数量
COrderLocalIDType CombOrderLocalID;   ///本地报单编号
CBusinessUnitType BusinessUnit;   ///业务单元
CInstrumentIDType InstrumentID1;   ///合约代码1
CDirectionType Direction1;   ///买卖方向1
CLegMultipleType LegMultiple1;   ///分腿乘数1
COffsetFlagType OffsetFlag1;   ///开平标志1
CHedgeFlagType HedgeFlag1;   ///投机套保标志1
CInstrumentIDType InstrumentID2;   ///合约代码2
CDirectionType Direction2;   ///买卖方向2
CLegMultipleType LegMultiple2;   ///分腿乘数2
COffsetFlagType OffsetFlag2;   ///开平标志2
CHedgeFlagType HedgeFlag2;   ///投机套保标志2
CInstrumentIDType InstrumentID3;   ///合约代码3
CDirectionType Direction3;   ///买卖方向3
CLegMultipleType LegMultiple3;   ///分腿乘数3
COffsetFlagType OffsetFlag3;   ///开平标志3
CHedgeFlagType HedgeFlag3;   ///投机套保标志3
CInstrumentIDType InstrumentID4;   ///合约代码4
CDirectionType Direction4;   ///买卖方向4
CLegMultipleType LegMultiple4;   ///分腿乘数4
COffsetFlagType OffsetFlag4;   ///开平标志4
CHedgeFlagType HedgeFlag4;   ///投机套保标志4
COrderSourceType OrderSource;   ///报单来源
CVolumeType VolumeTraded;   ///今成交数量
CVolumeType VolumeTotal;   ///剩余数量
CDateType InsertDate;   ///报单日期
CTimeType InsertTime;   ///插入时间
CParticipantIDType ClearingPartID;   ///结算会员编号
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
CInstrumentIDType InstrumentID;   ///合约代码
CAdminOrderCommandFlagType AdminOrderCommand;   ///管理报单命令
CParticipantIDType ClearingPartID;   ///结算会员编号
CParticipantIDType ParticipantID;   ///交易会员编号
CMoneyType Amount;   ///金额
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
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
CInstrumentIDType InstrumentID;   ///合约代码
CAdminOrderCommandFlagType AdminOrderCommand;   ///管理报单命令
CParticipantIDType ClearingPartID;   ///结算会员编号
CParticipantIDType ParticipantID;   ///交易会员编号
CMoneyType Amount;   ///金额
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
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
CDateType TradingDay;   ///交易日
CBulletinIDType BulletinID;   ///公告编号
CSequenceNoType SequenceNo;   ///序列号
CNewsTypeType NewsType;   ///公告类型
CNewsUrgencyType NewsUrgency;   ///紧急程度
CTimeType SendTime;   ///发送时间
CAbstractType Abstract;   ///消息摘要
CComeFromType ComeFrom;   ///消息来源
CContentType Content;   ///消息正文
CURLLinkType URLLink;   ///WEB地址
CMarketIDType MarketID;   ///市场代码
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
CDateType TradingDay;   ///交易日
CExchangeIDType ExchangeID;   ///交易所代码
CExchangeDataSyncStatusType ExchangeDataSyncStatus;   ///交易所数据同步状态
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CDateType TradingDay;   ///交易日
CSettlementIDType SettlementID;   ///结算编号
CSGDataSyncStatusType SGDataSyncStatus;   ///结算组数据同步状态
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CInstrumentIDType InstrumentID;   ///合约代码
CInstrumentStatusType InstrumentStatus;   ///合约交易状态
CTradingSegmentSNType TradingSegmentSN;   ///交易阶段编号
CTimeType EnterTime;   ///进入本状态时间
CInstStatusEnterReasonType EnterReason;   ///进入本状态原因
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CInstrumentIDType InstrumentID;   ///合约代码
CInstrumentStatusType InstrumentStatus;   ///合约交易状态
CTradingSegmentSNType TradingSegmentSN;   ///交易阶段编号
CTimeType EnterTime;   ///进入本状态时间
CInstStatusEnterReasonType EnterReason;   ///进入本状态原因
CSettlementIDType SettlementID;   ///结算编号
CSequenceNoType SequenceNo;   ///序列号
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
CFrontIDType FrontID;   ///前置编号
CTimeType LastReportTime;   ///上次报告时间
CBoolType IsActive;   ///是否活跃
CMatchIDType MatchID;   ///撮合核心编号
CMatchStatusType MatchStatus;   ///撮合状态组
CRiskIDType RiskID;   ///风控核心编号
CRiskStatusType RiskStatus;   ///风控状态组
CFrontStatusType FrontStatus;   ///前置状态组
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
CDateType TradingDay;   ///交易日
CExchangeIDType ExchangeID;   ///交易所代码
CExchangeStatusType ExchangeStatus;   ///交易所状态
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CDateType TradingDay;   ///交易日
CSettlementIDType SettlementID;   ///结算编号
CSettlementGroupStatusType SettlementGroupStatus;   ///结算组状态
CTimeType EnterTime;   ///进入本状态时间
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CInstrumentIDType InstrumentID;   ///合约代码
CTimeType UpperPressureStartTime;   ///涨压力开始时间
CTimeType LowerPressureStartTime;   ///跌压力开始时间
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CPriceType LastPrice;   ///最新价
CPriceType PreSettlementPrice;   ///昨结算
CPriceType PreClosePrice;   ///昨收盘
CLargeVolumeType PreOpenInterest;   ///昨持仓量
CPriceType OpenPrice;   ///今开盘
CPriceType HighestPrice;   ///最高价
CPriceType LowestPrice;   ///最低价
CVolumeType Volume;   ///数量
CMoneyType Turnover;   ///成交金额
CLargeVolumeType OpenInterest;   ///持仓量
CPriceType ClosePrice;   ///今收盘
CPriceType SettlementPrice;   ///今结算
CPriceType UpperLimitPrice;   ///涨停板价
CPriceType LowerLimitPrice;   ///跌停板价
CRatioType PreDelta;   ///昨虚实度
CRatioType CurrDelta;   ///今虚实度
CTimeType UpdateTime;   ///最后修改时间
CMillisecType UpdateMillisec;   ///最后修改毫秒
CInstrumentIDType InstrumentID;   ///合约代码
CPriceType BidPrice1;   ///申买价一
CVolumeType BidVolume1;   ///申买量一
CPriceType AskPrice1;   ///申卖价一
CVolumeType AskVolume1;   ///申卖量一
CPriceType BidPrice2;   ///申买价二
CVolumeType BidVolume2;   ///申买量二
CPriceType AskPrice2;   ///申卖价二
CVolumeType AskVolume2;   ///申卖量二
CPriceType BidPrice3;   ///申买价三
CVolumeType BidVolume3;   ///申买量三
CPriceType AskPrice3;   ///申卖价三
CVolumeType AskVolume3;   ///申卖量三
CPriceType BidPrice4;   ///申买价四
CVolumeType BidVolume4;   ///申买量四
CPriceType AskPrice4;   ///申卖价四
CVolumeType AskVolume4;   ///申卖量四
CPriceType BidPrice5;   ///申买价五
CVolumeType BidVolume5;   ///申买量五
CPriceType AskPrice5;   ///申卖价五
CVolumeType AskVolume5;   ///申卖量五
CPriceType BandingUpperPrice;   ///上带价
CPriceType BandingLowerPrice;   ///下带价
CPriceType ReferencePrice;   ///基准价
CSequenceNoType SequenceNo;   ///序号
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
CQuoteSysIDType ReqForQuoteID;   ///询价编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CInstrumentIDType InstrumentID;   ///合约代码
CTradingDayType TradingDay;   ///交易日期
CTimeType ReqForQuoteTime;   ///询价时间
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CInstrumentIDType InstrumentID;   ///合约代码
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CInstrumentIDType InstrumentID;   ///合约代码
CDbmtTopicIDType DbmtTopicID;   ///Dbmt主题号
CDbmtSequenceIDType DbmtSequenceID;   ///Dbmt序列号
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
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CQuoteSysIDType ReqForQuoteID;   ///询价编号
CParticipantIDType ParticipantID;   ///会员代码
CClientIDType ClientID;   ///客户代码
CInstrumentIDType InstrumentID;   ///合约代码
CTradingDayType TradingDay;   ///交易日期
CTimeType ReqForQuoteTime;   ///询价时间
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
CDateType TradingDay;   ///交易日
CSettlementGroupIDType SettlementGroupID;   ///结算组代码
CSettlementIDType SettlementID;   ///结算编号
CProductIDType ProductID;   ///产品代码
CExchangeRateType ExchangeRate;   ///汇率
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
CParticipantIDType PartIDStart;   ///起始会员代码
CParticipantIDType PartIDEnd;   ///结束会员代码
CClientIDType ClientIDStart;   ///起始客户代码
CClientIDType ClientIDEnd;   ///结束客户代码
CInstrumentIDType combInstIDStart;   ///起始组合合约代码
CInstrumentIDType combInstIDEnd;   ///结束组合合约代码
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
CParticipantIDType PartIDStart;   ///起始会员代码
CParticipantIDType PartIDEnd;   ///结束会员代码
CClientIDType ClientIDStart;   ///起始客户代码
CClientIDType ClientIDEnd;   ///结束客户代码
CInstrumentIDType LegInstIDStart;   ///起始单腿合约代码
CInstrumentIDType LegInstIDEnd;   ///结束单腿合约代码
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
CTableNameType TableName;   ///内存表名称
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
CRiskIDType RiskID;   ///风控核心编号
CMatchIDType MatchID;   ///撮合核心编号
CBoolType IsActive;   ///是否活跃
CFrontIDType FrontID;   ///前置编号
CSequenceNoType SequenceNo;   ///已处理的消息序号
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
CParticipantIDType ParticipantID;   ///会员代码
CUserIDType UserID;   ///用户代码
CSequenceSeriesType SequenceSeries;   ///流类型
CSequenceNoType SequenceNo;   ///序列号
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
CProductIDType ProductID;   ///产品代码
CMatchIDType MatchID;   ///撮合核心编号
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
CRiskIDType RiskID;   ///风控编号
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
CGroupNameType GroupName;   ///分区名称
CGroupNumberType GroupNumber;   ///分区数量
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
CClientIDType ClientID;   ///客户编号
CParticipantIDType ParticipantID;   ///会员代码
CMoneyType PreFrozen;   ///预冻结金额
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
CRiskIDType RiskID;   ///风控编号
};
#pragma pack(pop)

BOOST_FUSION_ADAPT_STRUCT(
CRiskBeaconField,
(CRiskIDType,	RiskID)
);

#endif
