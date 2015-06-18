#ifndef _MBLDATA
#define _MBLDATA

#include <map>
#include "ItemTypedef.h"
#include "FieldDefine.h"

class MBLData
{
public:
  MBLData() {}
  MBLData(const CMarketDataField &marketData, const CCurrentTimeField &currentTime, const CInstrumentField &instrumentField);

public:
  std::map<CPriceType,CVolumeType> mBuyPriceVolumeMap;
  std::map<CPriceType,CVolumeType> mSellPriceVolumeMap;
  CVolumeMultipleType mVolumeMultiple;
	CPriceType mLastPrice;
	CVolumeType mLastVolume;
	CPriceType mMaxPrice;
	CPriceType mMinPrice;
	CPriceType mTurnOver;
	CVolumeType mOpenInterest;
	bool ready;
	CCurrentTimeField mUpdateTime;
};

#endif
