#include "genMarket.h"
#include "topicMarket.h"
#include "logger.h"
#include <string.h>
#include <iostream>
#include <numeric>

using namespace std;
#define MAX_DOUBLE (std::numeric_limits<double>::max())
#define MAX_INT (std::numeric_limits<int>::max())

#define ROUND 1800

map<string, vector<NtfTopicMarketData_1000*> > delay_map_1000;
map<string, vector<NtfTopicMarketData_1100*> > delay_map_1100;
map<string, bool> delay_map_start;

bool has_first_trigger = false;
bool same_time_package = false;
void genTopicMarket(char* buffer, uint32_t *length, 
		            map<string, MBLData> &order_book, 
					map<string, CMarketDataField> &mMarketData,
					CCurrentTimeField* current_time, 
					bool first_trigger){

  DEBUG() << "inside the function";
  	if (first_trigger) 
		has_first_trigger = true;
	if (!has_first_trigger)
		return;

	CMarketDataBaseField base_field;
	CMarketDataStaticField static_field;
	CMarketDataLastMatchField match_field;
	CMarketDataBestPriceField price_field;
	CMarketDataBid23Field bid23_field;
	CMarketDataAsk23Field ask23_field;
	CMarketDataBid45Field bid45_field;
	CMarketDataAsk45Field ask45_field;
	CMarketDataUpdateTimeField time_field;

	map<string, CMarketDataField>:: iterator iter = mMarketData.begin();
	//for topicID == 100 || 110
	bool test = false;
	for (; iter != mMarketData.end(); iter++){
		string instrument_id = iter->first;
		const CMarketDataField& market_data = iter->second;
		MBLData& mbl_data = order_book[instrument_id];

		if (mbl_data.ready){
			mbl_data.ready = false;
			delay_map_start[instrument_id] = true;
		}

		//CMarketDataBaseField
		//set_field_str(base_field, TradingDay, market_data);
		strncpy((char*)&(base_field.TradingDay), (char*)&(market_data.TradingDay), sizeof(market_data.TradingDay));
		//set_field_str(base_field, SettlementGroupID, market_data);
		strncpy((char*)&(base_field.SettlementGroupID), (char*)&(market_data.SettlementGroupID), sizeof(market_data.SettlementGroupID));
		//set_field_bin(base_field, SettlementID, market_data);
		memcpy(&(base_field.SettlementID), &(market_data.SettlementID), sizeof(market_data.SettlementID));
		//set_field_bin(base_field, PreSettlementPrice, market_data);
		memcpy(&(base_field.PreSettlementPrice), &(market_data.PreSettlementPrice), sizeof(market_data.PreSettlementPrice));
		//set_field_bin(base_field, PreClosePrice, market_data);
		memcpy(&(base_field.PreClosePrice), &(market_data.PreClosePrice), sizeof(market_data.PreClosePrice));
		//set_field_bin(base_field, PreOpenInterest, market_data);
		memcpy(&(base_field.PreOpenInterest), &(market_data.PreOpenInterest), sizeof(market_data.PreOpenInterest));
		//set_field_bin(base_field, PreDelta, market_data);
		memcpy(&(base_field.PreDelta), &(market_data.PreDelta), sizeof(market_data.PreDelta));

		//CMarketDataStaticField 
		//set_field_bin(static_field, OpenPrice, market_data);
		memcpy(&(static_field.OpenPrice), &(market_data.OpenPrice), sizeof(market_data.OpenPrice));
		//set_field_bin(static_field, HighestPrice, market_data);
		static_field.HighestPrice = mbl_data.mMaxPrice;
		//set_field_bin(static_field, LowestPrice, market_data);
		static_field.LowestPrice = mbl_data.mMinPrice;
		//set_field_bin(static_field, ClosePrice, market_data);
		memcpy(&(static_field.ClosePrice), &(market_data.ClosePrice), sizeof(market_data.ClosePrice));
		//set_field_bin(static_field, UpperLimitPrice, market_data);
		memcpy(&(static_field.UpperLimitPrice), &(market_data.UpperLimitPrice), sizeof(market_data.UpperLimitPrice));
		//set_field_bin(static_field, LowerLimitPrice, market_data);
		memcpy(&(static_field.LowerLimitPrice), &(market_data.LowerLimitPrice), sizeof(market_data.LowerLimitPrice));
		//set_field_bin(static_field, SettlementPrice, market_data);
		memcpy(&(static_field.SettlementPrice), &(market_data.SettlementPrice), sizeof(market_data.SettlementPrice));
		//set_field_bin(static_field, CurrDelta, market_data);
		memcpy(&(static_field.CurrDelta), &(market_data.CurrDelta), sizeof(market_data.CurrDelta));

		//CMarketDataLastMatchField 
		match_field.LastPrice = mbl_data.mLastPrice;
		match_field.Volume = mbl_data.mLastVolume;
		match_field.Turnover= mbl_data.mTurnOver;
		match_field.OpenInterest = mbl_data.mOpenInterest;

		map<CPriceType, CVolumeType>:: const_reverse_iterator riter_buy = mbl_data.mBuyPriceVolumeMap.rbegin();
		map<CPriceType, CVolumeType>:: const_reverse_iterator riter_sell = mbl_data.mSellPriceVolumeMap.rbegin();
		//CMarketDataBestPriceField 
		if (riter_buy != mbl_data.mBuyPriceVolumeMap.rend()){
			price_field.BidPrice1 = riter_buy->first;
			price_field.BidVolume1 = riter_buy->second;
			riter_buy++; 
		}else{
			price_field.BidPrice1 = MAX_DOUBLE;
			price_field.BidVolume1 = MAX_INT;
		}

		if (riter_sell != mbl_data.mSellPriceVolumeMap.rend()){
			price_field.AskPrice1 = riter_sell->first;
			price_field.AskVolume1 = riter_sell->second;
			riter_sell++;
		}else{
			price_field.AskPrice1 = MAX_DOUBLE;
			price_field.AskVolume1 = MAX_INT;
		}

		//CMarketDataBid23Field bid23_field;
		if (riter_buy != mbl_data.mBuyPriceVolumeMap.rend()){
			bid23_field.BidPrice2 = riter_buy->first;
			bid23_field.BidVolume2 = riter_buy->second;
			riter_buy++;
		}else{
			bid23_field.BidPrice2 = MAX_DOUBLE;
			bid23_field.BidVolume2 = MAX_INT;
		}

		if (riter_buy != mbl_data.mBuyPriceVolumeMap.rend()){
			bid23_field.BidPrice3 = riter_buy->first;
			bid23_field.BidVolume3 = riter_buy->second;
			riter_buy++;
		}else{
			bid23_field.BidPrice3 = MAX_DOUBLE;
			bid23_field.BidVolume3 = MAX_INT;
		}

		//CMarketDataAsk23Field ask23_field;
		if (riter_sell != mbl_data.mSellPriceVolumeMap.rend()){
			ask23_field.AskPrice2 = riter_sell->first;
			ask23_field.AskVolume2 = riter_sell->second;
			riter_sell++;
		}else{
			ask23_field.AskPrice2 = MAX_DOUBLE;
			ask23_field.AskVolume2 = MAX_INT;
		}

		if (riter_sell != mbl_data.mSellPriceVolumeMap.rend()){
			ask23_field.AskPrice3 = riter_sell->first;
			ask23_field.AskVolume3 = riter_sell->second;
			riter_sell++;
		}else{
			ask23_field.AskPrice3 = MAX_DOUBLE;
			ask23_field.AskVolume3 = MAX_INT;
		}

		//CMarketDataBid45Field bid45_field;
		if (riter_buy != mbl_data.mBuyPriceVolumeMap.rend()){
			bid45_field.BidPrice4 = riter_buy->first;
			bid45_field.BidVolume4 = riter_buy->second;
			riter_buy++;
		}else{
			bid45_field.BidPrice4 = MAX_DOUBLE;
			bid45_field.BidVolume4 = MAX_INT;
		}

		if (riter_buy != mbl_data.mBuyPriceVolumeMap.rend()){
			bid45_field.BidPrice5 = riter_buy->first;
			bid45_field.BidVolume5 = riter_buy->second;
			riter_buy++;
		}else{
			bid45_field.BidPrice5 = MAX_DOUBLE;
			bid45_field.BidVolume5 = MAX_INT;
		}

		//CMarketDataAsk45Field ask45_field;
		if (riter_sell != mbl_data.mSellPriceVolumeMap.rend()){
			ask45_field.AskPrice4 = riter_sell->first;
			ask45_field.AskVolume4 = riter_sell->second;
			riter_sell++;
		}else{
			ask45_field.AskPrice4 = MAX_DOUBLE;
			ask45_field.AskVolume4 = MAX_INT;
		}

		if (riter_sell != mbl_data.mSellPriceVolumeMap.rend()){
			ask45_field.AskPrice5 = riter_sell->first;
			ask45_field.AskVolume5 = riter_sell->second;
			riter_sell++;
		}else{
			ask45_field.AskPrice5 = MAX_DOUBLE;
			ask45_field.AskVolume5 = MAX_INT;
		}


		//CMarketDataUpdateTimeField time_field;

		strncpy((char*)&(time_field.InstrumentID), (char*)(instrument_id.c_str()), instrument_id.length()+1);
		strncpy((char*)&(time_field.UpdateTime), (char*)(current_time->CurrTime), sizeof(current_time->CurrTime));
		//strncpy((char*)&(time_field.UpdateMillisec), (char*)(current_time->CurrMillisec), sizeof(current_time->CurrMillisec));
		time_field.UpdateMillisec = current_time->CurrMillisec;

		NtfTopicMarketData_100 topic_100 (&base_field, &static_field, 
					                      &match_field,&price_field,
										  &time_field);
		topic_100.pack(buffer, length);
		NtfTopicMarketData_110 topic_110(&base_field, &static_field, 
					                     &match_field,&price_field,
										 &bid23_field,&ask23_field,
										 &bid45_field,&ask45_field,
										 &time_field);
		topic_110.pack(buffer, length);

		NtfTopicMarketData_1000 *topic_1000 = 
			new NtfTopicMarketData_1000(&base_field, &static_field, 
					                    &match_field,&price_field,
										&time_field);
		NtfTopicMarketData_1100 *topic_1100 = 
			new NtfTopicMarketData_1100(&base_field, &static_field, 
					                    &match_field,&price_field,
										&bid23_field,&ask23_field,
										&bid45_field,&ask45_field,
										&time_field);
		if (first_trigger){
			topic_1000->pack(buffer, length);
			topic_1100->pack(buffer, length);
			delete(topic_1000);
			delete(topic_1100);
			test = true;
			continue;
		}

		static int count = 0;
		if (delay_map_start.find(instrument_id) != delay_map_start.end()){
			if (!same_time_package){
				if (count < ROUND){
					(delay_map_1000[instrument_id]).push_back(topic_1000);
					(delay_map_1100[instrument_id]).push_back(topic_1100);
				}else{
					NtfTopicMarketData_1000 *topic_1000_old = (delay_map_1000[instrument_id])[count%ROUND];
					if (topic_1000_old)
						topic_1000_old->pack(buffer, length);

					NtfTopicMarketData_1100 *topic_1100_old = (delay_map_1100[instrument_id])[count%ROUND];
					if (topic_1100_old)
						topic_1100_old->pack(buffer, length);

					//delay_1000[instrument_id] = topic_1000;
					//delay_1100[instrument_id] = topic_1100;
					(delay_map_1000[instrument_id])[count%ROUND] = topic_1000;
					(delay_map_1100[instrument_id])[count%ROUND] = topic_1100;

					delete(topic_1000_old);
					delete(topic_1100_old);
				}
				count ++;
				same_time_package = true;
			}else{
				same_time_package = false;
				delete(topic_1000);
				delete(topic_1100);
			}
		}else{
			delete(topic_1000);
			delete(topic_1100);
		}

		if (time_field.InstrumentID[0] == 'I' && time_field.InstrumentID[1] == 'O'){
			NtfTopicMarketData_200 topic_200 (&base_field, &static_field, 
						                      &match_field,&price_field,
											  &time_field);
			topic_200.pack(buffer, length);
			NtfTopicMarketData_201 topic_201(&base_field, &static_field, 
						                     &match_field,&price_field,
											 &bid23_field,&ask23_field,
											 &bid45_field,&ask45_field,
											 &time_field);
			topic_201.pack(buffer, length);
		}
		//delete...
	}

	//for topicID == 1000 || 1100
}

