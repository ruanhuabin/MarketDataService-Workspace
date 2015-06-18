#include "TID.h"
#include "TidDesc.h"
#include "FidDesc.h"
#include "FieldDefine.h"
#include "TID1.h"
#include "TID2.h"

TID::TID(const XTPHeader &xtpHeader) : mXtpHeader(xtpHeader) {
}

TID::~TID() {
}

TID *createTid(const XTPHeader &xtpHeader ) {
  switch (xtpHeader.Tid) {
    case TID_Nop:
      return new TID1<CRspInfoField>(xtpHeader,FID_RspInfo); break;
    case TID_RspError:
      return new TID1<CRspInfoField>(xtpHeader,FID_RspInfo); break;
    case TID_ReqUserLogin:
      return new TID1<CUserLoginField>(xtpHeader,FID_UserLogin); break;
    case TID_RspUserLogin:
      return new TID2<CUserLoginField,CRspInfoField>(xtpHeader,FID_UserLogin,FID_RspInfo); break;
    case TID_ReqUserLogout:
      return new TID1<CUserLogoutField>(xtpHeader,FID_UserLogout); break;
    case TID_RspUserLogout:
      return new TID2<CUserLogoutField,CRspInfoField>(xtpHeader,FID_UserLogout,FID_RspInfo); break;
    case TID_ReqOrderInsert:
      return new TID1<CInputOrderField>(xtpHeader,FID_InputOrder); break;
    case TID_RspOrderInsert:
      return new TID2<CInputOrderField,CRspInfoField>(xtpHeader,FID_InputOrder,FID_RspInfo); break;
    case TID_ReqOrderAction:
      return new TID1<COrderActionField>(xtpHeader,FID_OrderAction); break;
    case TID_RspOrderAction:
      return new TID2<COrderActionField,CRspInfoField>(xtpHeader,FID_OrderAction,FID_RspInfo); break;
    case TID_ReqQuoteInsert:
      return new TID1<CInputQuoteField>(xtpHeader,FID_InputQuote); break;
    case TID_RspQuoteInsert:
      return new TID2<CInputQuoteField,CRspInfoField>(xtpHeader,FID_InputQuote,FID_RspInfo); break;
    case TID_ReqQuoteAction:
      return new TID1<CQuoteActionField>(xtpHeader,FID_QuoteAction); break;
    case TID_RspQuoteAction:
      return new TID2<CQuoteActionField,CRspInfoField>(xtpHeader,FID_QuoteAction,FID_RspInfo); break;
    case TID_ReqOTCOrderInsert:
      return new TID1<COTCOrderField>(xtpHeader,FID_OTCOrder); break;
    case TID_RspOTCOrderInsert:
      return new TID2<COTCOrderField,CRspInfoField>(xtpHeader,FID_OTCOrder,FID_RspInfo); break;
    case TID_ReqUserPasswordUpdate:
      return new TID1<CUserPasswordUpdateField>(xtpHeader,FID_UserPasswordUpdate); break;
    case TID_RspUserPasswordUpdate:
      return new TID2<CUserPasswordUpdateField,CRspInfoField>(xtpHeader,FID_UserPasswordUpdate,FID_RspInfo); break;
    case TID_ReqExecOrderInsert:
      return new TID1<CInputExecOrderField>(xtpHeader,FID_InputExecOrder); break;
    case TID_RspExecOrderInsert:
      return new TID2<CInputExecOrderField,CRspInfoField>(xtpHeader,FID_InputExecOrder,FID_RspInfo); break;
    case TID_ReqExecOrderAction:
      return new TID1<CExecOrderActionField>(xtpHeader,FID_ExecOrderAction); break;
    case TID_RspExecOrderAction:
      return new TID2<CExecOrderActionField,CRspInfoField>(xtpHeader,FID_ExecOrderAction,FID_RspInfo); break;
    case TID_ReqAdminOrderInsert:
      return new TID1<CInputAdminOrderField>(xtpHeader,FID_InputAdminOrder); break;
    case TID_RspAdminOrderInsert:
      return new TID2<CInputAdminOrderField,CRspInfoField>(xtpHeader,FID_InputAdminOrder,FID_RspInfo); break;
    case TID_ReqCombOrderInsert:
      return new TID1<CInputCombOrderField>(xtpHeader,FID_InputCombOrder); break;
    case TID_RspCombOrderInsert:
      return new TID2<CInputCombOrderField,CRspInfoField>(xtpHeader,FID_InputCombOrder,FID_RspInfo); break;
    case TID_ReqBulletin:
      return new TID1<CBulletinField>(xtpHeader,FID_Bulletin); break;
    case TID_RspBulletin:
      return new TID2<CBulletinField,CRspInfoField>(xtpHeader,FID_Bulletin,FID_RspInfo); break;
    case TID_ReqInstrumentStatusUpdate:
      return new TID1<CInstrumentStatusField>(xtpHeader,FID_InstrumentStatus); break;
    case TID_RspInstrumentStatusUpdate:
      return new TID2<CInstrumentStatusField,CRspInfoField>(xtpHeader,FID_InstrumentStatus,FID_RspInfo); break;
    case TID_ReqForceUserExit:
      return new TID1<CForceUserExitField>(xtpHeader,FID_ForceUserExit); break;
    case TID_RspForceUserExit:
      return new TID2<CForceUserExitField,CRspInfoField>(xtpHeader,FID_ForceUserExit,FID_RspInfo); break;
    case TID_ReqForceUserLogout:
      return new TID1<CForceUserExitField>(xtpHeader,FID_ForceUserExit); break;
    case TID_RspForceUserLogout:
      return new TID2<CForceUserExitField,CRspInfoField>(xtpHeader,FID_ForceUserExit,FID_RspInfo); break;
    case TID_ReqExchangeDataSyncStatusUpdate:
      return new TID1<CExchangeDataSyncStatusField>(xtpHeader,FID_ExchangeDataSyncStatus); break;
    case TID_RspExchangeDataSyncStatusUpdate:
      return new TID2<CExchangeDataSyncStatusField,CRspInfoField>(xtpHeader,FID_ExchangeDataSyncStatus,FID_RspInfo); break;
    case TID_ReqSGDataSyncStatusUpdate:
      return new TID1<CSGDataSyncStatusField>(xtpHeader,FID_SGDataSyncStatus); break;
    case TID_RspSGDataSyncStatusUpdate:
      return new TID2<CSGDataSyncStatusField,CRspInfoField>(xtpHeader,FID_SGDataSyncStatus,FID_RspInfo); break;
    case TID_ReqExchangeDataSync:
      return new TID1<CExchangeTradingDayField>(xtpHeader,FID_ExchangeTradingDay); break;
    case TID_RspExchangeDataSync:
      return new TID2<CExchangeTradingDayField,CRspInfoField>(xtpHeader,FID_ExchangeTradingDay,FID_RspInfo); break;
    case TID_ReqSgDataSync:
      return new TID1<CSettlementSessionField>(xtpHeader,FID_SettlementSession); break;
    case TID_RspSgDataSync:
      return new TID2<CSettlementSessionField,CRspInfoField>(xtpHeader,FID_SettlementSession,FID_RspInfo); break;
    case TID_ReqInformation:
      return new TID1<CInformationField>(xtpHeader,FID_Information); break;
    case TID_RspInformation:
      return new TID2<CInformationField,CRspInfoField>(xtpHeader,FID_Information,FID_RspInfo); break;
    case TID_ReqFrontStatus:
      return new TID1<CFrontStatusField>(xtpHeader,FID_FrontStatus); break;
    case TID_RspFrontStatus:
      return new TID2<CFrontStatusField,CRspInfoField>(xtpHeader,FID_FrontStatus,FID_RspInfo); break;
    case TID_ReqRiskStatus:
      return new TID1<CRiskStatusField>(xtpHeader,FID_RiskStatus); break;
    case TID_RspRiskStatus:
      return new TID2<CRiskStatusField,CRspInfoField>(xtpHeader,FID_RiskStatus,FID_RspInfo); break;
    case TID_ReqRiskBeacon:
      return new TID1<CRiskBeaconField>(xtpHeader,FID_RiskBeacon); break;
    case TID_RspRiskBeacon:
      return new TID1<CRspInfoField>(xtpHeader,FID_RspInfo); break;
    case TID_InitMatchGroup:
      return new TID1<CMatchGroupField>(xtpHeader,FID_MatchGroup); break;
    case TID_InitRiskGroup:
      return new TID1<CRiskGroupField>(xtpHeader,FID_RiskGroup); break;
    case TID_InitGroupsInfo:
      return new TID1<CGroupsInfoField>(xtpHeader,FID_GroupsInfo); break;
    case TID_InitRiskPreFrozen:
      return new TID1<CRiskPreFrozenField>(xtpHeader,FID_RiskPreFrozen); break;
    case TID_ReqFlowRelayStart:
      return new TID1<CFlowRelayField>(xtpHeader,FID_FlowRelay); break;
    case TID_ReqFlowRelayEnd:
      return new TID1<CFlowRelayField>(xtpHeader,FID_FlowRelay); break;
    case TID_RspFlowRelayStart:
      return new TID1<CFlowRelayField>(xtpHeader,FID_FlowRelay); break;
    case TID_RspFlowRelayEnd:
      return new TID1<CFlowRelayField>(xtpHeader,FID_FlowRelay); break;
    case TID_ReqQryPartAccount:
      return new TID1<CQryPartAccountField>(xtpHeader,FID_QryPartAccount); break;
    case TID_RspQryPartAccount:
      return new TID2<CRspPartAccountField,CRspInfoField>(xtpHeader,FID_RspPartAccount,FID_RspInfo); break;
    case TID_ReqQryOrder:
      return new TID1<CQryOrderField>(xtpHeader,FID_QryOrder); break;
    case TID_RspQryOrder:
      return new TID2<COrderField,CRspInfoField>(xtpHeader,FID_Order,FID_RspInfo); break;
    case TID_ReqQryQuote:
      return new TID1<CQryQuoteField>(xtpHeader,FID_QryQuote); break;
    case TID_RspQryQuote:
      return new TID2<CQuoteField,CRspInfoField>(xtpHeader,FID_Quote,FID_RspInfo); break;
    case TID_ReqQryTrade:
      return new TID1<CQryTradeField>(xtpHeader,FID_QryTrade); break;
    case TID_RspQryTrade:
      return new TID2<CTradeField,CRspInfoField>(xtpHeader,FID_Trade,FID_RspInfo); break;
    case TID_ReqQryClient:
      return new TID1<CQryClientField>(xtpHeader,FID_QryClient); break;
    case TID_RspQryClient:
      return new TID2<CRspClientField,CRspInfoField>(xtpHeader,FID_RspClient,FID_RspInfo); break;
    case TID_ReqQryPartPosition:
      return new TID1<CQryPartPositionField>(xtpHeader,FID_QryPartPosition); break;
    case TID_RspQryPartPosition:
      return new TID2<CRspPartPositionField,CRspInfoField>(xtpHeader,FID_RspPartPosition,FID_RspInfo); break;
    case TID_ReqQryClientPosition:
      return new TID1<CQryClientPositionField>(xtpHeader,FID_QryClientPosition); break;
    case TID_RspQryClientPosition:
      return new TID2<CRspClientPositionField,CRspInfoField>(xtpHeader,FID_RspClientPosition,FID_RspInfo); break;
    case TID_ReqQryInstrument:
      return new TID1<CQryInstrumentField>(xtpHeader,FID_QryInstrument); break;
    case TID_RspQryInstrument:
      return new TID2<CRspInstrumentField,CRspInfoField>(xtpHeader,FID_RspInstrument,FID_RspInfo); break;
    case TID_ReqQryInstrumentStatus:
      return new TID1<CQryInstrumentStatusField>(xtpHeader,FID_QryInstrumentStatus); break;
    case TID_RspQryInstrumentStatus:
      return new TID2<CInstrumentStatusField,CRspInfoField>(xtpHeader,FID_InstrumentStatus,FID_RspInfo); break;
    case TID_ReqQrySGDataSyncStatus:
      return new TID1<CQrySGDataSyncStatusField>(xtpHeader,FID_QrySGDataSyncStatus); break;
    case TID_RspQrySGDataSyncStatus:
      return new TID2<CSGDataSyncStatusField,CRspInfoField>(xtpHeader,FID_SGDataSyncStatus,FID_RspInfo); break;
    case TID_ReqQryHedgeVolume:
      return new TID1<CQryHedgeVolumeField>(xtpHeader,FID_QryHedgeVolume); break;
    case TID_RspQryHedgeVolume:
      return new TID2<CHedgeVolumeField,CRspInfoField>(xtpHeader,FID_HedgeVolume,FID_RspInfo); break;
    case TID_ReqQryCombOrder:
      return new TID1<CQryCombOrderField>(xtpHeader,FID_QryCombOrder); break;
    case TID_RspQryCombOrder:
      return new TID2<CCombOrderField,CRspInfoField>(xtpHeader,FID_CombOrder,FID_RspInfo); break;
    case TID_ReqQryMarketData:
      return new TID1<CQryMarketDataField>(xtpHeader,FID_QryMarketData); break;
    case TID_RspQryMarketData:
      return new TID2<CMarketDataField,CRspInfoField>(xtpHeader,FID_MarketData,FID_RspInfo); break;
    case TID_ReqQryBulletin:
      return new TID1<CQryBulletinField>(xtpHeader,FID_QryBulletin); break;
    case TID_RspQryBulletin:
      return new TID2<CBulletinField,CRspInfoField>(xtpHeader,FID_Bulletin,FID_RspInfo); break;
    case TID_ReqQryUserSession:
      return new TID1<CQryUserSessionField>(xtpHeader,FID_QryUserSession); break;
    case TID_RspQryUserSession:
      return new TID2<CUserSessionField,CRspInfoField>(xtpHeader,FID_UserSession,FID_RspInfo); break;
    case TID_ReqQryUser:
      return new TID1<CQryUserField>(xtpHeader,FID_QryUser); break;
    case TID_RspQryUser:
      return new TID2<CUserField,CRspInfoField>(xtpHeader,FID_User,FID_RspInfo); break;
    case TID_ReqQryParticipant:
      return new TID1<CQryParticipantField>(xtpHeader,FID_QryParticipant); break;
    case TID_RspQryParticipant:
      return new TID2<CParticipantField,CRspInfoField>(xtpHeader,FID_Participant,FID_RspInfo); break;
    case TID_ReqQryMBLMarketData:
      return new TID1<CQryMBLMarketDataField>(xtpHeader,FID_QryMBLMarketData); break;
    case TID_RspQryMBLMarketData:
      return new TID2<CMBLMarketDataField,CRspInfoField>(xtpHeader,FID_MBLMarketData,FID_RspInfo); break;
    case TID_ReqQryInformation:
      return new TID1<CQryInformationField>(xtpHeader,FID_QryInformation); break;
    case TID_RspQryInformation:
      return new TID2<CInformationField,CRspInfoField>(xtpHeader,FID_Information,FID_RspInfo); break;
    case TID_ReqQryExchangeStatus:
      return new TID1<CQryExchangeStatusField>(xtpHeader,FID_QryExchangeStatus); break;
    case TID_RspQryExchangeStatus:
      return new TID2<CExchangeStatusField,CRspInfoField>(xtpHeader,FID_ExchangeStatus,FID_RspInfo); break;
    case TID_ReqQryExchangeDataSyncStatus:
      return new TID1<CQryExchangeDataSyncStatusField>(xtpHeader,FID_QryExchangeDataSyncStatus); break;
    case TID_RspQryExchangeDataSyncStatus:
      return new TID2<CExchangeDataSyncStatusField,CRspInfoField>(xtpHeader,FID_ExchangeDataSyncStatus,FID_RspInfo); break;
    case TID_ReqQrySettlementGroupStatus:
      return new TID1<CQrySettlementGroupStatusField>(xtpHeader,FID_QrySettlementGroupStatus); break;
    case TID_RspQrySettlementGroupStatus:
      return new TID2<CSettlementGroupStatusField,CRspInfoField>(xtpHeader,FID_SettlementGroupStatus,FID_RspInfo); break;
    case TID_ReqQryCreditLimit:
      return new TID1<CQryCreditLimitField>(xtpHeader,FID_QryCreditLimit); break;
    case TID_RspQryCreditLimit:
      return new TID2<CCreditLimitField,CRspInfoField>(xtpHeader,FID_CreditLimit,FID_RspInfo); break;
    case TID_DbAccountDeposit:
      return new TID1<CDbmtAccountDepositField>(xtpHeader,FID_DbmtAccountDeposit); break;
    case TID_DbUpdateAllInstrumentStatus:
      return new TID1<CDbmtUpdateAllInstrumentStatusField>(xtpHeader,FID_DbmtUpdateAllInstrumentStatus); break;
    case TID_DbInsClient:
      return new TID1<CDbmtClientField>(xtpHeader,FID_DbmtClient); break;
    case TID_DbUpdClient:
      return new TID1<CDbmtClientField>(xtpHeader,FID_DbmtClient); break;
    case TID_DbInsPartClient:
      return new TID1<CDbmtPartClientField>(xtpHeader,FID_DbmtPartClient); break;
    case TID_DbDelPartClient:
      return new TID1<CDbmtPartClientField>(xtpHeader,FID_DbmtPartClient); break;
    case TID_DbInsCurrPartPosiLimitDetail:
      return new TID1<CDbmtCurrPartPosiLimitDetailField>(xtpHeader,FID_DbmtCurrPartPosiLimitDetail); break;
    case TID_DbUpdCurrPartPosiLimitDetail:
      return new TID1<CDbmtCurrPartPosiLimitDetailField>(xtpHeader,FID_DbmtCurrPartPosiLimitDetail); break;
    case TID_DbDelCurrPartPosiLimitDetail:
      return new TID1<CDbmtCurrPartPosiLimitDetailField>(xtpHeader,FID_DbmtCurrPartPosiLimitDetail); break;
    case TID_DbInsCurrClientPosiLimitDetail:
      return new TID1<CDbmtCurrClientPosiLimitDetailField>(xtpHeader,FID_DbmtCurrClientPosiLimitDetail); break;
    case TID_DbUpdCurrClientPosiLimitDetail:
      return new TID1<CDbmtCurrClientPosiLimitDetailField>(xtpHeader,FID_DbmtCurrClientPosiLimitDetail); break;
    case TID_DbDelCurrClientPosiLimitDetail:
      return new TID1<CDbmtCurrClientPosiLimitDetailField>(xtpHeader,FID_DbmtCurrClientPosiLimitDetail); break;
    case TID_DbInsCurrSpecialPosiLimitDetail:
      return new TID1<CDbmtCurrSpecialPosiLimitDetailField>(xtpHeader,FID_DbmtCurrSpecialPosiLimitDetail); break;
    case TID_DbUpdCurrSpecialPosiLimitDetail:
      return new TID1<CDbmtCurrSpecialPosiLimitDetailField>(xtpHeader,FID_DbmtCurrSpecialPosiLimitDetail); break;
    case TID_DbDelCurrSpecialPosiLimitDetail:
      return new TID1<CDbmtCurrSpecialPosiLimitDetailField>(xtpHeader,FID_DbmtCurrSpecialPosiLimitDetail); break;
    case TID_DbInsHedgeDetail:
      return new TID1<CDbmtHedgeDetailField>(xtpHeader,FID_DbmtHedgeDetail); break;
    case TID_DbInsUser:
      return new TID1<CDbmtUserField>(xtpHeader,FID_DbmtUser); break;
    case TID_DbUpdUser:
      return new TID1<CDbmtUserField>(xtpHeader,FID_DbmtUser); break;
    case TID_DbInsPartProductRight:
      return new TID1<CDbmtPartProductRightField>(xtpHeader,FID_DbmtPartProductRight); break;
    case TID_DbUpdPartProductRight:
      return new TID1<CDbmtPartProductRightField>(xtpHeader,FID_DbmtPartProductRight); break;
    case TID_DbDelPartProductRight:
      return new TID1<CDbmtPartProductRightField>(xtpHeader,FID_DbmtPartProductRight); break;
    case TID_DbInsClientProductRight:
      return new TID1<CDbmtClientProductRightField>(xtpHeader,FID_DbmtClientProductRight); break;
    case TID_DbUpdClientProductRight:
      return new TID1<CDbmtClientProductRightField>(xtpHeader,FID_DbmtClientProductRight); break;
    case TID_DbDelClientProductRight:
      return new TID1<CDbmtClientProductRightField>(xtpHeader,FID_DbmtClientProductRight); break;
    case TID_DbInsPartInstrumentRight:
      return new TID1<CDbmtPartInstrumentRightField>(xtpHeader,FID_DbmtPartInstrumentRight); break;
    case TID_DbUpdPartInstrumentRight:
      return new TID1<CDbmtPartInstrumentRightField>(xtpHeader,FID_DbmtPartInstrumentRight); break;
    case TID_DbDelPartInstrumentRight:
      return new TID1<CDbmtPartInstrumentRightField>(xtpHeader,FID_DbmtPartInstrumentRight); break;
    case TID_DbInsClientInstrumentRight:
      return new TID1<CDbmtClientInstrumentRightField>(xtpHeader,FID_DbmtClientInstrumentRight); break;
    case TID_DbUpdClientInstrumentRight:
      return new TID1<CDbmtClientInstrumentRightField>(xtpHeader,FID_DbmtClientInstrumentRight); break;
    case TID_DbDelClientInstrumentRight:
      return new TID1<CDbmtClientInstrumentRightField>(xtpHeader,FID_DbmtClientInstrumentRight); break;
    case TID_DbInsCurrMarginRateDetail:
      return new TID1<CDbmtCurrMarginRateDetailField>(xtpHeader,FID_DbmtCurrMarginRateDetail); break;
    case TID_DbUpdCurrMarginRateDetail:
      return new TID1<CDbmtCurrMarginRateDetailField>(xtpHeader,FID_DbmtCurrMarginRateDetail); break;
    case TID_DbDelCurrMarginRateDetail:
      return new TID1<CDbmtCurrMarginRateDetailField>(xtpHeader,FID_DbmtCurrMarginRateDetail); break;
    case TID_DbUpdMarketData:
      return new TID1<CDbmtMarketDataField>(xtpHeader,FID_DbmtMarketData); break;
    case TID_DbInsUserIP:
      return new TID1<CDbmtUserIPField>(xtpHeader,FID_DbmtUserIP); break;
    case TID_DbDelUserIP:
      return new TID1<CDbmtUserIPField>(xtpHeader,FID_DbmtUserIP); break;
    case TID_DbInsCurrPriceBanding:
      return new TID1<CDbmtCurrPriceBandingField>(xtpHeader,FID_DbmtCurrPriceBanding); break;
    case TID_DbUpdCurrPriceBanding:
      return new TID1<CDbmtCurrPriceBandingField>(xtpHeader,FID_DbmtCurrPriceBanding); break;
    case TID_DbDelCurrPriceBanding:
      return new TID1<CDbmtCurrPriceBandingField>(xtpHeader,FID_DbmtCurrPriceBanding); break;
    case TID_DbInsPartTopicSubscribe:
      return new TID1<CDbmtPartTopicSubscribeField>(xtpHeader,FID_DbmtPartTopicSubscribe); break;
    case TID_DbDelPartTopicSubscribe:
      return new TID1<CDbmtPartTopicSubscribeField>(xtpHeader,FID_DbmtPartTopicSubscribe); break;
    case TID_DbInsPartClientProductRight:
      return new TID1<CDbmtPartClientProductRightField>(xtpHeader,FID_DbmtPartClientProductRight); break;
    case TID_DbUpdPartClientProductRight:
      return new TID1<CDbmtPartClientProductRightField>(xtpHeader,FID_DbmtPartClientProductRight); break;
    case TID_DbDelPartClientProductRight:
      return new TID1<CDbmtPartClientProductRightField>(xtpHeader,FID_DbmtPartClientProductRight); break;
    case TID_DbInsPartClientInstrumentRight:
      return new TID1<CDbmtPartClientInstrumentRightField>(xtpHeader,FID_DbmtPartClientInstrumentRight); break;
    case TID_DbUpdPartClientInstrumentRight:
      return new TID1<CDbmtPartClientInstrumentRightField>(xtpHeader,FID_DbmtPartClientInstrumentRight); break;
    case TID_DbDelPartClientInstrumentRight:
      return new TID1<CDbmtPartClientInstrumentRightField>(xtpHeader,FID_DbmtPartClientInstrumentRight); break;
    case TID_NtfTimeSync:
      return new TID1<CCurrentTimeField>(xtpHeader,FID_CurrentTime); break;
    case TID_NtfCommPhaseChange:
      return new TID1<CCommPhaseField>(xtpHeader,FID_CommPhase); break;
    case TID_NtfDataCenterDesc:
      return new TID1<CDataCenterDescField>(xtpHeader,FID_DataCenterDesc); break;
    case TID_NtfSwitch:
      return new TID1<CSwitchDescField>(xtpHeader,FID_SwitchDesc); break;
    case TID_NtfInsInstrument:
      return new TID1<CInstrumentField>(xtpHeader,FID_Instrument); break;
    case TID_NtfDelInstrument:
      return new TID1<CInstrumentField>(xtpHeader,FID_Instrument); break;
    case TID_NtfInsCombinationLeg:
      return new TID1<CCombinationLegField>(xtpHeader,FID_CombinationLeg); break;
    case TID_NtfDelCombinationLeg:
      return new TID1<CCombinationLegField>(xtpHeader,FID_CombinationLeg); break;
    case TID_NtfAliasDefine:
      return new TID1<CAliasDefineField>(xtpHeader,FID_AliasDefine); break;
    case TID_NtfOrder:
      return new TID1<COrderField>(xtpHeader,FID_Order); break;
    case TID_NtfTrade:
      return new TID1<CTradeField>(xtpHeader,FID_Trade); break;
    case TID_NtfQuote:
      return new TID1<CQuoteField>(xtpHeader,FID_Quote); break;
    case TID_NtfExecOrder:
      return new TID1<CExecOrderField>(xtpHeader,FID_ExecOrder); break;
    case TID_NtfCombOrder:
      return new TID1<CCombOrderField>(xtpHeader,FID_CombOrder); break;
    case TID_NtfInstrumentStatusUpdate:
      return new TID1<CInstrumentStatusField>(xtpHeader,FID_InstrumentStatus); break;
    case TID_NtfDelUserSession:
      return new TID1<CUserSessionField>(xtpHeader,FID_UserSession); break;
    case TID_NtfBulletin:
      return new TID1<CBulletinField>(xtpHeader,FID_Bulletin); break;
    case TID_NtfMarketData:
      return new TID1<CMarketDataField>(xtpHeader,FID_MarketData); break;
    case TID_NtfDepthMarketData:
      //return new TID10<CMarketDataBaseField,CMarketDataStaticField,CMarketDataLastMatchField,CMarketDataBestPriceField,CMarketDataBid23Field,CMarketDataAsk23Field,CMarketDataBid45Field,CMarketDataAsk45Field,CMarketDataUpdateTimeField,CMarketDataRealPriceBandingField>(xtpHeader,FID_MarketDataBase,FID_MarketDataStatic,FID_MarketDataLastMatch,FID_MarketDataBestPrice,FID_MarketDataBid23,FID_MarketDataAsk23,FID_MarketDataBid45,FID_MarketDataAsk45,FID_MarketDataUpdateTime,FID_MarketDataRealPriceBanding); break;
      break;
    case TID_NtfTopicMarketData:
      //return new TID10<CMarketDataTopicField,CMarketDataBaseField,CMarketDataStaticField,CMarketDataLastMatchField,CMarketDataBestPriceField,CMarketDataBid23Field,CMarketDataAsk23Field,CMarketDataBid45Field,CMarketDataAsk45Field,CMarketDataUpdateTimeField>(xtpHeader,FID_MarketDataTopic,FID_MarketDataBase,FID_MarketDataStatic,FID_MarketDataLastMatch,FID_MarketDataBestPrice,FID_MarketDataBid23,FID_MarketDataAsk23,FID_MarketDataBid45,FID_MarketDataAsk45,FID_MarketDataUpdateTime); break;
      break;
    case TID_NtfAdminOrder:
      return new TID1<CAdminOrderField>(xtpHeader,FID_AdminOrder); break;
    case TID_ExchangeDataSyncStart:
      return new TID1<CExchangeTradingDayField>(xtpHeader,FID_ExchangeTradingDay); break;
    case TID_ExchangeDataSyncEnd:
      return new TID1<CExchangeTradingDayField>(xtpHeader,FID_ExchangeTradingDay); break;
    case TID_InitExchange:
      return new TID1<CExchangeField>(xtpHeader,FID_Exchange); break;
    case TID_InitSettlementGroup:
      return new TID1<CSettlementGroupField>(xtpHeader,FID_SettlementGroup); break;
    case TID_InitMarket:
      return new TID1<CMarketField>(xtpHeader,FID_Market); break;
    case TID_InitMarketProduct:
      return new TID1<CMarketProductField>(xtpHeader,FID_MarketProduct); break;
    case TID_InitMarketProductGroup:
      return new TID1<CMarketProductGroupField>(xtpHeader,FID_MarketProductGroup); break;
    case TID_InitMarketDataTopic:
      return new TID1<CMarketDataTopicField>(xtpHeader,FID_MarketDataTopic); break;
    case TID_InitPartTopicSubscribe:
      return new TID1<CPartTopicSubscribeField>(xtpHeader,FID_PartTopicSubscribe); break;
    case TID_InitParticipant:
      return new TID1<CParticipantField>(xtpHeader,FID_Participant); break;
    case TID_InitUser:
      return new TID1<CUserField>(xtpHeader,FID_User); break;
    case TID_InitClient:
      return new TID1<CClientField>(xtpHeader,FID_Client); break;
    case TID_InitPartClient:
      return new TID1<CPartClientField>(xtpHeader,FID_PartClient); break;
    case TID_InitUserIP:
      return new TID1<CUserIPField>(xtpHeader,FID_UserIP); break;
    case TID_InitMdPubStatus:
      return new TID1<CMdPubStatusField>(xtpHeader,FID_MdPubStatus); break;
    case TID_InitAliasDefine:
      return new TID1<CAliasDefineField>(xtpHeader,FID_AliasDefine); break;
    case TID_InitClearingTradingPart:
      return new TID1<CClearingTradingPartField>(xtpHeader,FID_ClearingTradingPart); break;
    case TID_InitUserFunctionRight:
      return new TID1<CUserFunctionRightField>(xtpHeader,FID_UserFunctionRight); break;
    case TID_InitAccount:
      return new TID1<CAccountField>(xtpHeader,FID_Account); break;
    case TID_InitUserCommFlux:
      return new TID1<CUserCommFluxField>(xtpHeader,FID_UserCommFlux); break;
    case TID_SettlementGroupDataSyncStart:
      return new TID1<CSettlementSessionField>(xtpHeader,FID_SettlementSession); break;
    case TID_SettlementGroupDataSyncEnd:
      return new TID1<CSettlementSessionField>(xtpHeader,FID_SettlementSession); break;
    case TID_InitInstrument:
      return new TID1<CInstrumentField>(xtpHeader,FID_Instrument); break;
    case TID_InitCombinationLeg:
      return new TID1<CCombinationLegField>(xtpHeader,FID_CombinationLeg); break;
    case TID_InitPartRoleAccount:
      return new TID1<CPartRoleAccountField>(xtpHeader,FID_PartRoleAccount); break;
    case TID_InitPartProductRole:
      return new TID1<CPartProductRoleField>(xtpHeader,FID_PartProductRole); break;
    case TID_InitPartProductRight:
      return new TID1<CPartProductRightField>(xtpHeader,FID_PartProductRight); break;
    case TID_InitPartInstrumentRight:
      return new TID1<CPartInstrumentRightField>(xtpHeader,FID_PartInstrumentRight); break;
    case TID_InitClientProductRight:
      return new TID1<CClientProductRightField>(xtpHeader,FID_ClientProductRight); break;
    case TID_InitClientInstrumentRight:
      return new TID1<CClientInstrumentRightField>(xtpHeader,FID_ClientInstrumentRight); break;
    case TID_InitCurrProductProperty:
      return new TID1<CCurrProductPropertyField>(xtpHeader,FID_CurrProductProperty); break;
    case TID_InitCurrInstrumentProperty:
      return new TID1<CCurrInstrumentPropertyField>(xtpHeader,FID_CurrInstrumentProperty); break;
    case TID_InitCurrPriceBanding:
      return new TID1<CCurrPriceBandingField>(xtpHeader,FID_CurrPriceBanding); break;
    case TID_InitCurrMarginRate:
      return new TID1<CCurrMarginRateField>(xtpHeader,FID_CurrMarginRate); break;
    case TID_InitCurrMarginRateDetail:
      return new TID1<CCurrMarginRateDetailField>(xtpHeader,FID_CurrMarginRateDetail); break;
    case TID_InitCurrPartPosiLimit:
      return new TID1<CCurrPartPosiLimitField>(xtpHeader,FID_CurrPartPosiLimit); break;
    case TID_InitCurrPartPosiLimitDetail:
      return new TID1<CCurrPartPosiLimitDetailField>(xtpHeader,FID_CurrPartPosiLimitDetail); break;
    case TID_InitCurrClientPosiLimit:
      return new TID1<CCurrClientPosiLimitField>(xtpHeader,FID_CurrClientPosiLimit); break;
    case TID_InitCurrClientPosiLimitDetail:
      return new TID1<CCurrClientPosiLimitDetailField>(xtpHeader,FID_CurrClientPosiLimitDetail); break;
    case TID_InitCurrSpecialPosiLimit:
      return new TID1<CCurrSpecialPosiLimitField>(xtpHeader,FID_CurrSpecialPosiLimit); break;
    case TID_InitCurrSpecialPosiLimitDetail:
      return new TID1<CCurrSpecialPosiLimitDetailField>(xtpHeader,FID_CurrSpecialPosiLimitDetail); break;
    case TID_InitCurrHedgeRule:
      return new TID1<CCurrHedgeRuleField>(xtpHeader,FID_CurrHedgeRule); break;
    case TID_InitCurrTradingSegmentAttr:
      return new TID1<CCurrTradingSegmentAttrField>(xtpHeader,FID_CurrTradingSegmentAttr); break;
    case TID_InitCurrFuse:
      return new TID1<CCurrFuseField>(xtpHeader,FID_CurrFuse); break;
    case TID_InitTradingAccount:
      return new TID1<CTradingAccountField>(xtpHeader,FID_TradingAccount); break;
    case TID_InitPartPosition:
      return new TID1<CPartPositionField>(xtpHeader,FID_PartPosition); break;
    case TID_InitClientPosition:
      return new TID1<CClientPositionField>(xtpHeader,FID_ClientPosition); break;
    case TID_InitHedgeVolume:
      return new TID1<CHedgeVolumeField>(xtpHeader,FID_HedgeVolume); break;
    case TID_InitRemainOrder:
      return new TID1<CRemainOrderField>(xtpHeader,FID_RemainOrder); break;
    case TID_InitMarketData:
      return new TID1<CMarketDataField>(xtpHeader,FID_MarketData); break;
    case TID_InitBaseReserveAccount:
      return new TID1<CBaseReserveAccountField>(xtpHeader,FID_BaseReserveAccount); break;
    case TID_InitPartClientProductRight:
      return new TID1<CPartClientProductRightField>(xtpHeader,FID_PartClientProductRight); break;
    case TID_InitPartClientInstrumentRight:
      return new TID1<CPartClientInstrumentRightField>(xtpHeader,FID_PartClientInstrumentRight); break;
    case TID_ReqForQuote:
      return new TID1<CInputReqForQuoteField>(xtpHeader,FID_InputReqForQuote); break;
    case TID_RspForQuote:
      return new TID2<CInputReqForQuoteField,CRspInfoField>(xtpHeader,FID_InputReqForQuote,FID_RspInfo); break;
    case TID_InitMarketMakerQuoteRight:
      return new TID1<CMarketMakerQuoteRightField>(xtpHeader,FID_MarketMakerQuoteRight); break;
    case TID_DbInsMarketMakerQuoteRight:
      return new TID1<CDbmtMarketMakerQuoteRightField>(xtpHeader,FID_DbmtMarketMakerQuoteRight); break;
    case TID_DbUpdMarketMakerQuoteRight:
      return new TID1<CDbmtMarketMakerQuoteRightField>(xtpHeader,FID_DbmtMarketMakerQuoteRight); break;
    case TID_DbDelMarketMakerQuoteRight:
      return new TID1<CDbmtMarketMakerQuoteRightField>(xtpHeader,FID_DbmtMarketMakerQuoteRight); break;
    case TID_InitPartClientMarginCombType:
      return new TID1<CPartClientMarginCombTypeField>(xtpHeader,FID_PartClientMarginCombType); break;
    case TID_InitInstrumentGroup:
      return new TID1<CInstrumentGroupField>(xtpHeader,FID_InstrumentGroup); break;
    case TID_InitRealPriceBanding:
      return new TID1<CRealPriceBandingField>(xtpHeader,FID_RealPriceBanding); break;
    case TID_InitBusinessConfig:
      return new TID1<CBusinessConfigField>(xtpHeader,FID_BusinessConfig); break;
    case TID_InitExchange_Rate:
      return new TID1<CExchange_RateField>(xtpHeader,FID_Exchange_Rate); break;
    case TID_InitMarginCombinationLeg:
      return new TID1<CMarginCombinationLegField>(xtpHeader,FID_MarginCombinationLeg); break;
    case TID_InitPartClientCombPosition:
      return new TID1<CPartClientCombPositionField>(xtpHeader,FID_PartClientCombPosition); break;
    case TID_InitPartClientLegPosition:
      return new TID1<CPartClientLegPositionField>(xtpHeader,FID_PartClientLegPosition); break;
    case TID_ReqPartClientComPsi:
      return new TID1<CPartClientCombPositionField>(xtpHeader,FID_PartClientCombPosition); break;
    case TID_ReqMarginCombAction:
      return new TID1<CMarginCombActionField>(xtpHeader,FID_MarginCombAction); break;
    case TID_RspMarginCombAction:
      return new TID2<CMarginCombActionField,CRspInfoField>(xtpHeader,FID_MarginCombAction,FID_RspInfo); break;
    case TID_ReqQryPartClientCombPosition:
      return new TID1<CQryPartClientCombPositionField>(xtpHeader,FID_QryPartClientCombPosition); break;
    case TID_RspQryPartClientCombPosition:
      return new TID2<CPartClientCombPositionField,CRspInfoField>(xtpHeader,FID_PartClientCombPosition,FID_RspInfo); break;
    case TID_NtfMarginCombinationLeg:
      return new TID1<CMarginCombinationLegField>(xtpHeader,FID_MarginCombinationLeg); break;
    case TID_ReqQryPartClientLegPosition:
      return new TID1<CQryPartClientLegPositionField>(xtpHeader,FID_QryPartClientLegPosition); break;
    case TID_RspQryPartClientLegPosition:
      return new TID2<CPartClientLegPositionField,CRspInfoField>(xtpHeader,FID_PartClientLegPosition,FID_RspInfo); break;
    case TID_ReqDumpMemTable:
      return new TID1<CDumpMemTableField>(xtpHeader,FID_DumpMemTable); break;
    case TID_RspDumpMemTable:
      return new TID2<CDumpMemTableField,CRspInfoField>(xtpHeader,FID_DumpMemTable,FID_RspInfo); break;
    case TID_InitInstMatchMap:
      return new TID1<CRspInfoField>(xtpHeader,FID_RspInfo); break;
    case TID_InitPartRiskMap:
      return new TID1<CRspInfoField>(xtpHeader,FID_RspInfo); break;
    default:
      break;
  }
  return NULL;
}
