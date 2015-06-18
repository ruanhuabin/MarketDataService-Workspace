#ifndef XTPPACKAGE_H_IFA1CMDG
#define XTPPACKAGE_H_IFA1CMDG

#include "XTPHeader.h"

class XTPPackage
{
public:
  XTPPackage (const XTPHeader &header, const char *contentPtr);

  const XTPHeader &getHeader() const {
    return mXtpHeader;
  }

  const char *getContent() const {
    return mContentPtr;
  }

private:
  static const int MAX_CONTENT_LEN = 10000;

private:
  XTPHeader mXtpHeader;
  char      mContentPtr[MAX_CONTENT_LEN];
};

#endif /* end of include guard: XTPPACKAGE_H_IFA1CMDG */
