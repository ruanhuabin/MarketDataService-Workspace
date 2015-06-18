/*
 * XtpXmlReader.cpp
 *
 *  Created on: May 16, 2015
 *      Author: rice
 */

#include "XtpXmlReader.h"
#include "logger.h"

#include <sstream>
#include <boost/foreach.hpp>
#include <boost/smart_ptr/shared_ptr.hpp>
#include <boost/make_shared.hpp>

namespace {
template <typename T>
T hexstring_to_T(const std::string &hexstr) {
  T ret;
  std::stringstream ss;
  ss << std::hex << hexstr;
  ss >> ret;

  return ret;
}
} /// end of anonymous name space

XtpXmlReader::XtpXmlReader(const std::string& xmlPath) : mXmlPath(xmlPath)
{
  read_xml(mXmlPath, mPtree);
}

void XtpXmlReader::readPackages() {
  using namespace boost::property_tree;
  const std::string attr_set("<xmlattr>");
  const ptree &packages = mPtree.get_child("XTP.packages");

  DEBUG() << "total number of package definition: " << packages.size();

  mPackages.clear();

  /// parse each package
  BOOST_FOREACH(const ptree::value_type &onePackage, packages) {
    boost::shared_ptr<Package> currPkg;

    BOOST_FOREACH(const ptree::value_type &packageContent, onePackage.second) {
      if (packageContent.first == attr_set) { /// attributes of current package
        const ptree &attr = packageContent.second;

        currPkg = boost::make_shared<Package>(attr.get<std::string>("name"),
                                              attr.get<std::string>("tid"),
                                              attr.get<std::string>("comment"),
                                              attr.get<std::string>("usage"));
      } else { /// fields
        BOOST_FOREACH(const ptree::value_type &fieldContent, packageContent.second) {
          const ptree &attr = fieldContent.second;
          Field fld(attr.get<std::string>("name"),
                    attr.get<std::string>("minOccur"),
                    attr.get<std::string>("maxOccur"));

          /// add the field to current package
          currPkg->addField(fld);
        }
      }
    } /// iterate over current package

    /// append the current package to the package vector
    mPackages.push_back(*currPkg);

  } /// iterate all packages
}

void XtpXmlReader::printPackages() const {
  DEBUG() << "<packages>";
  BOOST_FOREACH(const Package &pkg, mPackages) {
    DEBUG() << format("  <package name=\"%s\" tid=\"%s\" comment=\"%s\" usage=\"%s\">")
               % pkg.getName().c_str() % pkg.getTid().c_str()
               % pkg.getComment().c_str() % pkg.getUsage().c_str();

    BOOST_FOREACH(const Field &field, pkg.getFields()) {
      DEBUG() << format("    <field name=\"%s\" minOccur=\"%s\" maxOccur=\"%s\"/>")
              % field.getName().c_str() % field.getMinOccur().c_str()
              % field.getMaxOccur().c_str();
    }

    DEBUG() << "  </package>";
  }
  DEBUG() << "</packages>";
}
