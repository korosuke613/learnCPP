// Copyright 2018 Futa HIRAKOBA

#ifndef Q2_H_
#define Q2_H_

class Q2 {
 private:
  /**
   * multiple_num (int)
   * @brief かける数
   */
  int multiple_num;

 public:
  /**
   * Q2
   * @brief デフォルトコンストラクタ
   */
  Q2() = default;

  /**
   * Q2
   * @brief mを初期化するコンストラクタ
   * @param m multiple_num
   */
  explicit Q2(int m):multiple_num(m){}

  /**
   * multiple
   * @brief multiple_numとxの積を返す。
   * @param x (int)
   * @return multiple_numとxの積 (const int)
   */
  const int multiple(int x);
};

#endif  // Q2_H_
