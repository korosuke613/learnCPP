// Copyright 2018 Futa HIRAKOBA

#include "Q2.h"
#include <iostream>
#include <string>

int main(void) {
  Q2 q2{3};
  std::string s;

  if (q2.multiple(10) != 30) {
    s = "NG";
  } else {
    s = "OK";
  }
  std::cout << s << std::endl;
  return 0;
}