// Copyright 2018 Futa HIRAKOBA

#ifndef Q3Parent_H_
#define Q3Parent_H_

#include <iostream>
#include <string>
#include <utility>
class Q3Parent {
 private:
  /**
   * isDeath
   * @brief 死の印 (bool*)
   */
  bool* isDeath{};

 protected:
  /**
   * country
   * @brief 国名 (std::string)
   */
  std::string country;

  /**
   * cry
   * @brief 泣き言が格納される
   */
  std::string* cry{};

 public:
  /**
   * Q3Parent
   */
  Q3Parent() = default;

  /**
   * Q3Parent
   * @brief 国名を設定するコンストラクタ
   * @param c 国名
   */

  /**
   * ~Q3Parent
   * @brief *isDeathを真にする。
   */
  virtual ~Q3Parent(){
    *isDeath = true;
  }

  /**
   * cryOut
   * @brief 泣き言を返す純粋仮想関数
   * @return 泣き言 (std::string)
   */

  /**
   * setDeath
   * @brief 死を証明する印を刻む
   * @param 印 (bool*)
   */
  void setDeath(bool*);
};

#endif  // Q3Parent_H_