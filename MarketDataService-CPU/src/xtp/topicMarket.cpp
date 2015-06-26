#include "topicMarket.h"
#include "Endian.h"
#include "XTPHeader.h"

#include <map>
#include <string>
#include <iostream>
#include <stdio.h>

using namespace std;

map<string, NtfTopicMarketData> market_instant_1;
map<string, NtfTopicMarketData> market_instant_5;
map<string, NtfTopicMarketData> market_delay_1;
map<string, NtfTopicMarketData> market_delay_5;
map<string, NtfTopicMarketData> market_delay_io_1;
map<string, NtfTopicMarketData> market_delay_io_5;
//map<string, uint32_t> instrument_map;

bool NtfTopicMarketData::setMarket_data(CMarketDataBaseField* field){
	memcpy(&market_data_base, field, sizeof(market_data_base));
	return true;
}

bool NtfTopicMarketData::setMarket_data(CMarketDataStaticField* field){
	memcpy(&market_data_static, field, sizeof(market_data_static));
	return true;
}

bool NtfTopicMarketData::setMarket_data(CMarketDataLastMatchField* field){
	memcpy(&market_data_last_match, field, sizeof(market_data_last_match));
	return true;
}

bool NtfTopicMarketData::setMarket_data(CMarketDataBestPriceField* field){
	memcpy(&market_data_best_price, field, sizeof(market_data_best_price));
	return true;
}

bool NtfTopicMarketData::setMarket_data(CMarketDataBid23Field* field){
	memcpy(&market_data_bid_23, field, sizeof(market_data_bid_23));
	return true;
}

bool NtfTopicMarketData::setMarket_data(CMarketDataAsk23Field* field){
	memcpy(&market_data_ask_23, field, sizeof(market_data_ask_23));
	return true;
}

bool NtfTopicMarketData::setMarket_data(CMarketDataBid45Field* field){
	memcpy(&market_data_bid_45, field, sizeof(market_data_bid_45));
	return true;
}

bool NtfTopicMarketData::setMarket_data(CMarketDataAsk45Field* field){
	memcpy(&market_data_ask_45, field, sizeof(market_data_ask_45));
	return true;
}

bool NtfTopicMarketData::setMarket_data(CMarketDataUpdateTimeField* field){
	memcpy(&market_data_update_time, field, sizeof(market_data_update_time));
	return true;
}

bool NtfTopicMarketData::setMarket_data(CMarketDataTopicField* field){
	memcpy(&market_data_topic, field, sizeof(market_data_topic));
	return true;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

//the static field means the static data yesterday.
bool NtfTopicMarketData::isEqual(CMarketDataBaseField* field1, CMarketDataBaseField* field2){
	//if (instrument_map.find(market_data_update_time.InstrumentID) ==instrument_map.end())
	//	return false;
	//else if (instrument_map[market_data_update_time.InstrumentID] < 2)
	//	return false;
	return true;
}

//the static field means the static data today.
bool NtfTopicMarketData::isEqual(CMarketDataStaticField* field1, CMarketDataStaticField* field2){
	//if (instrument_map.find(market_data_update_time.InstrumentID) == instrument_map.end())
	//	return false;
	return (field1->OpenPrice         ==  field2->OpenPrice       &&
			field1->HighestPrice      ==  field2->HighestPrice    &&
			field1->LowestPrice       ==  field2->LowestPrice     &&
			field1->ClosePrice        ==  field2->ClosePrice      &&
			field1->UpperLimitPrice   ==  field2->UpperLimitPrice &&
			field1->LowerLimitPrice   ==  field2->LowerLimitPrice &&
			field1->SettlementPrice   ==  field2->SettlementPrice &&
			field1->CurrDelta         ==  field2->CurrDelta);
}

bool NtfTopicMarketData::isEqual(CMarketDataLastMatchField* field1, CMarketDataLastMatchField* field2){
	//if (instrument_map.find(market_data_update_time.InstrumentID) == instrument_map.end())
	//	return false;
	return (field1->LastPrice     == field2->LastPrice    &&
		    field1->Volume        == field2->Volume       &&
			field1->Turnover      == field2->Turnover     &&
			field1->OpenInterest  == field2->OpenInterest);
}

bool NtfTopicMarketData::isEqual(CMarketDataBestPriceField* field1, CMarketDataBestPriceField* field2){
	//if (instrument_map.find(market_data_update_time.InstrumentID) == instrument_map.end())
	//	return false;
	return (field1->BidPrice1  == field2->BidPrice1  &&
		    field1->BidVolume1 == field2->BidVolume1 &&
			field1->AskPrice1  == field2->AskPrice1  &&
			field1->AskVolume1 == field2->AskVolume1);
}

bool NtfTopicMarketData::isEqual(CMarketDataBid23Field* field1, CMarketDataBid23Field* field2){
	//if (instrument_map.find(market_data_update_time.InstrumentID) == instrument_map.end())
	//	return false;
	return (field1->BidPrice2  == field2->BidPrice2  &&
		    field1->BidVolume2 == field2->BidVolume2 &&
			field1->BidPrice3  == field2->BidPrice3  &&
			field1->BidVolume3 == field2->BidVolume3);
}

bool NtfTopicMarketData::isEqual(CMarketDataAsk23Field* field1, CMarketDataAsk23Field* field2){
	//if (instrument_map.find(market_data_update_time.InstrumentID) == instrument_map.end())
	//	return false;
	return (field1->AskPrice2  == field2->AskPrice2  &&
		    field1->AskVolume2 == field2->AskVolume2 &&
			field1->AskPrice3  == field2->AskPrice3  &&
			field1->AskVolume3 == field2->AskVolume3);
}

bool NtfTopicMarketData::isEqual(CMarketDataBid45Field* field1, CMarketDataBid45Field* field2){
	//if (instrument_map.find(market_data_update_time.InstrumentID) == instrument_map.end())
	//	return false;
	return (field1->BidPrice4  == field2->BidPrice4  &&
		    field1->BidVolume4 == field2->BidVolume4 &&
			field1->BidPrice5  == field2->BidPrice5  &&
			field1->BidVolume5 == field2->BidVolume5);
}

bool NtfTopicMarketData::isEqual(CMarketDataAsk45Field* field1, CMarketDataAsk45Field* field2){
	//if (instrument_map.find(market_data_update_time.InstrumentID) == instrument_map.end())
	//	return false;
	return (field1->AskPrice4  == field2->AskPrice4  &&
		    field1->AskVolume4 == field2->AskVolume4 &&
			field1->AskPrice5  == field2->AskPrice5  &&
			field1->AskVolume5 == field2->AskVolume5);
}
bool NtfTopicMarketData::isEqual(CMarketDataUpdateTimeField*, CMarketDataUpdateTimeField*){
	return false;
}

bool NtfTopicMarketData::isEqual(CMarketDataTopicField* field1, CMarketDataTopicField* field2){
	return false;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////

bool NtfTopicMarketData::setData(CMarketDataBaseField* base_field,
								 CMarketDataStaticField* static_field,
								 CMarketDataLastMatchField* match_field,
								 CMarketDataBestPriceField* price_field,
								 CMarketDataBid23Field* bid23_field,
								 CMarketDataAsk23Field* ask23_field,
								 CMarketDataBid45Field* bid45_field,
								 CMarketDataAsk45Field* ask45_field,
							     CMarketDataUpdateTimeField* time_field){
	setMarket_data(base_field);
	setMarket_data(static_field);
	setMarket_data(match_field);
	setMarket_data(price_field);
	setMarket_data(bid23_field);
	setMarket_data(ask23_field);
	setMarket_data(bid45_field);
	setMarket_data(ask45_field);
	setMarket_data(time_field);
	return true;
}

bool NtfTopicMarketData::setData(CMarketDataBaseField* base_field,
								 CMarketDataStaticField* static_field,
								 CMarketDataLastMatchField* match_field,
								 CMarketDataBestPriceField* price_field,
							     CMarketDataUpdateTimeField* time_field){
	setMarket_data(base_field);
	setMarket_data(static_field);
	setMarket_data(match_field);
	setMarket_data(price_field);
	setMarket_data(time_field);
	return true;
}



//for the clear implementation of this function
#define pack_field(fieldname, fieldID, buffer, ori_fieldname)          \
		do{                                                            \
			memcpy(&ori_fieldname, &fieldname, sizeof(fieldname));     \
			uint16_t field_id = fieldID;                               \
	        cout << "field_id:\t" << #fieldID << "\t";                  \
			char *c_field_id = convertEndian(&field_id);			   \
			memcpy(buffer, c_field_id, sizeof(uint16_t)); 		       \
			buffer += sizeof(uint16_t);                                \
																       \
			uint16_t field_size = sizeof(fieldname);       		       \
	        cout << "field_size\t" << field_size << "\t" << endl;      \
			char *c_field_size = convertEndian(&field_size);           \
			memcpy(buffer, c_field_size, sizeof(uint16_t));            \
			buffer += sizeof(uint16_t);                                \
														               \
			char *c_field = convertEndian(&fieldname);                 \
			memcpy(buffer, c_field, sizeof(fieldname));                \
			buffer += sizeof(fieldname);                               \
	        cout << "sizeof("#fieldname << ")\t" << sizeof(fieldname) << endl;  \
		}while(0)

#define pack_field_check(fieldname, fieldID, buffer, ori_fieldname)        \
		do{                                                                \
			if (!isEqual(&fieldname, &ori_fieldname)){                     \
				pack_field(fieldname, fieldID, buffer, ori_fieldname);     \
			}                                                         	   \
		}while(0)


void NtfTopicMarketData::pack(char* ret_buffer, uint32_t *ret_length,
		                      map<string, NtfTopicMarketData> &market_data,
							  uint32_t level){

	char fields_buffer[4096];
	char *tmp = fields_buffer;

	//step 1
	//pack each field of DepthMarket if it is different from the last release
	//and calculate the size
	//if (!isEqual(&market_data_topic, &(ori_field->market_data_topic))){
	//	memcpy(&ori_field->market_data_topic, &market_data_topic, sizeof(market_data_topic));
	//	uint16_t field_id = 0x1204;
	//	char *c_field_id = convertEndian(&field_id);
	//	memcpy(tmp, c_field_id, sizeof(uint16_t));
	//	tmp += sizeof(uint16_t);
	//
	//	uint16_t field_size = sizeof(market_data_topic);
	//	char *c_field_size = convertEndian(&field_size);
	//	memcpy(tmp, c_field_size, sizeof(uint16_t));
	//	tmp += sizeof(uint16_t);
	//
	//	char *c_field = convertEndian(&market_data_topic);
	//	memcpy(tmp, c_field, sizeof(market_data_topic));
	//	tmp += sizeof(market_data_topic);
	//}
	


	NtfTopicMarketData* ori_field;
	string tmp_str;
	if (market_data.find(market_data_update_time.InstrumentID) == market_data.end()){
		ori_field = &market_data[market_data_update_time.InstrumentID];
		pack_field(market_data_topic, 0x1204, tmp, (ori_field->market_data_topic));
		pack_field(market_data_base, 0x2431, tmp, (ori_field->market_data_base));
		pack_field(market_data_static, 0x2432, tmp, (ori_field->market_data_static));
		pack_field(market_data_last_match, 0x2433, tmp, (ori_field->market_data_last_match));
		pack_field(market_data_best_price, 0x2434, tmp, (ori_field->market_data_best_price));
		if (level == 5){
			pack_field(market_data_bid_23, 0x2435, tmp, (ori_field->market_data_bid_23));
			pack_field(market_data_ask_23, 0x2436, tmp, (ori_field->market_data_ask_23));
			pack_field(market_data_bid_45, 0x2437, tmp, (ori_field->market_data_bid_45));
			pack_field(market_data_ask_45, 0x2438, tmp, (ori_field->market_data_ask_45));
		}
		pack_field(market_data_update_time, 0x2439, tmp, (ori_field->market_data_update_time));
	}else{
		ori_field = &market_data[market_data_update_time.InstrumentID];
		pack_field_check(market_data_topic, 0x1204, tmp, (ori_field->market_data_topic));
		pack_field_check(market_data_base, 0x2431, tmp, (ori_field->market_data_base));
		pack_field_check(market_data_static, 0x2432, tmp, (ori_field->market_data_static));
		pack_field_check(market_data_last_match, 0x2433, tmp, (ori_field->market_data_last_match));
		pack_field_check(market_data_best_price, 0x2434, tmp, (ori_field->market_data_best_price));
		if (level == 5){
			pack_field_check(market_data_bid_23, 0x2435, tmp, (ori_field->market_data_bid_23));
			pack_field_check(market_data_ask_23, 0x2436, tmp, (ori_field->market_data_ask_23));
			pack_field_check(market_data_bid_45, 0x2437, tmp, (ori_field->market_data_bid_45));
			pack_field_check(market_data_ask_45, 0x2438, tmp, (ori_field->market_data_ask_45));
		}
		pack_field_check(market_data_update_time, 0x2439, tmp, (ori_field->market_data_update_time));

	}
	//string instrument_id = market_data_update_time.InstrumentID;
	//if (instrument_map.find(instrument_id) == instrument_map.end())
	//	instrument_map[instrument_id] = 1;
	//else
	//	instrument_map[instrument_id]++;


	///////////////////////////////////////////////////////////////////////
	uint32_t fields_size = tmp - fields_buffer;
	if (fields_size == (8+sizeof(CMarketDataTopicField)+sizeof(CMarketDataUpdateTimeField))){
		*ret_length = 0;	
		cout << "Unfortunenately, the real length = " << *ret_length << endl;
		return;
	}else{
		cout << "real length = " << *ret_length << endl;
		cout << market_data_update_time.InstrumentID 
		     << "////////////////////////////////////////////////////\n" ;
	}
	uint32_t total_size = 4+sizeof(XTPHeader)+fields_size;
	char *p_buffer = ret_buffer;
	*ret_length = total_size;
	printf("field_size:%u, total_size:%u\n", fields_size, total_size);
	///////////////////////////////////////////////////////////////////////

	//step 2
	//pack the 1st 4 Bytes: content_length of the whole package
	uint32_t package_size = total_size-4;
	char *p_package_size = convertEndian(&package_size);
	memcpy(p_buffer, p_package_size, sizeof(uint32_t));
	p_buffer += sizeof(uint32_t);

	//step 3
	//pack the XTP header package: 68 Bytes
	XTPHeader header;
   	header.set_all(fields_size);
	memcpy(p_buffer, (char*)&header, sizeof(header));
	p_buffer += sizeof(header);

	//step 4
	//memcpy
	memcpy(p_buffer, fields_buffer, fields_size);

	////////////////////////////////////////////////////////////////////////
	//print(market_data_topic, TopicID);
	//print(market_data_topic, TopicName);
	//print(market_data_topic, MarketID);
	//print(market_data_topic, SnapShotFeq);
	//print(market_data_topic, MarketDataDepth);
	//print(market_data_topic, DelaySeconds);
	//print(market_data_topic, MarketDataMode);

	//print(market_data_base, TradingDay);
	//print(market_data_base, SettlementGroupID);
	//print(market_data_base, SettlementID);
	//print(market_data_base, PreSettlementPrice);
	//print(market_data_base, PreClosePrice);
	//print(market_data_base, PreOpenInterest);
	//print(market_data_base, PreDelta);

	//print(market_data_static, OpenPrice);
	//print(market_data_static, HighestPrice);
	//print(market_data_static, LowestPrice);
	//print(market_data_static, ClosePrice);
	//print(market_data_static, UpperLimitPrice);
	//print(market_data_static, LowerLimitPrice);
	//print(market_data_static, SettlementPrice);
	//print(market_data_static, CurrDelta);


	//print(market_data_last_match, LastPrice);
	//print(market_data_last_match, Volume);
	//print(market_data_last_match, Turnover);
	//print(market_data_last_match, OpenInterest);

	//print(market_data_best_price, BidPrice1);
	//print(market_data_best_price, BidVolume1);
	//print(market_data_best_price, AskPrice1);
	//print(market_data_best_price, AskVolume1);

	//print(market_data_bid_23, BidPrice2);
	//print(market_data_bid_23, BidVolume2);
	//print(market_data_bid_23, BidPrice3);
	//print(market_data_bid_23, BidVolume3);

	//print(market_data_ask_23, AskPrice2);
	//print(market_data_ask_23, AskVolume2);
	//print(market_data_ask_23, AskPrice3);
	//print(market_data_ask_23, AskVolume3);

	//print(market_data_bid_45, BidPrice4);
	//print(market_data_bid_45, BidVolume4);
	//print(market_data_bid_45, BidPrice5);
	//print(market_data_bid_45, BidVolume5);

	//print(market_data_ask_45, AskPrice4);
	//print(market_data_ask_45, AskVolume4);
	//print(market_data_ask_45, AskPrice5);
	//print(market_data_ask_45, AskVolume5);

	//print(market_data_update_time, InstrumentID);
	//print(market_data_update_time, UpdateTime);
	//print(market_data_update_time, UpdateMillisec);
	////////////////////////////////////////////////////////////////////////
}

void NtfTopicMarketData_100::pack(char* ret_buffer, uint32_t *ret_length){

	//return NtfTopicMarketData::pack(ret_buffer, ret_length,
	//                                &market_instant_1[market_data_update_time.InstrumentID],1);
	return NtfTopicMarketData::pack(ret_buffer, ret_length, market_instant_1, 1);
}

void NtfTopicMarketData_110::pack(char* ret_buffer, uint32_t *ret_length){
	//return NtfTopicMarketData::pack(ret_buffer, ret_length,
	//		                        &(market_instant_5[market_data_update_time.InstrumentID]),5);
	return NtfTopicMarketData::pack(ret_buffer, ret_length, market_instant_5, 5);
}

void NtfTopicMarketData_1000::pack(char* ret_buffer, uint32_t *ret_length){
	//return NtfTopicMarketData::pack(ret_buffer, ret_length,
	//		                       &(market_delay_1[market_data_update_time.InstrumentID]),1);
	return NtfTopicMarketData::pack(ret_buffer, ret_length, market_delay_1, 1);
}

void NtfTopicMarketData_1100::pack(char* ret_buffer, uint32_t *ret_length){
	//return NtfTopicMarketData::pack(ret_buffer, ret_length,
	//		                       &(market_delay_5[market_data_update_time.InstrumentID]),5);
	return NtfTopicMarketData::pack(ret_buffer, ret_length, market_delay_5, 5);
}

void NtfTopicMarketData_200::pack(char* ret_buffer, uint32_t *ret_length){
	//return NtfTopicMarketData::pack(ret_buffer, ret_length,
	//		                       &(market_delay_5[market_data_update_time.InstrumentID]),5);
	return NtfTopicMarketData::pack(ret_buffer, ret_length, market_delay_io_1, 1);
}

void NtfTopicMarketData_201::pack(char* ret_buffer, uint32_t *ret_length){
	//return NtfTopicMarketData::pack(ret_buffer, ret_length,
	//		                       &(market_delay_5[market_data_update_time.InstrumentID]),5);
	return NtfTopicMarketData::pack(ret_buffer, ret_length, market_delay_io_5, 5);
}
