#include "MBLData.h"
#include <numeric>

MBLData::MBLData(const CMarketDataField &marketData,const CCurrentTimeField &currentTime, const CInstrumentField &instrumentMultiple)
{
  mVolumeMultiple = instrumentMultiple.VolumeMultiple;
	mLastPrice = marketData.LastPrice;
	mLastVolume = 0;
	mMaxPrice = std::numeric_limits<double>::min();
	mMinPrice = std::numeric_limits<double>::max();
	mTurnOver = marketData.Turnover;
	mOpenInterest = marketData.OpenInterest / 2;
	ready=0;
	mUpdateTime = currentTime;
}
