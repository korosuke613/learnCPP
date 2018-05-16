# シープラクエスト ~クラス編~

## 準備
必要なコマンド
- `g++` (>=4.9)
- `cmake` (>=3.5)

## 流れ
**Q1を解く場合**
1. `src/quest/question/Q1.h`を完成させる！
2. `src/quest`に移動する。
3. `make exeQ1`を実行する。
    - 無事にコンパイルできたら *4.* に進む。
    - コンパイルエラーが発生したら、ソースコードを修正する。
4. `./exeQ1`を実行する。
    - `OK`が出力されたら**クリアー！**
    - `NG`が出力されたら、ソースコードを修正する。
5. そして伝説へ・・・！

## 設問
### Q1
インスタンス変数もインスタンスメソッドも何も持たないクラス`Q1`を作成せよ。

**使うファイル** `Q1.h`

### Q2
`Q2.h`のコメントを参考に、かけ算をするメソッド`multiple`を持つクラス`Q2`を作成せよ。

**使うファイル** `Q2.h`, `Q2.cpp`

### Q3
`Q3Parent.h`と`Q3Children.h`のコメントを参考に、
delete()されるときに悲鳴を返すクラス`Q3Parent`と、それを継承した`Q3ChildJapanese`、
`Q3ChildAmerican`を作成せよ。

なお、それぞれのクラスは以下のように悲鳴を返す。
- Q3ChildJapanese-> **JP:おばぶ！**
- Q3ChildAmerican-> **US:Oh! No!**


使うファイル `Q3Parent.h`, `Q3Parent.cpp`, `Q3Children.h`, `Q3Children.cpp`