#include "Endian.h"
#include <iostream>
#include <stdio.h>

using namespace std;

char* convertEndian(uint16_t *target){
	uint16_t source = *target;
	*target	= (source >> 8 | source << 8);
	return (char*)target;
}

char* convertEndian(uint32_t *target){
	uint32_t source = *target;
	*target	= (((source >> 24) & 0xff)      |
			   ((source >> 8)  & 0xff00)    | 
		       ((source << 8)  & 0xff0000)  |
			   ((source << 24) & 0xff000000));
	return (char*)target;
}

char* convertEndian(char *target){
	return (char*)target;
}

char* convertEndian(double* target){
	long long source = *((long long*)target);
	*target	= (((source >> 56)  & 0xff)      |
			   ((source >> 40)  & 0xff00)    | 
		       ((source >> 24)  & 0xff0000)  |
			   ((source >> 8)   & 0xff000000)|
			   ((source & 0xff000000) << 8)  |
			   ((source & 0xff0000) << 24)   |
			   ((source & 0xff00) << 40)     |
			   ((source & 0xff) << 56));
	return (char*)target;
}

#define print(data_field, field_item)                       \
	do{											            \
		cout << #data_field << "->" << #field_item<< ":\t"  \
		     << target->field_item << endl;                 \
	}while(0) 

char* convertEndian(CMarketDataTopicField* target){
	print(MarketDataTopic, TopicID);
	print(MarketDataTopic, TopicName);
	print(MarketDataTopic, MarketID);
	print(MarketDataTopic, SnapShotFeq);
	print(MarketDataTopic, MarketDataDepth);
	print(MarketDataTopic, DelaySeconds);
	print(MarketDataTopic, MarketDataMode);


	convertEndian(&(target->TopicID));	
	//convertEndian(&(target->TopicName));	
	//convertEndian(&(target->MarketID));	
	convertEndian(&(target->SnapShotFeq));	
	convertEndian(&(target->MarketDataDepth));	
	convertEndian(&(target->DelaySeconds));	
	//convertEndian(&(target->MarketDataMode));	
	return (char*)target;
}

char* convertEndian(CMarketDataBaseField* target){
	print(MarketDataBase, TradingDay);
	print(MarketDataBase, SettlementGroupID);
	print(MarketDataBase, SettlementID);
	print(MarketDataBase, PreSettlementPrice);
	print(MarketDataBase, PreClosePrice);
	print(MarketDataBase, PreOpenInterest);
	print(MarketDataBase, PreDelta);

	//convertEndian(&(target->TradingDay));	
	//convertEndian(&(target->SettlementGroupID));	
	convertEndian(&(target->SettlementID));	
	convertEndian(&(target->PreSettlementPrice));	
	convertEndian(&(target->PreClosePrice));	
	convertEndian(&(target->PreOpenInterest));	
	convertEndian(&(target->PreDelta));	
	return (char*)target;
	
}

char* convertEndian(CMarketDataStaticField* target){
	print(MarketDataStatic, OpenPrice);
	print(MarketDataStatic, HighestPrice);
	print(MarketDataStatic, LowestPrice);
	print(MarketDataStatic, ClosePrice);
	print(MarketDataStatic, UpperLimitPrice);
	print(MarketDataStatic, LowerLimitPrice);
	print(MarketDataStatic, SettlementPrice);
	print(MarketDataStatic, CurrDelta);
	
	convertEndian(&(target->OpenPrice));	
	convertEndian(&(target->HighestPrice));	
	convertEndian(&(target->LowestPrice));	
	convertEndian(&(target->ClosePrice));	
	convertEndian(&(target->UpperLimitPrice));	
	convertEndian(&(target->LowerLimitPrice));	
	convertEndian(&(target->SettlementPrice));	
	convertEndian(&(target->CurrDelta));	
	return (char*)target;
}

char* convertEndian(CMarketDataLastMatchField* target){
	print(MarketDataLastMatch, LastPrice);
	print(MarketDataLastMatch, Volume);
	print(MarketDataLastMatch, Turnover);
	print(MarketDataLastMatch, OpenInterest);
	
	convertEndian(&(target->LastPrice));	
	convertEndian(&(target->Volume));	
	convertEndian(&(target->Turnover));	
	convertEndian(&(target->OpenInterest));	
	return (char*)target;
}

char* convertEndian(CMarketDataBestPriceField* target){
	print(MarketDataBestPrice, BidPrice1);
	print(MarketDataBestPrice, BidVolume1);
	print(MarketDataBestPrice, AskPrice1);
	print(MarketDataBestPrice, AskVolume1);

	convertEndian(&(target->BidPrice1));	
	convertEndian(&(target->BidVolume1));	
	convertEndian(&(target->AskPrice1));	
	convertEndian(&(target->AskVolume1));	
	return (char*)target;
}
char* convertEndian(CMarketDataBid23Field* target){
	print(MarketDataBid23, BidPrice2);
	print(MarketDataBid23, BidVolume2);
	print(MarketDataBid23, BidPrice3);
	print(MarketDataBid23, BidVolume3);
	
	convertEndian(&(target->BidPrice2));	
	convertEndian(&(target->BidVolume2));	
	convertEndian(&(target->BidPrice3));	
	convertEndian(&(target->BidVolume3));	
	return (char*)target;
}

char* convertEndian(CMarketDataAsk23Field* target){
	print(MarketDataAsk23, AskPrice2);
	print(MarketDataAsk23, AskVolume2);
	print(MarketDataAsk23, AskPrice3);
	print(MarketDataAsk23, AskVolume3);
	
	convertEndian(&(target->AskPrice2));	
	convertEndian(&(target->AskVolume2));	
	convertEndian(&(target->AskPrice3));	
	convertEndian(&(target->AskVolume3));	
	return (char*)target;

}

char* convertEndian(CMarketDataBid45Field* target){
	print(MarketDataBid45, BidPrice4);
	print(MarketDataBid45, BidVolume4);
	print(MarketDataBid45, BidPrice5);
	print(MarketDataBid45, BidVolume5);
	
	convertEndian(&(target->BidPrice4));	
	convertEndian(&(target->BidVolume4));	
	convertEndian(&(target->BidPrice5));	
	convertEndian(&(target->BidVolume5));	
	return (char*)target;
}
char* convertEndian(CMarketDataAsk45Field* target){
	print(MarketDataAsk45, AskPrice4);
	print(MarketDataAsk45, AskVolume4);
	print(MarketDataAsk45, AskPrice5);
	print(MarketDataAsk45, AskVolume5);
	
	convertEndian(&(target->AskPrice4));	
	convertEndian(&(target->AskVolume4));	
	convertEndian(&(target->AskPrice5));	
	convertEndian(&(target->AskVolume5));	
	return (char*)target;
}

char* convertEndian(CMarketDataUpdateTimeField* target){
	print(MarketDataUpdateTime, InstrumentID);
	print(MarketDataUpdateTime, UpdateTime);
	print(MarketDataUpdateTime, UpdateMillisec);
	
	//convertEndian(&(target->InstrumentID));	
	//convertEndian(&(target->UpdateTime));	
	convertEndian(&(target->UpdateMillisec));	
	return (char*)target;
}


