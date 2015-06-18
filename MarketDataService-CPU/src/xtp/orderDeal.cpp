#include "MBLData.h"
#include "orderDeal.h"
#include "logger.h"
#include <boost/foreach.hpp>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <cstring>

namespace order_status {
const char buy = '0';
const char sell = '1';
const char cancel = '5';
const char open = '0';

}

namespace order_action {

void readyToPublish(MBLData &mMBLData, const CCurrentTimeField &currentTime) {
  mMBLData.ready = 1;
  mMBLData.mUpdateTime = currentTime;
}

/// insert the current order
void insertNewOrderSysID(const COrderField &currOrder, MBLData &mMBLData) {

  if (currOrder.Direction == order_status::buy) {
    DEBUG() << "this is a buy order";
    std::map<CPriceType,CVolumeType>::iterator itPriceVolume = mMBLData.mBuyPriceVolumeMap.find(currOrder.LimitPrice);
    if (itPriceVolume != mMBLData.mBuyPriceVolumeMap.end()) {
      itPriceVolume->second += currOrder.VolumeTotal;
    } else {
      mMBLData.mBuyPriceVolumeMap[currOrder.LimitPrice] = currOrder.VolumeTotal;
    }
  } else if (currOrder.Direction == order_status::sell) {
    DEBUG() << "this is a sell order";
    std::map<CPriceType,CVolumeType>::iterator itPriceVolume = mMBLData.mSellPriceVolumeMap.find(currOrder.LimitPrice);
    if (itPriceVolume != mMBLData.mSellPriceVolumeMap.end()) {
      itPriceVolume->second += currOrder.VolumeTotal;
    } else {
      mMBLData.mSellPriceVolumeMap[currOrder.LimitPrice] = currOrder.VolumeTotal;
    }
  } else {
    ERROR() << "unknown order direction " << currOrder.Direction;
    std::exit(1);
  }

}

void cancelOrder(const COrderField &currOrder, MBLData &mMBLData) {

  if (currOrder.Direction == order_status::buy) {
    DEBUG() << "this is a buy order (cancel)";
    std::map<CPriceType,CVolumeType>::iterator itPriceVolume = mMBLData.mBuyPriceVolumeMap.find(currOrder.LimitPrice);
    if (itPriceVolume != mMBLData.mBuyPriceVolumeMap.end()) {
      itPriceVolume->second -= currOrder.VolumeTotal;
    } else {
      WARNING()<<"Illegal cancel order action\n";
    }
  } else if (currOrder.Direction == order_status::sell) {
    DEBUG() << "this is a sell order (cancel)";
    std::map<CPriceType,CVolumeType>::iterator itPriceVolume = mMBLData.mSellPriceVolumeMap.find(currOrder.LimitPrice);
    if (itPriceVolume != mMBLData.mSellPriceVolumeMap.end()) {
      itPriceVolume->second -= currOrder.VolumeTotal;
    } else {
      WARNING()<<"Illegal cancel order action\n";
    }
  } else {
    ERROR() << "unknown direction " << currOrder.Direction;
  }
}

} /// end of namespace

namespace {
  bool priceLessThen(const std::pair<CPriceType,CVolumeType> &a, const std::pair<CPriceType, CVolumeType> &b) {
    return a.first < b.first;
  }

  bool doubleEqual(double a, double b) {
    return std::abs((a - b)) < 10e-10;
  }

  /**
   * @brief delete the item in map if the volume in the map is zero
   *
   * @param mMBLData
   */
  void delZeroVolume(MBLData &mMBLData) {
    for(std::map<CPriceType,CVolumeType>::iterator it = mMBLData.mSellPriceVolumeMap.begin();
        it!=mMBLData.mSellPriceVolumeMap.end(); )
    {
      std::map<CPriceType,CVolumeType>::iterator itBak = it++;
      if (itBak->second == 0) {
        mMBLData.mSellPriceVolumeMap.erase(itBak);
      }
    }

    for(std::map<CPriceType,CVolumeType>::iterator it = mMBLData.mBuyPriceVolumeMap.begin();
        it!=mMBLData.mBuyPriceVolumeMap.end(); )
    {
      std::map<CPriceType,CVolumeType>::iterator itBak = it++;
      if (itBak->second == 0) {
        mMBLData.mBuyPriceVolumeMap.erase(itBak);
      }
    }
  }
}

/// deal with order stream
void orderDeal(TID1<COrderField> &NtfOrder, COrderSysIDType &maxOrderSysID,
    std::map<std::string, MBLData> &OrderBooks,const CCurrentTimeField &currentTime)
{
  BOOST_FOREACH(COrderField currOrder, NtfOrder.mFields1) {
    std::map<std::string, MBLData>::iterator itMBLData = OrderBooks.find(currOrder.InstrumentID);
    MBLData &mMBLData = itMBLData->second;

    if (itMBLData == OrderBooks.end()) { /// this is a new instrument
      WARNING()<<format("Undefined instrumentID:%s\n")%currOrder.InstrumentID;
      std::exit(1);
    }

    if (std::strcmp(currOrder.OrderSysID, maxOrderSysID) > 0) { /// this is a new sysid
      std::strcpy(maxOrderSysID, currOrder.OrderSysID);

      DEBUG() << "insert a new sysid";
      order_action::insertNewOrderSysID(currOrder, mMBLData);
      order_action::readyToPublish(mMBLData, currentTime);
    } else if (currOrder.OrderStatus == order_status::cancel) {
      /// the OrderSysID is already existed
      /// in this case, we only handle the action that cancel the order
      /// the update of the order will be handled in trade stream
      DEBUG() << "cancel existing sys id";
      order_action::cancelOrder(currOrder, mMBLData);
      order_action::readyToPublish(mMBLData, currentTime);
    } else {
      WARNING() << "ignoring this package";
    }

    delZeroVolume(mMBLData);
  } /// end of for each order
}

/// deal with trade tream
void orderDeal(TID1<CTradeField> &NtfTrade, std::map<std::string, MBLData> &OrderBooks, CCurrentTimeField &currentTime)
{
  BOOST_FOREACH(CTradeField currTrade, NtfTrade.mFields1) {
    std::map<std::string,MBLData>::iterator itMBLData = OrderBooks.find(currTrade.InstrumentID);
    MBLData &mMBLData = itMBLData->second;

    if (itMBLData == OrderBooks.end()) { /// the instrument is not existed
      WARNING()<<format("Undefined instrumentID:%s\n") % currTrade.InstrumentID;
      std::exit(1);
    }

    if (currTrade.Direction == order_status::sell) continue;

    bool isBuy = currTrade.Price > std::max_element(mMBLData.mBuyPriceVolumeMap.begin(),
          mMBLData.mBuyPriceVolumeMap.end(), priceLessThen)->first;

    if (isBuy) {
      DEBUG() << "(trade): the buyer is the dominator";
      assert(!mMBLData.mSellPriceVolumeMap.empty());

      /// find the minimal (optimal) price
      std::map<CPriceType, CVolumeType>::iterator target = std::min_element(mMBLData.mSellPriceVolumeMap.begin(),
          mMBLData.mSellPriceVolumeMap.end(), priceLessThen);

      /// minus the volume
      target->second -= currTrade.Volume;

      /// update status
      mMBLData.mLastPrice = currTrade.Price;
      mMBLData.mLastVolume += currTrade.Volume;
      mMBLData.mMaxPrice = std::max(mMBLData.mMaxPrice, currTrade.Price);
      mMBLData.mMinPrice = std::min(mMBLData.mMinPrice, currTrade.Price);
      mMBLData.mTurnOver += currTrade.Price * currTrade.Volume * mMBLData.mVolumeMultiple;

      if (currTrade.OffsetFlag == order_status::open) {
        mMBLData.mOpenInterest += currTrade.Volume;
      } else
      {
        mMBLData.mOpenInterest -= currTrade.Volume;
      }

    } else {
      DEBUG() << "(trade): the seller is the dominator";
      assert(!mMBLData.mBuyPriceVolumeMap.empty());

      /// find the minimal (optimal) price
      std::map<CPriceType, CVolumeType>::iterator target = std::max_element(mMBLData.mBuyPriceVolumeMap.begin(),
          mMBLData.mBuyPriceVolumeMap.end(), priceLessThen);

      /// minus the volume
      target->second -= currTrade.Volume;
      mMBLData.mLastPrice = currTrade.Price;
      mMBLData.mLastVolume += currTrade.Volume;
      mMBLData.mMaxPrice = std::max(mMBLData.mMaxPrice, currTrade.Price);
      mMBLData.mMinPrice = std::min(mMBLData.mMinPrice, currTrade.Price);
      mMBLData.mTurnOver += currTrade.Price * currTrade.Volume * mMBLData.mVolumeMultiple;

      if (currTrade.OffsetFlag == order_status::open) {
        mMBLData.mOpenInterest += currTrade.Volume;
      } else
      {
        mMBLData.mOpenInterest -= currTrade.Volume;
      }
    }

    delZeroVolume(mMBLData);
    order_action::readyToPublish(mMBLData, currentTime);

  } /// end of for each trade package
}
