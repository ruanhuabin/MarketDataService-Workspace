#include "orderBookOutput.h"
#include "MBLData.h"
int main()
{
  MBLData mBLData;
  mBLData.mLastPrice = 100;
  mBLData.mLastVolume = 50;
  mBLData.mMaxPrice = 105;
  mBLData.mMinPrice = 80;
  mBLData.mTurnOver = 192045;
  mBLData.mOpenInterest = 86;
  mBLData.mSellPriceVolumeMap[15]=10;
  mBLData.mSellPriceVolumeMap[14]=9;
  mBLData.mSellPriceVolumeMap[13]=8;
  mBLData.mSellPriceVolumeMap[12]=7;
  mBLData.mSellPriceVolumeMap[11]=6;

  mBLData.mBuyPriceVolumeMap[10]=5;
  mBLData.mBuyPriceVolumeMap[9]=4;
  mBLData.mBuyPriceVolumeMap[8]=3;
  mBLData.mBuyPriceVolumeMap[7]=2;
  mBLData.mBuyPriceVolumeMap[6]=1;

  std::map<std::string,MBLData> orderBooks;
  orderBooks["ljf"] = mBLData;
  std::string s="ljf";
  orderBookOutput(orderBooks,s);
  return 0;
}
