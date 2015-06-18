#ifndef PARAM_H_
#define PARAM_H_

#include <map>

#include "recordreader.h"
#include "logger.h"

class Param : public RecordReader {
public:
  Param();
  const std::string& getInDataPath() const;
  const std::string& getXtpXmlPath() const;
public: /// getters


protected: /// virtual function
  virtual void registerRecord();
  virtual void postProcess();

private:
  bool validate() const;

private:
  string_record_t mInDataPath;
  string_record_t mXtpXmlPath;
};

#endif /* PARAM_H_ */
