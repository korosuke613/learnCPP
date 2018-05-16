// Copyright 2018 Futa HIRAKOBA

#ifndef Q3ChildJapanese_H_
#define Q3ChildJapanese_H_

#include "Q3Parent.h"

class Q3ChildAmerican : Q3Parent {
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

  /**
   * ~Q3ChildAmerican
   * @brief cryに泣き言を渡すデストラクタ
   */

  /**
   * cryOut
   * @brief 泣き言を返す
   * @return 泣き言 (std::string)
   */

};


class Q3ChildJapanese : Q3Parent {
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

  /**
   * ~Q3ChildJapanese
   * @brief cryに泣き言を渡すデストラクタ
   */

  /**
   * cryOut
   * @brief 泣き言を返す
   * @return 泣き言 (std::string)
   */
};

#endif  // Q3ChildJapanese_H_
