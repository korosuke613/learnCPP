// Copyright 2018 Futa HIRAKOBA

#ifndef Q3ChildJapanese_H_
#define Q3ChildJapanese_H_

#include <memory>
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
  ~Q3ChildAmerican() override {
    *cry = cryOut();
  }

  /**
   * cryOut
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
   * Q3ChildJapanese
   * @brief 悲鳴ポインタcryにcを格納するコンストラクタ
   * @param c 悲鳴ポインタ (const std::shared_ptr<std::string>&)
   */
  explicit Q3ChildJapanese(const std::shared_ptr<std::string>& c) : Q3Parent("JP"){
    cry = c;
  }

  /**
   * ~Q3ChildAmerican
   * @brief *cryに悲鳴を格納するデストラクタ
   */
  ~Q3ChildJapanese() override {
    *cry = cryOut();
  }

  /**
   * cryOut
   * @brief 悲鳴を返す
   * @return 悲鳴 (std::string)
   */
  std::string cryOut() override;
};

#endif  // Q3ChildJapanese_H_
