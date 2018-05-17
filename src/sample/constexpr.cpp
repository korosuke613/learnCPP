// Copyright 2018 Futa HIRAKOBA

#include <iostream>
#include <string>

int func() {
  constexpr int N = 20;

  return N;
}

int main() {
  constexpr int N = 10;

  std::cout << N << std::endl;
  std::cout << func() << std::endl;

  return 0;
}
