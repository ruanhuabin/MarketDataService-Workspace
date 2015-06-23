#ifndef XTPREADER_H_7TBGMCVS
#define XTPREADER_H_7TBGMCVS

#include <fstream>
#include <string>
#include <vector>

#include "XTPHeader.h"
#include "XTPPackage.h"

class XTPReader
{
public:
  XTPReader(const std::string &xtpFileName);
  ~XTPReader();

  void readAll();
  XTPPackage readAt(int n);
  std::vector<XTPPackage> readTo(int n);

private:
  void readXTPHeader(XTPHeader &xtpHeader, const char *&contentPtr);
  void skipXTPPackages(int n);

private:
  const static uint32_t maxPackageSize = 10000;
  std::ifstream mXtpStream;
  boost::uint32_t mCurrPackageSize;
  char mBuffer[maxPackageSize];
};
#endif /* end of include guard: XTPREADER_H_7TBGMCVS */
