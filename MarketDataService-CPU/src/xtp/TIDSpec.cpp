#include <cassert>
#include <boost/foreach.hpp>

#include "TID1.h"
#include "FieldDefine.h"
#include "GlobalVar.h"
#include "TidDesc.h"
#include "orderDeal.h"
#include "orderBookOutput.h"
#include "genMarket.h"

template <> void TID1<CCommPhaseField>::process() {
  TRACE() << "process TID_NtfCommPhaseChange";
  assert(this->mFields1.size() == 1);

  GlobalVar::instance().mCommPhase = this->mFields1[0];
}

template <> void TID1<CExchangeTradingDayField>::process() {
  assert(mFields1.size() == 1);

  GlobalVar &var = GlobalVar::instance();
  var.mExchange = this->mFields1[0];

  if (mXtpHeader.Tid == TID_ExchangeDataSyncStart) {
    var.mExchangeSyncStatus = GlobalVar::EXCHANGE_DATA_SYNC_STATUS_SYNCHRONIZING;
  } else if (mXtpHeader.Tid == TID_ExchangeDataSyncEnd) {
    var.mExchangeSyncStatus = GlobalVar::EXCHANGE_DATA_SYNC_STATUS_SYNCHRONIZED;
  }

}

template <> void TID1<CSettlementSessionField>::process() {
  assert(mFields1.size() == 1);

  GlobalVar &var = GlobalVar::instance();
  uint32_t tid = mXtpHeader.Tid;

  /// assign the read data
  var.mSettlementSession = mFields1[0];

  /// change synchronous status
  switch(tid) {
    case TID_SettlementGroupDataSyncStart:
      var.mSGDataSatus = GlobalVar::SG_DATA_SYNC_STATUS_SYNCHRONIZING;
      break;
    case TID_SettlementGroupDataSyncEnd:
      var.mSGDataSatus = GlobalVar::SG_DATA_SYNC_STATUS_SYNCHRONIZED;
      var.mCallGenMarketTwice = true;
      break;
    default:
      break;
  }
}

template<> void TID1<CCurrentTimeField>::process() {
  assert(mFields1.size() == 1);

  GlobalVar &var = GlobalVar::instance();
  bool init = false;
  switch(mXtpHeader.Tid) {
    case TID_NtfTimeSync:
      GlobalVar::instance().mCurrentTime = mFields1[0];
      /// TODO: fill Shizhen's function here

      DEBUG() << "this is CCurrentTimeField process";
      uint32_t len;
      char buffer[4096];
      if (var.mCallGenMarketTwice) {
        genTopicMarket(buffer, &len, var.mOrderBooks, var.mMarketData, &var.mCurrentTime, true);
        var.mCallGenMarketTwice = false;
      } else {
        genTopicMarket(buffer, &len, var.mOrderBooks, var.mMarketData, &var.mCurrentTime, false);
      }
      break;
    default:
      break;
  }
}

template<> void TID1<CMarketDataField>::process() {
  std::map<std::string, CMarketDataField> &marketMap = GlobalVar::instance().mMarketData;
  GlobalVar &var = GlobalVar::instance();

  switch(mXtpHeader.Tid) {
    case TID_NtfMarketData:
      BOOST_FOREACH(const CMarketDataField &marketData, mFields1) {
        marketMap[marketData.InstrumentID] = marketData;

        DEBUG() << "marketdata.instrumentID: " << marketData.InstrumentID;
        DEBUG() << "var.mInstruments[marketData.InstrumentID]: " << var.mInstruments[marketData.InstrumentID].InstrumentID;
        MBLData mbl(marketData, var.mCurrentTime, var.mInstruments[marketData.InstrumentID]);
        var.mOrderBooks[marketData.InstrumentID] = mbl;
      }
      break;
    default:
      break;
  }
}

template<> void TID1<COrderField>::process() {
  GlobalVar &var = GlobalVar::instance();

  switch(mXtpHeader.Tid) {
    case TID_NtfOrder:
      /// TODO: fill Junfeng's function here
      orderDeal(*this, var.mMaxOrderSysID, var.mOrderBooks, var.mCurrentTime);

      for (std::map<std::string, MBLData>::const_iterator mblDataIter = var.mOrderBooks.begin();
          mblDataIter != var.mOrderBooks.end(); ++mblDataIter)
      {
        if (!mblDataIter->second.ready) {
          continue;
        }
        //if (mblDataIter->first != "IF1205") {
          //continue;
        //}
        DEBUG() << format("INSTRUMENT ID[%s]") % mblDataIter->first.c_str();
        orderBookOutput(var.mOrderBooks, mblDataIter->first);
        DEBUG() << "**************************************************************";
      }
      break;
    default:
      break;
  }
}

template<> void TID1<CTradeField>::process() {
  GlobalVar &var = GlobalVar::instance();

  switch(mXtpHeader.Tid) {
    case TID_NtfTrade:
      /// TODO: fill Junfeng's function here
      orderDeal(*this, var.mOrderBooks, var.mCurrentTime);

      for (std::map<std::string, MBLData>::const_iterator mblDataIter = var.mOrderBooks.begin();
          mblDataIter != var.mOrderBooks.end(); ++mblDataIter)
      {
        if (!mblDataIter->second.ready) {
          continue;
        }
        //if (mblDataIter->first != "IF1205") {
          //continue;
        //}
        DEBUG() << format("INSTRUMENT ID[%s]") % mblDataIter->first.c_str();
        orderBookOutput(var.mOrderBooks, mblDataIter->first);
        DEBUG() << "**************************************************************";
      }
      break;
    default:
      break;
  }
}

template<> void TID1<CInstrumentField>::process() {
  std::map<std::string, CInstrumentField> &instrumentMap = GlobalVar::instance().mInstruments;

  switch(mXtpHeader.Tid) {
    case TID_InitInstrument:
      BOOST_FOREACH(const CInstrumentField &instrument, mFields1) {
        instrumentMap[instrument.InstrumentID] = instrument;
      }
      break;
    default:
      break;
  }
}
