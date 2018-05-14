//
// Created by Futa HIRAKOBA on 2018/05/15.
//

#ifndef PANDORA_HUMAN_H
#define PANDORA_HUMAN_H

#include <iostream>
#include <string>
#include <utility>
#include "AbstractHuman.h"

using std::string;  // ここusingディレクティブ

// ここ継承
class Human : public AbstractHuman {
 public:
  Human() = default;

  ~Human() = default;

  explicit Human(string name_, string habit_ = "not implement")
      : name(move(name_)), habit(move(habit_)) {}  // ここexplicit

  /**
   * @brief 魂の叫びをとどろかせる
   * @param 必要なモノなど無い
   * @return 飛ぶ鳥跡を濁さず
   */
  void say() override;  // ここオーバーライド

  /**
   * @brief 魂の叫びを飽きるまでとどろかせる
   * @param 飽きるまでの回数
   * @return 飛ぶ鳥跡を濁さず
   */
  void say(int);  // ここオーバーロード

  /**
   * @brief nameのgetter
   * @param なし
   * @return name
   */
  string getName();  // ここゲッター

 private:
  string name;  // ここプライベートメンバ
  string habit;
};

#endif //PANDORA_MIYAJI_H
