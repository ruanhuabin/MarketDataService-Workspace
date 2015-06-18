#ifndef GENMARKET_H
#define GENMARKET_H

#include "MBLData.h"
#include "FieldDefine.h"

#include <map>
#include <string>

void genTopicMarket(char* buffer, uint32_t *length, 
		            std::map<std::string, MBLData> &order_book, 
					std::map<std::string, CMarketDataField> &mMarketData,
					CCurrentTimeField* current_time,
					bool first_trigger=false);

#endif
