#include "Package.h"

const std::string& Field::getMaxOccur() const {
  return mMaxOccur;
}

void Field::setMaxOccur(const std::string& maxOccur) {
  mMaxOccur = maxOccur;
}

const std::string& Field::getMinOccur() const {
  return mMinOccur;
}

void Field::setMinOccur(const std::string& minOccur) {
  mMinOccur = minOccur;
}

const std::string& Field::getName() const {
  return mName;
}

Field::Field(const std::string& name, const std::string minOccur,
    const std::string maxOccur) :
      mName(name), mMinOccur(minOccur), mMaxOccur(maxOccur)
{
}

void Field::setName(const std::string& name) {
  mName = name;
}

Package::Package(const std::string& name, const std::string& tid,
    const std::string& comment, const std::string& usage) :
      mName(name), mTid(tid), mComment(comment), mUsage(usage)
{
}

void Package::addField(const Field& field) {
  mFields.push_back(field);
}

const std::string& Package::getComment() const {
  return mComment;
}

void Package::setComment(const std::string& comment) {
  mComment = comment;
}

const std::list<Field>& Package::getFields() const {
  return mFields;
}

const std::string& Package::getName() const {
  return mName;
}

void Package::setName(const std::string& name) {
  mName = name;
}

const std::string& Package::getTid() const {
  return mTid;
}

void Package::setTid(const std::string& tid) {
  mTid = tid;
}

const std::string& Package::getUsage() const {
  return mUsage;
}

void Package::setUsage(const std::string& usage) {
  mUsage = usage;
}
