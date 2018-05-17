// Copyright 2018 Futa HIRAKOBA

// C++言語流に、関数内で実変数の値が変わるコードを書け
# include <iostream>

void func(int& x){
  x = 1;
}

int main()
{
  int x;

  // ここに関数funcを作成する.引数はint
  func(x);

  printf("%d\n", x); // xの値が1になっている
}

