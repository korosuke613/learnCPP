// Copyright 2018 Futa HIRAKOBA

#ifndef ABSTRACTHUMAN_H_
#define ABSTRACTHUMAN_H_

namespace LearnCpp {

class AbstractHuman {
 public:
  /**
   * @brief 人間は誰しも口癖を持っているはず。
   * @param なし
   * @return なし
   */
  virtual void say() = 0;  // ここ純粋仮想関数
};

}
#endif  // ABSTRACTHUMAN_H_
