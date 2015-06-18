#include "GlobalVar.h"

GlobalVar::GlobalVar() {
  this->mExchangeSyncStatus = this->EXCHANGE_DATA_SYNC_STATUS_ASYNCHRONOUS;
  this->mCallGenMarketTwice = false;
}
