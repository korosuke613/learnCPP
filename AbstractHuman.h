//
// Created by Futa HIRAKOBA on 2018/05/15.
//

#ifndef PANDORA_ABSTRACTHUMAN_H
#define PANDORA_ABSTRACTHUMAN_H

class AbstractHuman {
 public:
  // ここ純粋仮想関数

  /**
   * @brief 人間は誰しも口癖を持っているはず。
   * @param なし
   * @return なし
   */
  virtual void say() = 0;
};

#endif //PANDORA_ABSTRACTHUMAN_H
