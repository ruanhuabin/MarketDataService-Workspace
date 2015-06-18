#ifndef ENDIAN_H
#define ENDIAN_H

#include "FieldDefine.h"

char* convertEndian(uint16_t *target);
char* convertEndian(uint32_t *target);
char* convertEndian(char* target);
char* convertEndian(double* target);

char* convertEndian(CMarketDataTopicField* target);
char* convertEndian(CMarketDataBaseField* target);
char* convertEndian(CMarketDataStaticField* target);
char* convertEndian(CMarketDataLastMatchField* target);
char* convertEndian(CMarketDataBestPriceField* target);
char* convertEndian(CMarketDataBid23Field* target);
char* convertEndian(CMarketDataAsk23Field* target);
char* convertEndian(CMarketDataBid45Field* target);
char* convertEndian(CMarketDataAsk45Field* target);
char* convertEndian(CMarketDataUpdateTimeField* target);


#endif
