// Copyright 2018 Futa HIRAKOBA

#include <iostream>
#include <string>

std::string x = "(1) This is global variable.";

namespace scope{
  std::string x = "(2) This is scope variable.";
}

int main() {
  std::cout << x << std::endl;  // 問1

  std::string x = "(3) This is local variable.";

  std::cout << x << std::endl;  // 問2

  {
    std::string x = "(4) This is super local variable.";
    std::cout << x << std::endl;  // 問3
    std::cout << ::x << std::endl;  // 問4
  }

}