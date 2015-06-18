#ifndef TID1_H_O1BCTT0G
#define TID1_H_O1BCTT0G

#include <vector>
#include <boost/fusion/algorithm.hpp>
#include <boost/fusion/include/algorithm.hpp>
#include <boost/foreach.hpp>
#include <cassert>

#include "TID.h"
#include "EndianConverter.h"
#include "logger.h"

template <typename T>
class TID1 : public TID
{
public:
  typedef T FieldType1;

public:
  explicit TID1(const XTPHeader &xtpHeader, uint16_t fid1) :
    TID(xtpHeader), mFid1(fid1) {}
  void read(const char *buffer);
  void process() {}
  void print() const;


  const uint16_t          mFid1;
  std::vector<FieldType1> mFields1;
};

template <typename T> void TID1<T>::read(const char *buffer) {
  const char *p = buffer;
  int contentLen = mXtpHeader.ContentLength;
  while (contentLen > 0) {

    /// read field header
    FidHeader fieldHeader;
    int fieldHeaderLen = sizeof(fieldHeader);
    std::copy(p, p + fieldHeaderLen, reinterpret_cast<char *>(&fieldHeader));
    p += fieldHeaderLen;
    boost::fusion::for_each(fieldHeader, big_to_little_endian_converter());

    //boost::fusion::for_each(fieldHeader, print_visitor());
    contentLen -= fieldHeaderLen;

    /// read a field
    FieldType1 field;

    /// print sizeof field
    TRACE() << "sizeof(FieldType1): " << sizeof(field);

    std::copy(p, p + fieldHeader.FieldLen, reinterpret_cast<char *>(&field));
    p += fieldHeader.FieldLen;
    boost::fusion::for_each(field, big_to_little_endian_converter());
    contentLen -= fieldHeader.FieldLen;

    if (mFid1 != fieldHeader.Fid) {
      WARNING() << format("read fid:%#04x != existing fid:%#04x") % fieldHeader.Fid % mFid1;
      continue;
    }

    /// add it to vector
    mFields1.push_back(field);
  }

}

template <typename T> void TID1<T>::print() const {
  BOOST_FOREACH(const FieldType1 &field, mFields1) {
    boost::fusion::for_each(field, print_visitor());
    DEBUG();
  }
}

#endif /* end of include guard: TID1_H_O1BCTT0G */

