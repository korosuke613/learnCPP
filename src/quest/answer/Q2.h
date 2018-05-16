// Copyright 2018 Futa HIRAKOBA

#ifndef Q2_H_
#define Q2_H_

class Q2 {
 private:
  /**
   * multiple_num (int)
   */
  int multiple_num;

 public:
  /**
   * @brief デフォルトコンストラクタ
   */
  Q2() = default;

  /**
   * @brief mを初期化するコンストラクタ
   * @param m multiple_num
   */
  Q2(int m):multiple_num(m){}

  /**
   * multiple
   * @brief multiple_numとxの積を返す。
   * @param x (int)
   * @return multiple_numとxの積 (const int)
   */
  const int multiple(int x);
};

#endif  // Q2_H_
