// Copyright 2018 Futa HIRAKOBA

// C++言語流に、関数内で実変数の値が変わるコードを書け
# include <iostream>

// ここに関数funcを作成する。
void func(int& x){
  x = 1;
}

int main()
{
  int x;

  func(x);

  printf("%d\n", x); // xの値が1になっている
}

