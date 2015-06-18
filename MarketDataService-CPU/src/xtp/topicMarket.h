#ifndef TOPICMARKET_H
#define TOPICMARKET_H

#include "ItemTypedef.h"
#include "FieldDefine.h"
#include <string.h>
#include <map>
#include <string>

/*
class NtfMarketDataBase{
	public:
		CMarketDataBaseField               market_data_base;
		CMarketDataStaticField             market_data_static;
		CMarketDataLastMatchField          market_data_last_match;
		CMarketDataBestPriceField          market_data_best_price;
		CMarketDataBid23Field              market_data_bid_23;
		CMarketDataAsk23Field              market_data_ask_23;
		CMarketDataBid45Field              market_data_bid_45;
		CMarketDataAsk45Field              market_data_ask_45;
		CMarketDataUpdateTimeField         market_data_update_time;

		bool setMarket_data(CMarketDataBaseField*);
		bool setMarket_data(CMarketDataStaticField*);
		bool setMarket_data(CMarketDataLastMatchField*);
		bool setMarket_data(CMarketDataBestPriceField*);
		bool setMarket_data(CMarketDataBid23Field*);
		bool setMarket_data(CMarketDataAsk23Field*);
		bool setMarket_data(CMarketDataBid45Field*);
		bool setMarket_data(CMarketDataAsk45Field*);
		bool setMarket_data(CMarketDataUpdateTimeField*);

		//because we have to send them in every package
		bool isEqual(CMarketDataBaseField*, CMarketDataBaseField*);
		bool isEqual(CMarketDataStaticField*, CMarketDataStaticField*);
		bool isEqual(CMarketDataLastMatchField*, CMarketDataLastMatchField*);
		bool isEqual(CMarketDataBestPriceField*, CMarketDataBestPriceField*);
		bool isEqual(CMarketDataBid23Field*, CMarketDataBid23Field*);
		bool isEqual(CMarketDataAsk23Field*, CMarketDataAsk23Field*);
		bool isEqual(CMarketDataBid45Field*, CMarketDataBid45Field*);
		bool isEqual(CMarketDataAsk45Field*, CMarketDataAsk45Field*);
		bool isEqual(CMarketDataUpdateTimeField*, CMarketDataUpdateTimeField*);
};

class NtfDepthMarketData : NtfMarketDataBase{
	public:
		CMarketDataRealPriceBandingField   market_data_real_price_banding;
		bool setMarket_data(CMarketDataRealPriceBandingField*);
};
*/

class NtfTopicMarketData{
	public:
		CMarketDataBaseField               market_data_base;
		CMarketDataStaticField             market_data_static;
		CMarketDataLastMatchField          market_data_last_match;
		CMarketDataBestPriceField          market_data_best_price;
		CMarketDataBid23Field              market_data_bid_23;
		CMarketDataAsk23Field              market_data_ask_23;
		CMarketDataBid45Field              market_data_bid_45;
		CMarketDataAsk45Field              market_data_ask_45;
		CMarketDataUpdateTimeField         market_data_update_time;
		CMarketDataTopicField              market_data_topic;

		bool isEqual(CMarketDataBaseField*, CMarketDataBaseField*);
		bool isEqual(CMarketDataStaticField*, CMarketDataStaticField*);
		bool isEqual(CMarketDataLastMatchField*, CMarketDataLastMatchField*);
		bool isEqual(CMarketDataBestPriceField*, CMarketDataBestPriceField*);
		bool isEqual(CMarketDataBid23Field*, CMarketDataBid23Field*);
		bool isEqual(CMarketDataAsk23Field*, CMarketDataAsk23Field*);
		bool isEqual(CMarketDataBid45Field*, CMarketDataBid45Field*);
		bool isEqual(CMarketDataAsk45Field*, CMarketDataAsk45Field*);
		bool isEqual(CMarketDataUpdateTimeField*, CMarketDataUpdateTimeField*);
		bool isEqual(CMarketDataTopicField*, CMarketDataTopicField*);

		bool setMarket_data(CMarketDataBaseField*);
		bool setMarket_data(CMarketDataStaticField*);
		bool setMarket_data(CMarketDataLastMatchField*);
		bool setMarket_data(CMarketDataBestPriceField*);
		bool setMarket_data(CMarketDataBid23Field*);
		bool setMarket_data(CMarketDataAsk23Field*);
		bool setMarket_data(CMarketDataBid45Field*);
		bool setMarket_data(CMarketDataAsk45Field*);
		bool setMarket_data(CMarketDataUpdateTimeField*);
		bool setMarket_data(CMarketDataTopicField*);

		bool setData(CMarketDataBaseField*,
					 CMarketDataStaticField*,
					 CMarketDataLastMatchField*,
					 CMarketDataBestPriceField*,
					 CMarketDataBid23Field*, 
					 CMarketDataAsk23Field*, 
					 CMarketDataBid45Field*, 
					 CMarketDataAsk45Field*,
				     CMarketDataUpdateTimeField*);

		bool setData(CMarketDataBaseField*,
					 CMarketDataStaticField*,
					 CMarketDataLastMatchField*,
					 CMarketDataBestPriceField*,
				     CMarketDataUpdateTimeField*);

	public:
		NtfTopicMarketData(CMarketDataBaseField* base_field, 
						   CMarketDataStaticField* static_field,
						   CMarketDataLastMatchField* match_field,
						   CMarketDataBestPriceField* price_field,
						   CMarketDataBid23Field* bid23_field,
						   CMarketDataAsk23Field* ask23_field,
						   CMarketDataBid45Field* bid45_field,
						   CMarketDataAsk45Field* ask45_field,
				     	   CMarketDataUpdateTimeField *time_field){
			setData(base_field, static_field, match_field, price_field,
					bid23_field, ask23_field, bid45_field, ask45_field,
					time_field); 
		}

		NtfTopicMarketData(CMarketDataBaseField* base_field, 
						   CMarketDataStaticField* static_field,
						   CMarketDataLastMatchField* match_field,
						   CMarketDataBestPriceField* price_field,
				     	   CMarketDataUpdateTimeField *time_field){
			setData(base_field, static_field, match_field, price_field,
					time_field); 
		}
		NtfTopicMarketData(){}

		NtfTopicMarketData(const NtfTopicMarketData& topic){
			setData(const_cast<CMarketDataBaseField*> (&(topic.market_data_base)),
				   	const_cast<CMarketDataStaticField*> (&(topic.market_data_static)),
					const_cast<CMarketDataLastMatchField*> (&(topic.market_data_last_match)), 
					const_cast<CMarketDataBestPriceField*> (&(topic.market_data_best_price)),
					const_cast<CMarketDataBid23Field*> (&(topic.market_data_bid_23)), 
					const_cast<CMarketDataAsk23Field*> (&(topic.market_data_ask_23)),
					const_cast<CMarketDataBid45Field*> (&(topic.market_data_bid_45)), 
					const_cast<CMarketDataAsk45Field*> (&(topic.market_data_ask_45)),
					const_cast<CMarketDataUpdateTimeField*> (&(topic.market_data_update_time)));		
			setMarket_data(const_cast<CMarketDataTopicField*> (&(topic.market_data_topic)));
		}


		void pack(char* ret_buffer, uint32_t *ret_length, 
				  std::map<std::string, NtfTopicMarketData> &market_data, uint32_t level);
};

class NtfTopicMarketData_100: NtfTopicMarketData{
	public:
		NtfTopicMarketData_100(CMarketDataBaseField* base_field, 
						   	   CMarketDataStaticField* static_field,
						   	   CMarketDataLastMatchField* match_field,
						   	   CMarketDataBestPriceField* price_field,
							   CMarketDataUpdateTimeField* time_field)
							:NtfTopicMarketData(base_field, static_field, match_field, price_field, time_field){
			market_data_topic.TopicID = 100;
			strcpy(market_data_topic.TopicName,"一档实时行情\0");
			strcpy(market_data_topic.MarketID,"Market01\0");
			market_data_topic.SnapShotFeq = 0;
			market_data_topic.MarketDataDepth = 1;
			market_data_topic.DelaySeconds = 0;
			market_data_topic.MarketDataMode = '1';
		}
		void pack(char* ret_buffer, uint32_t *ret_length);
};

class NtfTopicMarketData_110: NtfTopicMarketData{
	public:
		NtfTopicMarketData_110(CMarketDataBaseField* base_field, 
						       CMarketDataStaticField* static_field,
						       CMarketDataLastMatchField* match_field,
						       CMarketDataBestPriceField* price_field,
						       CMarketDataBid23Field* bid23_field,
						       CMarketDataAsk23Field* ask23_field,
						       CMarketDataBid45Field* bid45_field,
						       CMarketDataAsk45Field* ask45_field,
							   CMarketDataUpdateTimeField* time_field)
							: NtfTopicMarketData(base_field, static_field, match_field, price_field,
					           					 bid23_field, ask23_field, bid45_field, ask45_field, time_field){
			market_data_topic.TopicID = 110;
			strcpy(market_data_topic.TopicName,"五档实时行情\0");
			strcpy(market_data_topic.MarketID,"Market01\0");
			market_data_topic.SnapShotFeq = 0;
			market_data_topic.MarketDataDepth = 5;
			market_data_topic.DelaySeconds = 0;
			market_data_topic.MarketDataMode = '1';
		}
		void pack(char* ret_buffer, uint32_t *ret_length);
};

class NtfTopicMarketData_1000: NtfTopicMarketData{
	public:
		NtfTopicMarketData_1000(CMarketDataBaseField* base_field, 
						   	   CMarketDataStaticField* static_field,
						   	   CMarketDataLastMatchField* match_field,
						   	   CMarketDataBestPriceField* price_field,
							   CMarketDataUpdateTimeField* time_field)
							: NtfTopicMarketData(base_field, static_field, 
									             match_field, price_field,
												 time_field){
			market_data_topic.TopicID = 1000;
			strcpy(market_data_topic.TopicName,"一档延迟行情\0");
			strcpy(market_data_topic.MarketID,"Market01\0");
			market_data_topic.SnapShotFeq = 1;
			market_data_topic.MarketDataDepth = 1;
			market_data_topic.DelaySeconds = 900;
			market_data_topic.MarketDataMode = '1';
		}
		void pack(char* ret_buffer, uint32_t *ret_length);
};

class NtfTopicMarketData_1100: NtfTopicMarketData{
	public:
		NtfTopicMarketData_1100(CMarketDataBaseField* base_field, 
						        CMarketDataStaticField* static_field,
						        CMarketDataLastMatchField* match_field,
						        CMarketDataBestPriceField* price_field,
						        CMarketDataBid23Field* bid23_field,
						        CMarketDataAsk23Field* ask23_field,
						        CMarketDataBid45Field* bid45_field,
						        CMarketDataAsk45Field* ask45_field,
							    CMarketDataUpdateTimeField* time_field)
							:NtfTopicMarketData(base_field, static_field, match_field, price_field,
					           				    bid23_field, ask23_field, bid45_field, ask45_field, time_field){
			market_data_topic.TopicID = 1100;
			strcpy(market_data_topic.TopicName,"五档延迟行情\0");
			strcpy(market_data_topic.MarketID,"Market01\0");
			market_data_topic.SnapShotFeq = 1;
			market_data_topic.MarketDataDepth = 5;
			market_data_topic.DelaySeconds = 900;
			market_data_topic.MarketDataMode = '1';
		}
		void pack(char* ret_buffer, uint32_t *ret_length);
};

class NtfTopicMarketData_200: NtfTopicMarketData{
	public:
		NtfTopicMarketData_200(CMarketDataBaseField* base_field, 
						   	   CMarketDataStaticField* static_field,
						   	   CMarketDataLastMatchField* match_field,
						   	   CMarketDataBestPriceField* price_field,
							   CMarketDataUpdateTimeField* time_field)
							: NtfTopicMarketData(base_field, static_field, 
									             match_field, price_field,
												 time_field){
			market_data_topic.TopicID = 200;
			strcpy(market_data_topic.TopicName,"期权一级实时行情\0");
			strcpy(market_data_topic.MarketID,"Market02\0");
			market_data_topic.SnapShotFeq = 0;
			market_data_topic.MarketDataDepth = 1;
			market_data_topic.DelaySeconds = 0;
			market_data_topic.MarketDataMode = '1';
		}
		void pack(char* ret_buffer, uint32_t *ret_length);
};

class NtfTopicMarketData_201: NtfTopicMarketData{
	public:
		NtfTopicMarketData_201(CMarketDataBaseField* base_field, 
						       CMarketDataStaticField* static_field,
						       CMarketDataLastMatchField* match_field,
						       CMarketDataBestPriceField* price_field,
						       CMarketDataBid23Field* bid23_field,
						       CMarketDataAsk23Field* ask23_field,
						       CMarketDataBid45Field* bid45_field,
						       CMarketDataAsk45Field* ask45_field,
							   CMarketDataUpdateTimeField* time_field)
							:NtfTopicMarketData(base_field, static_field, match_field, price_field,
					           				    bid23_field, ask23_field, bid45_field, ask45_field, time_field){
			market_data_topic.TopicID = 201;
			strcpy(market_data_topic.TopicName,"期权五级实时行情\0");
			strcpy(market_data_topic.MarketID,"Market02\0");
			market_data_topic.SnapShotFeq = 0;
			market_data_topic.MarketDataDepth = 5;
			market_data_topic.DelaySeconds = 0;
			market_data_topic.MarketDataMode = '1';
		}
		void pack(char* ret_buffer, uint32_t *ret_length);
};

#endif
