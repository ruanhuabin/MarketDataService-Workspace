#ifndef TID2_H_SF2BAQ0I
#define TID2_H_SF2BAQ0I



#endif /* end of include guard: TID2_H_SF2BAQ0I */
#include <vector>
#include <boost/fusion/algorithm.hpp>
#include <boost/fusion/include/algorithm.hpp>
#include <boost/foreach.hpp>

#include "TID.h"
#include "EndianConverter.h"

template <typename T1, typename T2>
class TID2 : public TID
{
public:
  typedef T1 FieldType1;
  typedef T2 FieldType2;

public:
  explicit TID2(const XTPHeader &xtpHeader, uint16_t fid1, uint16_t fid2) :
    TID(xtpHeader), mFid1(fid1), mFid2(fid2) {}
  void read(const char *buffer);
  void process() {}
  void print() const;

private:
  const uint16_t          mFid1;
  const uint16_t          mFid2;
  std::vector<FieldType1> mFields1;
  std::vector<FieldType2> mFields2;
};

template <typename T1, typename T2> void TID2<T1, T2>::read(const char *buffer) {
  const char *p = buffer;
  int contentLen = mXtpHeader.ContentLength;
  while (contentLen > 0) {

    /// read field header
    FidHeader fieldHeader;
    int fieldHeaderLen = sizeof(fieldHeader);
    std::copy(p, p + fieldHeaderLen, reinterpret_cast<char *>(&fieldHeader));
    p += fieldHeaderLen;
    //boost::fusion::for_each(fieldHeader, tid2::big_to_little_endian_converter());
    boost::fusion::for_each(fieldHeader, big_to_little_endian_converter());
    contentLen -= fieldHeaderLen;

    /// check fid
    if (!(fieldHeader.Fid == mFid1 || fieldHeader.Fid == mFid2)) {
      WARNING() << format("read fid:%#04x != existing (%#04x || %#04x)") %
                   fieldHeader.Fid % mFid1 % mFid2;

      p          += fieldHeader.FieldLen;
      contentLen -= fieldHeader.FieldLen;
      continue;
    }

    /// read a field
    if (fieldHeader.Fid == mFid1) {
      FieldType1 field;
      std::copy(p, p + fieldHeader.FieldLen, reinterpret_cast<char *>(&field));
      p += fieldHeader.FieldLen;
      boost::fusion::for_each(field, big_to_little_endian_converter());
      contentLen -= fieldHeader.FieldLen;

      /// add it to vector
      mFields1.push_back(field);
    } else if (fieldHeader.Fid == mFid2) {
      FieldType2 field;
      std::copy(p, p + fieldHeader.FieldLen, reinterpret_cast<char *>(&field));
      p += fieldHeader.FieldLen;
      boost::fusion::for_each(field, big_to_little_endian_converter());
      contentLen -= fieldHeader.FieldLen;

      /// add it to vector
      mFields2.push_back(field);
    }
  }

}

template <typename T1, typename T2> void TID2<T1, T2>::print() const {
  BOOST_FOREACH(const FieldType1 &field, mFields1) {
    boost::fusion::for_each(field, print_visitor());
  }

  BOOST_FOREACH(const FieldType2 &field, mFields2) {
    boost::fusion::for_each(field, print_visitor());
  }

  DEBUG();
}

