// Copyright 2018 Futa HIRAKOBA

// C言語流に、int型をdouble型にキャストせよ
#include <stdio.h>

double func(double x){
  x += 0.1;
  return x;
}

int main(){
  int x = 1;

  // 関数funcにxを渡し、戻り値を変数xxに格納する
  double xx = func((double)x);

  printf("%lf\n", xx);  // xxの値が1.1になっている。
}