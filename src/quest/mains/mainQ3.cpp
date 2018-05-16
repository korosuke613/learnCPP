
// Copyright 2018 Futa HIRAKOBA

#include <iostream>
#include <string>
#include <memory>
#include "Q3Parent.h"
#include "Q3Children.h"

int main(){
  std::string s = "OK";
  std::shared_ptr<std::string> cryJa = std::make_shared<std::string>();
  std::shared_ptr<std::string> cryUs = std::make_shared<std::string>();
  std::shared_ptr<bool> isDeathJa = std::make_shared<bool>();
  std::shared_ptr<bool> isDeathUs = std::make_shared<bool>();

  Q3Parent* japanese = new Q3ChildJapanese(cryJa);
  Q3Parent* american = new Q3ChildAmerican(cryUs);

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

  std::cout << *cryJa << std::endl;
  std::cout << *cryUs << std::endl;
  std::cout << std::endl << s << std::endl;

  return 0;
}