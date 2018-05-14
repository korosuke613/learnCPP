//
// Created by Futa HIRAKOBA on 2018/05/15.
//

#ifndef PANDORA_TEACHINGASSISTANT_H
#define PANDORA_TEACHINGASSISTANT_H

#include <string>
#include <unordered_map>
#include "Human.h"

using std::string;  // ここusingディレクティブ

class TeachingAssistant {
 public:
  TeachingAssistant() = default;

  /**
   * @brief メンバーを追加する。
   * @param 名前
   * @return なし
   */
  void addMember(const string &);

  /**
   * @brief メンバーを追加する。ついでに口癖も
   * @param 名前, 口癖
   * @return なし
   */
  void addMember(const string &, const string &);

  /**
   * @brief メンバーを追加する。
   * @param Human
   * @return なし
   */
  void addMember(Human &);

  /**
   * @brief メンバーが名言を叫ぶ。
   * @param メンバー名
   * @return なし
   */
  void sayMember(const string &);

  /**
   * @brief 全てのメンバーが名言を叫ぶ。
   * @param メンバー名
   * @return なし
   */
  void allSayMember();
 private:
  std::unordered_map<string, Human> member;  // ここコンテナ
};

#endif //PANDORA_TEACHINGASSISTANT_H
