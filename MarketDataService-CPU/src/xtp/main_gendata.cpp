#include "genMarket.h"
#include "ItemTypedef.h"
#include <map>
#include <string>
#include <string.h>

using namespace std;

//test the result of a single package
void test1(map<string, MBLData> &order_book,
		   map<string, CMarketDataField> &market_data){

	MBLData data;
	data.mLastPrice = 1;
	data.mLastVolume= 2;
	data.mMaxPrice= 3;
	data.mMinPrice= 4;
	data.mTurnOver= 5;
	data.mOpenInterest= 6;
	data.mBuyPriceVolumeMap[1] = 2;
	data.mSellPriceVolumeMap[2] = 4;

	CMarketDataField field;
	//field.TradingDay = "2015-05-26\0"
	strcpy(field.TradingDay, "2015-05-26\0");
	//field.SettlementGroupID = "05-26\0"
	strcpy(field.SettlementGroupID, "05-26\0");
	field.SettlementID = 1;
	field.LastPrice = 2;
	field.PreSettlementPrice = 3;
	field.PreClosePrice = 4;
	field.PreOpenInterest = 5;
	field.OpenPrice = 6;
	field.HighestPrice = 7;
	field.LowestPrice = 8;
	field.Volume = 9;
	field.Turnover = 10;
	field.OpenInterest = 11;
	field.ClosePrice = 12;
	field.SettlementPrice = 13;
	field.UpperLimitPrice = 14;
	field.LowerLimitPrice = 15;
	field.PreDelta = 16;
	field.CurrDelta = 17;
	//field.UpdateTime = "05-27\0";
	strcpy(field.UpdateTime, "05-27\0");
	field.UpdateMillisec = 18;
	//field.InstrumentID = "c01b02\0";
	strcpy(field.InstrumentID, "c01b02\0");
	/////////////////////////////////////////////////////

	order_book["c01b02"] = data;
	MBLData& data_c01b02 = order_book["c01b02"];

	market_data["c01b02"] = field;
	CMarketDataField& field_c01b02 = market_data["c01b02"];
	/////////////////////////////////////////////////////
	CCurrentTimeField time_field;
	strcpy(time_field.CurrDate, "05-26\0");
	strcpy(time_field.CurrTime, "15-01\0");
	time_field.CurrMillisec = 19;

	char buffer[4096];
	uint32_t length;
	//1st send
	genTopicMarket(buffer, &length, order_book, market_data, &time_field, true);

	//2nd send
	field_c01b02.ClosePrice++;
	data_c01b02.mLastVolume++;
	genTopicMarket(buffer, &length, order_book, market_data, &time_field);
}

//test the result of a different package
void test2(){

}

//test the result of a identical package
void test3(){

}

int main(){

	map<string, MBLData> order_book;
	map<string, CMarketDataField> market_data;

	test1(order_book, market_data);


}
