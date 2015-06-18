#include "Param.h"

Param::Param() : mInDataPath()
{
}


void Param::registerRecord() {
  ////////////////////////////////////////////////////////////////////////////////
  /// IMPORTANT:  IF YOU ADD OR CHANGE VALUES IN THIS SECTION, PLEASE UPDATE THE
  ///             CONFIG TEMPLATE FILES IN THE CONFIG DIRECTORY.
  ///             OTHERWISE, THE EXISTING CONFIG FILES WILL CONFUSE USERS
  ////////////////////////////////////////////////////////////////////////////////

  addRecord(mInDataPath.reset("in_data_path", "."));
  addRecord(mXtpXmlPath.reset("xtp_xml_path", "."));
}

bool Param::validate() const {
  bool allValid = true;

  return allValid;
}

void Param::postProcess() {
  if (!validate()) {
    exit(EXIT_FAILURE);
  }
}

const std::string& Param::getInDataPath() const {
  return mInDataPath.value;
}

const std::string &Param::getXtpXmlPath() const {
  return mXtpXmlPath.value;
}
