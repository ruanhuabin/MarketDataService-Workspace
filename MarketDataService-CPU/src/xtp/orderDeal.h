#include <map>
#include "ItemTypedef.h"
#include "FieldDefine.h"
#include "TID1.h"
#include "Package.h"
void orderDeal(TID1<COrderField> &NtfOrder, COrderSysIDType &maxOrderSysID, std::map<std::string, MBLData> &OrderBooks,const CCurrentTimeField &currentTime);
void orderDeal(TID1<CTradeField> &NtfTrade, std::map<std::string, MBLData> &OrderBooks, CCurrentTimeField &currentTime);
