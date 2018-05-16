// Copyright 2018 Futa HIRAKOBA

#include "Human.h"
void Human::say() {
  std::cout << habit << std::endl;
}

void Human::say(int num) {
  for (int i = 0; i < num; i++) {
    say();
  }
}

string Human::getName() {
  return name;
}
