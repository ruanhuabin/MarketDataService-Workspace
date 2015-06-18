/*
 * XtpXmlReader.h
 *
 *  Created on: May 16, 2015
 *      Author: rice
 */

#ifndef XTPXMLREADER_H_
#define XTPXMLREADER_H_

#include <string>
#include <map>
#include <vector>
#include <boost/integer.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>

#include "Package.h"

using boost::uint32_t;

class XtpXmlReader {
public:
  explicit XtpXmlReader(const std::string &xmlPath);
  void readPackages();
  void printPackages() const;

private:
  std::string mXmlPath;
  boost::property_tree::ptree mPtree;
  std::vector<Package> mPackages;

//  std::map<uint32_t, Package> mXtpPackageDict;

};


#endif /* XTPXMLREADER_H_ */
