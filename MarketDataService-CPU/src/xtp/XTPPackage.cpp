#include <algorithm>

#include "XTPPackage.h"

XTPPackage::XTPPackage(const XTPHeader &header, const char *p) :
  mXtpHeader(header) 
{
  std::copy(p, p + header.ContentLength, mContentPtr);
}

