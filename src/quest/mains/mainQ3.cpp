
// Copyright 2018 Futa HIRAKOBA

#include <iostream>
#include "Q3Parent.h"
#include "Q3Children.h"

int main(){
  std::string s = "OK";
  auto cryJa = new std::string();
  auto cryUs = new std::string();

  Q3Parent* japanese = new Q3ChildJapanese(cryJa);
  Q3Parent* american = new Q3ChildAmerican(cryUs);

  auto isDeathJa = new bool();
  auto isDeathUs = new bool();

  japanese->setDeath(isDeathJa);
  american->setDeath(isDeathUs);

  delete(japanese);
  if(! *isDeathJa or *cryJa != "JP:おばぶ！"){
    s = "NG";
  }

  delete(american);
  if(! *isDeathUs or *cryUs != "US:Oh! No!"){
    s = "NG";
  }

  std::cout << std::endl << s << std::endl;
  return 0;
}