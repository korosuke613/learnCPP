// Copyright 2018 Futa HIRAKOBA

#ifndef Q3ChildJapanese_H_
#define Q3ChildJapanese_H_

#include "Q3Parent.h"

class Q3ChildAmerican : public Q3Parent {
 public:
  /**
   * Q3ChildAmerican
   * @brief コンストラクタ
   */
  Q3ChildAmerican() : Q3Parent("US"){}

  /**
   * Q3ChildAmerican
   * @brief 泣き言ポインタを格納
   * @param c 泣き言ポインタ
   */
  explicit Q3ChildAmerican(std::string* c) : Q3Parent("US"){
    cry = c;
  }

  /**
   * ~Q3ChildAmerican
   * @brief cryに泣き言を渡すデストラクタ
   */
  ~Q3ChildAmerican() override {
    *cry = cryOut();
  }

  /**
   * cryOut
   * @brief 泣き言を返す
   * @return 泣き言 (std::string)
   */
  std::string cryOut() override;
};


class Q3ChildJapanese : public Q3Parent {
 public:
  /**
   * Q3ChildJapanese
   * @brief コンストラクタ
   */
  Q3ChildJapanese() : Q3Parent("JP"){}

  /**
   * Q3ChildJapanese
   * @brief 泣き言ポインタを格納
   * @param c 泣き言ポインタ
   */
  explicit Q3ChildJapanese(std::string* c) : Q3Parent("JP"){
    cry = c;
  }

  /**
   * ~Q3ChildJapanese
   * @brief cryに泣き言を渡すデストラクタ
   */
  ~Q3ChildJapanese() override {
    *cry = cryOut();
  }

  /**
   * cryOut
   * @brief 泣き言を返す
   * @return 泣き言 (std::string)
   */
  std::string cryOut() override;
};

#endif  // Q3ChildJapanese_H_
