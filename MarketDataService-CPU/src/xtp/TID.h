#ifndef TID_H_QASH92HR
#define TID_H_QASH92HR

#include "XTPHeader.h"
#include "EndianConverter.h"
#include "logger.h"
#include "printVisitor.h"

class TID
{
public:
  explicit TID(const XTPHeader &xtpHeader);
  virtual ~TID ();
  virtual void read(const char *buffer) = 0;
  virtual void process() = 0;
  virtual void print() const = 0;

protected:
  const XTPHeader &mXtpHeader;
};


TID *createTid(const XTPHeader &xtpHeader );

#endif /* end of include guard: TID_H_QASH92HR */
