#ifndef TYPES_H
#define TYPES_H
#include <boost/integer.hpp>

using boost::uint16_t;
using boost::uint32_t;

typedef	uint32_t	CErrorIDType;
typedef	uint32_t	CPriorityType;
typedef	uint32_t	CSettlementIDType;
typedef	uint32_t	CDurationType;
typedef	uint32_t	CMonthCountType;
typedef	uint32_t	CTradingSegmentSNType;
typedef	uint32_t	CPeriodIDType;
typedef	uint32_t	CVolumeType;
typedef	uint32_t	CSerialNoType;
typedef	uint32_t	CTimeSortIDType;
typedef	uint32_t	CInstrumentCountType;
typedef	uint32_t	CFrontIDType;
typedef	uint32_t	CSessionIDType;
typedef	uint32_t	CSequenceNoType;
typedef	uint32_t	CSecondsType;
typedef	uint32_t	CMarketDataDepthType;
typedef	uint32_t	CBulletinIDType;
typedef	uint32_t	CInformationIDType;
typedef	uint32_t	CCommandNoType;
typedef	uint32_t	CMillisecType;
typedef	uint32_t	CTopicIDType;
typedef	uint32_t	CVolumeMultipleType;
typedef	uint32_t	CImplyLevelType;
typedef	uint32_t	CStartPosType;
typedef	uint32_t	CSettlePriceSecondsType;
typedef	uint32_t	COrderCountType;
typedef	uint32_t	CPriceDecimalType;
typedef	uint32_t	CDataCenterIDType;
typedef	uint32_t	CDbmtTopicIDType;
typedef	uint32_t	CDbmtSequenceIDType;
typedef	uint32_t	CCommFluxType;
typedef	uint32_t	CContentLengthType;
typedef	uint32_t	CMatchIDType;
typedef	uint32_t	CRiskIDType;
typedef	uint32_t	CMatchStatusType;
typedef	uint32_t	CRiskStatusType;
typedef	uint32_t	CFrontStatusType;
typedef	uint32_t	CGroupNumberType;
typedef	char	CQuantityUnitType[7];
typedef	char	CAliasType[3];
typedef	char	COriginalTextType[3];
typedef	char	CParticipantIDType[11];
typedef	char	CParticipantNameType[51];
typedef	char	CParticipantAbbrType[9];
typedef	char	CUserIDType[16];
typedef	char	CPasswordType[41];
typedef	char	CClientIDType[11];
typedef	char	CInstrumentIDType[31];
typedef	char	CProductIDType[9];
typedef	char	CProductNameType[21];
typedef	char	CExchangeIDType[9];
typedef	char	CExchangeNameType[31];
typedef	char	CDateType[9];
typedef	char	CTradingDayType[9];
typedef	char	CTimeType[9];
typedef	char	CInstrumentNameType[21];
typedef	char	CProductGroupIDType[9];
typedef	char	CTemplateIDType[9];
typedef	char	CCurrencyType[4];
typedef	char	CProductGroupNameType[21];
typedef	char	CMarketIDType[9];
typedef	char	CMarketNameType[21];
typedef	char	CSettlementGroupIDType[9];
typedef	char	CSettlementGroupNameType[21];
typedef	char	CTemplateNameType[21];
typedef	char	CInstrumentIDExprType[41];
typedef	char	CInstrumentNameExprType[41];
typedef	char	CTradingSegmentNameType[21];
typedef	char	CMarginCalcIDType[5];
typedef	char	CPartPosiLimitCalcIDType[5];
typedef	char	CClientPosiLimitCalcIDType[5];
typedef	char	COrderSysIDType[13];
typedef	char	COTCOrderSysIDType[13];
typedef	char	CExecOrderSysIDType[13];
typedef	char	CQuoteSysIDType[13];
typedef	char	CTradeIDType[13];
typedef	char	COperatorIDType[21];
typedef	char	CAuthenUserIDType[21];
typedef	char	CSystemUserIDType[21];
typedef	char	COrderLocalIDType[13];
typedef	char	CComeFromType[21];
typedef	char	CAccountIDType[13];
typedef	char	CNewsTypeType[3];
typedef	char	CAdvanceMonthType[4];
typedef	char	CTopicNameType[61];
typedef	char	COperationTypeType[25];
typedef	char	COperationNameType[41];
typedef	char	CCommodityNameType[21];
typedef	char	CCommodityIDType[9];
typedef	char	CCommandTypeType[65];
typedef	char	CIPAddressType[16];
typedef	char	CProductInfoType[41];
typedef	char	CProtocolInfoType[41];
typedef	char	CBusinessUnitType[21];
typedef	char	CTradingSystemNameType[61];
typedef	char	CClientNameType[81];
typedef	char	CInstrumentGroupIDType[31];
typedef	char	CIdCardTypeType[16];
typedef	char	CIdentifiedCardNoType[51];
typedef	char	CIdentifiedCardNoV1Type[21];
typedef	char	CFunctionCodeType[25];
typedef	char	CRuleTypeType[51];
typedef	char	CGroupNameType[21];
typedef	char	CTableNameType[33];
typedef	int	CYearType;
typedef	int	CMonthType;
typedef	int	CDayType;
typedef	int	CLegMultipleType;
typedef	int	CLegIDType;
typedef	int	CBoolType;
typedef	int	CUserActiveType;
typedef	double	CPriceType;
typedef	double	CUnderlyingMultipleType;
typedef	char	CCombOffsetFlagType[5];
typedef	char	CCombHedgeFlagType[5];
typedef	char	CAdvanceMonthArrayType[13];
typedef	double	CRatioType;
typedef	double	CMoneyType;
typedef	double	CLargeVolumeType;
typedef	char	CNewsUrgencyType;
typedef	uint16_t	CSequenceSeriesType;
typedef	uint16_t	CCommPhaseNoType;
typedef	char	CErrorMsgType[81];
typedef	char	CAbstractType[81];
typedef	char	CDateExprType[1025];
typedef	char	CContentType[501];
typedef	char	CURLLinkType[201];
typedef	char	COperationMemoType[1025];
typedef	char	CMarginCalcDescType[1025];
typedef	char	CPartPosiLimitCalcDescType[1025];
typedef	char	CClientPosiLimitCalcDescType[1025];
typedef	char	CFieldNameType[2049];
typedef	char	CFieldContentType[2049];
typedef	char	CDescriptionType[401];
typedef	char	CStartModeType;
typedef	char	CDeliveryModeType;
typedef	char	CMarketDataModeType;
typedef	char	CTradingRoleType;
typedef	char	CPositionTradingRoleType;
typedef	char	CUserTypeType;
typedef	char	CSystemUserTypeType;
typedef	char	CProductClassType;
typedef	char	COptionsTypeType;
typedef	char	CInstLifePhaseType;
typedef	char	CInstrumentStatusType;
typedef	char	CDirectionType;
typedef	char	CPositionTypeType;
typedef	char	CPosiDirectionType;
typedef	char	CHedgeUsageTypeType;
typedef	char	CExchangeStatusType;
typedef	char	CExchangeDataSyncStatusType;
typedef	char	CSGDataSyncStatusType;
typedef	char	CSettlementGroupStatusType;
typedef	char	CSettlementGroupLifePhaseType;
typedef	char	CProductGroupLifePhaseType;
typedef	char	CExchangeLifePhaseType;
typedef	char	CPriceLimitTypeType;
typedef	char	CValueModeType;
typedef	char	CRoundingModeType;
typedef	char	CHedgeFlagType;
typedef	char	CClientTypeType;
typedef	char	CTemplateTypeType;
typedef	char	CInstStatusEnterReasonType;
typedef	char	CFuseStatusType;
typedef	char	CBasisPriceTypeType;
typedef	char	CApproachRuleType;
typedef	char	CTradingDateTypeType;
typedef	char	CAccountActionTypeType;
typedef	char	COrderPriceTypeType;
typedef	char	COffsetFlagType;
typedef	char	CForceCloseReasonType;
typedef	char	COrderStatusType;
typedef	char	COrderTypeType;
typedef	char	COTCOrderStatusType;
typedef	char	CTimeConditionType;
typedef	char	CVolumeConditionType;
typedef	char	CContingentConditionType;
typedef	char	CProductLifePhaseType;
typedef	char	CActionFlagType;
typedef	char	CActionSourceType;
typedef	char	CTradingRightType;
typedef	char	CSpecialCreateRuleType;
typedef	char	CTradingModelType;
typedef	char	COrderSourceType;
typedef	char	CTradeTypeType;
typedef	char	CPriceSourceType;
typedef	char	CAccountStatusType;
typedef	char	CMemberTypeType;
typedef	char	CParticipantTypeType;
typedef	char	CExecResultType;
typedef	char	CClientAuditProcessStatusType;
typedef	char	CMdPubStatusType;
typedef	char	CAdminOrderCommandFlagType;
typedef	char	CCombDirectionType;
typedef	char	CRuleTypeType[51];
typedef	char	CMarginCombTypeType;
typedef	double	CExchangeRateType;

#endif