#ifndef PACKAGE_H_NXJNJYZQ
#define PACKAGE_H_NXJNJYZQ

#include <string>
#include <list>

class Field {
public:
  Field(const std::string &name, const std::string minOccur, const std::string maxOccur);

  const std::string& getName() const;
  const std::string& getMinOccur() const;
  const std::string& getMaxOccur() const;

  void setName(const std::string& name);
  void setMinOccur(const std::string& minOccur);
  void setMaxOccur(const std::string& maxOccur);

private:
  std::string mName;
  std::string mMinOccur;
  std::string mMaxOccur;
};

class Package
{
public:
  Package (const std::string &name, const std::string &tid,
           const std::string &comment, const std::string &usage);

  void addField(const Field &field);

  const std::string& getComment() const;
  const std::string& getName() const;
  const std::string& getTid() const;
  const std::string& getUsage() const;
  const std::list<Field>& getFields() const;

  void setComment(const std::string& comment);
  void setName(const std::string& name);
  void setTid(const std::string& tid);
  void setUsage(const std::string& usage);

private:
  std::string mName;
  std::string mTid;
  std::string mComment;
  std::string mUsage;
  std::list<Field> mFields;
};

#endif /* end of include guard: PACKAGE_H_NXJNJYZQ */
