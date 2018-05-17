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
   * (変数名) isDeath
   * @brief 死の印 (std::shared_ptr<bool>)
   */
  std::shared_ptr<bool> isDeath{};

 protected:
  /**
   * (変数名) country
   * @brief 国名 (std::string)
   */
  std::string country;

  /**
   * (変数名) cry
   * @brief 悲鳴が格納される
   */
  std::shared_ptr<std::string> cry{};

 public:
  /**
   * (関数名) Q3Parent
   * @brief コンストラクタ
   */
  Q3Parent() = default;

  /**
   * (関数名) Q3Parent
   * @brief 国名(country)を設定するコンストラクタ
   * @param c 国名(std::string)
   */
  explicit Q3Parent(std::string c) : country(std::move(c)){}

  /**
   * (関数名) ~Q3Parent
   * @brief *isDeathを真にする。
   */
  virtual ~Q3Parent(){
    *isDeath = true;
  }

  /**
   * (関数名) cryOut
   * @brief 悲鳴を返す純粋仮想関数
   * @return 悲鳴 (std::string)
   */
  virtual std::string cryOut() = 0;

  /**
   * (関数名) setDeath
   * @brief isDeathにアドレスを格納する。
   * @param bool型のアドレス (std::shared_ptr<bool>)
   */
  void setDeath(std::shared_ptr<bool>);
};

#endif  // Q3Parent_H_
