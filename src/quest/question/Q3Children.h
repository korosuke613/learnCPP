// Copyright 2018 Futa HIRAKOBA

#ifndef Q3ChildJapanese_H_
#define Q3ChildJapanese_H_

#include <memory>
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
   * @brief 悲鳴ポインタcryにcを格納するコンストラクタ
   * @param c 悲鳴ポインタ (const std::shared_ptr<std::string>&)
   */
  explicit Q3ChildAmerican(const std::shared_ptr<std::string>& c) : Q3Parent("US"){
    cry = c;
  }

  /**
   * ~Q3ChildAmerican
   * @brief *cryに悲鳴を格納するデストラクタ
   */

  /**
   * cryOut
   * @brief 悲鳴を返す
   * @return 悲鳴 (std::string)
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
   * @brief 悲鳴ポインタcryにcを格納するコンストラクタ
   * @param c 悲鳴ポインタ (const std::shared_ptr<std::string>&)
   */
   explicit Q3ChildJapanese(const std::shared_ptr<std::string>& c) : Q3Parent("JP"){
     cry = c;
   }

  /**
   * ~Q3ChildJapanese
   * @brief *cryに悲鳴を格納するデストラクタ
   */

  /**
   * cryOut
   * @brief 悲鳴を返す
   * @return 悲鳴 (std::string)
   */
};

#endif  // Q3ChildJapanese_H_
