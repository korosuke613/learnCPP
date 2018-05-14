//
// Created by Futa HIRAKOBA on 2018/05/15.
//

#include "TeachingAssistant.h"

void TeachingAssistant::addMember(const string &name) {
  member[name] = Human(name);
}

void TeachingAssistant::addMember(const string &name, const string &habit) {
  member[name] = Human(name, habit);
}

void TeachingAssistant::addMember(Human &human) {
  member[human.getName()] = human;
}

void TeachingAssistant::sayMember(const string &name) {
  member[name].say();
}
void TeachingAssistant::allSayMember() {
  for(auto&& m: member){  // ここrange based for
    Human human = m.second;
    human.say();
  }
}
