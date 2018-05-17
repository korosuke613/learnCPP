// Copyright 2018 Futa HIRAKOBA

// C言語流に、関数内で実変数の値が変わるコードを書け
# include <stdio.h>

// ここに関数funcを作成する。


int main()
{
  int x;

  func(&x);

  printf("%d\n", x); // xの値が1になっている
}
