// Copyright 2018 Futa HIRAKOBA

#ifndef Q3Parent_H_
#define Q3Parent_H_

#include <iostream>
#include <string>
#include <utility>
class Q3Parent {
 private:
  bool* isDeath{};
 protected:
  std::string apostasy;
 public:
  Q3Parent() = default;
  explicit Q3Parent(const std::string& a) : apostasy(a + ":"){}
  virtual ~Q3Parent(){
    *isDeath = true;
  }
  virtual std::string cryOut() = 0;
  void setDeath(bool*);
};

#endif  // Q3Parent_H_
