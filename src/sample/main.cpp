// Copyright 2018 Futa HIRAKOBA

#include "Human.h"
#include "TeachingAssistant.h"

int main() {
  LearnCpp::Human miyaji{"Toshihiro MIYAJI", "ねむりんぐすぱーてぃぴーぽー"};
  LearnCpp::Human beeno{"Ryota FUKUOKA"};

  miyaji.say(5);
  beeno.say();

  LearnCpp::TeachingAssistant ta;

  ta.addMember("Ryo SAITO");
  ta.addMember("Futa HIRAKOBA", "ほへ〜");
  ta.addMember(miyaji);

  ta.sayMember("Futa HIRAKOBA");

  ta.allSayMember();
  return 0;
}
