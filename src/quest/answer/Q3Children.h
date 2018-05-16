// Copyright 2018 Futa HIRAKOBA

#ifndef Q3ChildJapanese_H_
#define Q3ChildJapanese_H_

#include "Q3Parent.h"

class Q3ChildAmerican : public Q3Parent {
 private:
  std::string* cry{};
 public:
  Q3ChildAmerican() : Q3Parent("US"){}
  explicit Q3ChildAmerican(std::string* c) : Q3Parent("US"), cry(c) {}
  ~Q3ChildAmerican() override {
    *cry = cryOut();
  }
  std::string cryOut() override;
};

class Q3ChildJapanese : public Q3Parent {
 private:
  std::string* cry{};
 public:
  Q3ChildJapanese() : Q3Parent("JP"){}
  explicit Q3ChildJapanese(std::string* c) : Q3Parent("JP"), cry(c) {}
  ~Q3ChildJapanese() override {
    *cry = cryOut();
  }
  std::string cryOut() override;
};

#endif  // Q3ChildJapanese_H_
