#include <map>
#include <algorithm>
#include <vector>
#include "logger.h"
#include "orderBookOutput.h"

typedef std::pair<CPriceType, CVolumeType> PriceVolumeType;

bool volumeLess(const PriceVolumeType &a, const PriceVolumeType &b) {
  return a.second < b.second;
}


bool volumeMore(const PriceVolumeType &a, const PriceVolumeType &b) {
  return a.second > b.second;
}

void orderBookOutput(std::map<std::string,MBLData> &orderBooks,std::string insID)
{
  std::map<std::string,MBLData>::iterator itOrderBook = orderBooks.find(insID);
  if(itOrderBook!=orderBooks.end())
  {
    MBLData &orderBook = itOrderBook->second;
    INFO()<<"LastPrice : "<<orderBook.mLastPrice;
    INFO()<<"LastVolume : "<<orderBook.mLastVolume;
    INFO()<<"MaxPrice : "<<orderBook.mMaxPrice;
    INFO()<<"MinPrice : "<<orderBook.mMinPrice;
    //INFO()<<"mTurnOvER : "<<orderBook.mTurnOver;
    INFO()<< format("mTurnOver: %20f") % orderBook.mTurnOver;
    INFO()<<"OpenInterest : "<<orderBook.mOpenInterest;
    INFO()<<"OrderBook";

    std::vector<PriceVolumeType> vSell(orderBook.mSellPriceVolumeMap.begin(), orderBook.mSellPriceVolumeMap.end());
    std::sort(vSell.begin(), vSell.end(), volumeMore);

    std::vector<PriceVolumeType> vBuy(orderBook.mBuyPriceVolumeMap.begin(), orderBook.mBuyPriceVolumeMap.end());
    std::sort(vBuy.begin(), vBuy.end(), volumeMore);

    INFO()<<"-----------------------------Sell------------------------------";
    INFO()<<"Price\t\t \tVolume";
    for(std::vector<PriceVolumeType>::iterator  pv=vSell.begin(); pv!=vSell.end(); pv++)
    {
      INFO()<<pv->first<<"\t\t|\t"<<pv->second;
    }
    INFO()<<"-----------------------------Buy-------------------------------";
    INFO()<<"Price\t\t \tVolume";
    for(std::vector<PriceVolumeType>::iterator pv=vBuy.begin(); pv!=vBuy.end(); pv++)
    {
      INFO()<<pv->first<<"\t\t|\t"<<pv->second;
    }
    INFO()<<"-----------------------------END-------------------------------";
  } else
  {
    INFO()<<"No such instrumentID";
  }
}
