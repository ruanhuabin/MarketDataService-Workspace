#include <algorithm>

#include "XTPPackage.h"
#include "EndianConverter.h"
#include "logger.h"

XTPPackage::XTPPackage(const XTPHeader &header, const char *p) :
  mXtpHeader(header)
{
  uint16_t contentLen = header.ContentLength;
  big_to_little_endian_converter()(contentLen);

  std::copy(p, p + contentLen, mContentPtr);
}

