// Copyright 2018 Futa HIRAKOBA

#ifndef Q3Parent_H_
#define Q3Parent_H_

#include <iostream>
#include <string>
#include <utility>
#include <memory>

class Q3Parent {
 private:
  /**
   * isDeath
   * @brief 死の印 (std::shared_ptr<bool>)
   */
  std::shared_ptr<bool> isDeath{};

 protected:
  /**
   * country
   * @brief 国名 (std::string)
   */
  std::string country;

  /**
   * cry
   * @brief 悲鳴が格納される
   */
  std::shared_ptr<std::string> cry{};

 public:
  /**
   * Q3Parent
   * @brief コンストラクタ
   */
  Q3Parent() = default;

  /**
   * Q3Parent
   * @brief 国名を設定するコンストラクタ
   * @param c 国名
   */
  explicit Q3Parent(std::string c) : country(std::move(c)){}

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
  virtual std::string cryOut() = 0;

  /**
   * setDeath
   * @brief 死を証明する印を刻む
   * @param 印 (std::shared_ptr<bool>)
   */
  void setDeath(std::shared_ptr<bool>);
};

#endif  // Q3Parent_H_
