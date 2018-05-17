// Copyright 2018 Futa HIRAKOBA

#ifndef Q3ChildJapanese_H_
#define Q3ChildJapanese_H_

#include <memory>
#include "Q3Parent.h"

class Q3ChildAmerican : public Q3Parent {
 public:
  /**
   * (関数名) Q3ChildAmerican
   * @brief コンストラクタ
   */
  Q3ChildAmerican() : Q3Parent("US"){}

  /**
   * (関数名) Q3ChildAmerican
   * @brief 悲鳴ポインタcryにstd::string型のアドレスsを格納するコンストラクタ
   * @param s 悲鳴ポインタ (const std::shared_ptr<std::string>&)
   */
  explicit Q3ChildAmerican(const std::shared_ptr<std::string>& s) : Q3Parent("US") {
    cry = s;
  }

  /**
   * (関数名) ~Q3ChildAmerican
   * @brief *cryに悲鳴を格納するデストラクタ
   */

  /**
   * (関数名) cryOut
   * @brief 悲鳴を返す
   * @return 悲鳴 (std::string)
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
   * (関数名) Q3ChildJapanese
   * @brief 悲鳴ポインタcryにstd::string型のアドレスsを格納するコンストラクタ
   * @param s 悲鳴ポインタ (const std::shared_ptr<std::string>&)
   */
  explicit Q3ChildJapanese(const std::shared_ptr<std::string>& s) : Q3Parent("JP") {
    cry = s;
   }

  /**
   * (関数名) ~Q3ChildJapanese
   * @brief *cryに悲鳴を格納するデストラクタ
   */

  /**
   * (関数名) cryOut
   * @brief 悲鳴を返す
   * @return 悲鳴 (std::string)
   */
  std::string cryOut() override;
};

#endif  // Q3ChildJapanese_H_
