#include <cstdlib>
#include <iostream>
#include <boost/fusion/algorithm.hpp>
#include <boost/fusion/include/algorithm.hpp>
#include <boost/mpl/range_c.hpp>
#include <boost/mpl/for_each.hpp>
#include <boost/smart_ptr/shared_ptr.hpp>
#include <boost/make_shared.hpp>
#include <boost/bind.hpp>
#include "XTPReader.h"
#include "logger.h"
#include "EndianConverter.h"
#include "FieldDefine.h"
#include "TID.h"
#include "TID1.h"
#include "FidDesc.h"
#include "ItemTypedef.h"
#include "printVisitor.h"
#include "GlobalVar.h"


XTPReader::XTPReader(const std::string &xtpFileName)
{
  DEBUG() << "open file " << xtpFileName;
  this->mXtpStream.open(xtpFileName.c_str());

  if (!mXtpStream) {
    ERROR() << "ERROR: cannot open file: " << xtpFileName;
    std::exit(1);
  }
}

void XTPReader::readXTPHeader(XTPHeader &header, const char *&contentPtr){
  const uint32_t maxPackageSize = 10000;
  char buffer[maxPackageSize];
  mXtpStream.read(buffer, mCurrPackageSize);

  /// get xtp header part
  const int headerSize = sizeof(header);
  const char *p = buffer;
  std::copy(p, p + headerSize, reinterpret_cast<char *>(&header));
  p += headerSize;

  /// assign the pointer
  contentPtr = p;
}

void XTPReader::skipXTPPackages(int n) {
  while (n-- > 0) {
    mXtpStream.read(reinterpret_cast<char *>(&mCurrPackageSize), sizeof(boost::uint32_t));
    big_to_little_endian_converter()(mCurrPackageSize);

    /// this the package: header and content
    const uint32_t maxPackageSize = 10000;
    if (this->mCurrPackageSize > maxPackageSize) {
      WARNING() << "too large package size: " << this->mCurrPackageSize;
    }

    char buffer[maxPackageSize];
    mXtpStream.read(buffer, mCurrPackageSize);
  }
}

void XTPReader::readAll() {
  int count = 0;
  while(mXtpStream.read(reinterpret_cast<char *>(&mCurrPackageSize),
                        sizeof(boost::uint32_t)))
  {
    big_to_little_endian_converter()(mCurrPackageSize);
    DEBUG() << format("ID[%d]") % count; count++;
    DEBUG() << "current package size: " << this->mCurrPackageSize;

    /// this the package: header and content
    const uint32_t maxPackageSize = 10000;
    if (this->mCurrPackageSize > maxPackageSize) {
      WARNING() << "too large package size: " << this->mCurrPackageSize;
      exit(-1);
    }

    XTPHeader header;
    const char *p = NULL; /// point to content
    readXTPHeader(header, p); /// return header and pointer to content

    TID *tid = createTid(header);
    if (tid == NULL) {
      WARNING() << format("[WARNING]: cannot find find tid: %#010x") % header.Tid;
      delete tid;
      continue;
    }
    tid->read(p);
    tid->print();
  }

}

XTPPackage XTPReader::readAt(int idx) {
  skipXTPPackages(idx);

  DEBUG() << format("reading package ID[%d]") % idx;

  mXtpStream.read(reinterpret_cast<char *>(&mCurrPackageSize),sizeof(boost::uint32_t));

  big_to_little_endian_converter()(mCurrPackageSize);
  DEBUG() << "current package size: " << this->mCurrPackageSize;

  /// this the package: header and content
  const uint32_t maxPackageSize = 10000;
  if (this->mCurrPackageSize > maxPackageSize) {
    WARNING() << "too large package size: " << this->mCurrPackageSize;
    exit(-1);
  }

  XTPHeader header;
  const char *p = NULL; /// point to content
  readXTPHeader(header, p); /// return header and pointer to content

  return XTPPackage(header, p);
}

std::vector<XTPPackage> XTPReader::readTo(int n) {
  std::vector<XTPPackage> xtps;

  for (int i = 0; i <= n; i++) {
    TRACE() << format("read ID[%d]") % i;

    mXtpStream.read(reinterpret_cast<char *>(&mCurrPackageSize),sizeof(boost::uint32_t));

    big_to_little_endian_converter()(mCurrPackageSize);
    TRACE() << "current package size: " << this->mCurrPackageSize;

    /// this the package: header and content
    const uint32_t maxPackageSize = 10000;
    if (this->mCurrPackageSize > maxPackageSize) {
      WARNING() << "too large package size: " << this->mCurrPackageSize;
      exit(-1);
    }

    XTPHeader header;
    const char *p = NULL; /// point to content
    readXTPHeader(header, p); /// return header and pointer to content

    xtps.push_back(XTPPackage(header, p));
  }

  return xtps;
}

XTPReader::~XTPReader() {
  mXtpStream.close();
}
