#ifndef GLOBALVAR_H_0K8A2SUG
#define GLOBALVAR_H_0K8A2SUG

#include <map>
#include <string>
#include <vector>
#include "FieldDefine.h"
#include "MBLData.h"

class GlobalVar
{
public:
  enum EXCHANGE_DATA_SYNC_STATUS {
    EXCHANGE_DATA_SYNC_STATUS_ASYNCHRONOUS  = '1',
    EXCHANGE_DATA_SYNC_STATUS_SYNCHRONIZING = '2',
    EXCHANGE_DATA_SYNC_STATUS_SYNCHRONIZED  = '3',
  };

  enum SG_DATA_SYNC_STATUS {
    SG_DATA_SYNC_STATUS_ASYNCHRONOUS  = '1',
    SG_DATA_SYNC_STATUS_SYNCHRONIZING = '2',
    SG_DATA_SYNC_STATUS_SYNCHRONIZED  = '3',
  };

public:
  static GlobalVar &instance() {
    static GlobalVar ins;
    return ins;
  }

public: /// data member
  CCommPhaseField                        mCommPhase;
  CExchangeTradingDayField               mExchange;
  EXCHANGE_DATA_SYNC_STATUS              mExchangeSyncStatus;
  CSettlementSessionField                mSettlementSession;
  SG_DATA_SYNC_STATUS                    mSGDataSatus;
  CCurrentTimeField                      mCurrentTime;
  COrderSysIDType                        mMaxOrderSysID;
  std::map<std::string,CMarketDataField> mMarketData;
  std::map<std::string,MBLData>          mOrderBooks;
  std::map<std::string,CInstrumentField> mInstruments;
  bool                                   mCallGenMarketTwice;

private:
  GlobalVar();
  GlobalVar(const GlobalVar &);
  void operator=(const GlobalVar &);

};

#endif /* end of include guard: GLOBALVAR_H_0K8A2SUG */
