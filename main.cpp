#include "Human.h"
#include "TeachingAssistant.h"

int main() {
  Human miyaji{"Toshihiro MIYAJI", "ねむりんぐすぱーてぃぴーぽー"};
  Human beeno{"Ryota FUKUOKA"};

  miyaji.say(5);
  beeno.say();

  TeachingAssistant ta{};

  ta.addMember("Ryo SAITO");
  ta.addMember("Futa HIRAKOBA", "ほへ〜");
  ta.addMember(miyaji);

  ta.sayMember("Futa HIRAKOBA");

  ta.allSayMember();
  return 0;
}