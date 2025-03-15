//hello3.cpp
#include <iostream> // 入出力ストリームを使うためのヘッダファイル
#include <iomanip> // setwを使うためのヘッダファイル
// // #include <stdio.h> // printfを使うためのヘッダファイル
using namespace std; // 名前空間stdを使う、ない場合 std::cout などと書く必要がある

// int これは関数の戻り値の型を示す、intは整数を返すことを示す
int main()
{
  cout << "hello" << endl; // hello と改行を出力 endlは改行を表す \nでも可

  cout << 1 + 2 << endl; // 1 + 2 の結果を出力

  cout << 100 << "円" << endl; // 100円と出力

  // 四則演算
  cout << 10 + 3 << "\n";
  cout << 10 - 3 << "\n";
  cout << 10 * 3 << "\n";
  cout << 10 / 3 << "\n";
  cout << 10 % 3 << "\n";
  
  // printfを使って出力
  printf("hello\n"); // printfを使ってhelloと改行を出力
  printf("%d\n", 1 + 2); // printfを使って1 + 2の結果を出力
  printf("%f\n", 1.5); // printfを使って1.5を出力

  int r;
  // 8byte
  double pi;
  r = 3;
  pi = 3.14;
  cout << r * r * pi << endl;
  cout << (int)pi << endl; // キャスト演算子（3）

  // メモリIC(1byte（1024 ）ビルディングブロック)
  int apple = 10; // int = 4byte（2147483647）

  apple += 5;
  apple -= 5;
  apple *= 5;
  apple /= 5;
  apple %= 5;

  // インクリ、デクリ
  apple++;
  apple--;

  cout << apple << endl;

  // 1byte
  string x = "hello";
  cout << x << endl;

  const int cst = 10;
  // cst = 25; // エラー
  cout << cst << endl;

  // // 入力
  // int y;
  // cin >> y;
  // cout << y << endl;

  // // 複数の入力
  // int one, two;
  // cin >> one >> two;
  // cout << one << two << endl;


  if (10 ) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }

  if (1) cout << "true2" << endl;


  // int num;
  // cout << "数字を入力してください" << endl;
  // cin >> num;
  // if (num % 2 == 0) {
  //   cout << "偶数です" << endl;
  // } else {
  //   cout << "奇数です" << endl;
  // }

  // && || !

  switch(1) {
    case 1:
      cout << "1" << endl;
      break;
    case 2:
      cout << "2" << endl;
      break;
    default:
      cout << "default" << endl;
  }

  // int index;

  // for (index = 0; index < 5; index++) {
  //   cout << index << endl;
  // }

  int index1, index2;
  for (index1 = 1; index1 <= 9; index1++) {
    cout << index1 << "の段";
    for (index2 = 1; index2 <= 9; index2++) {
      cout << setw(5) << index1 * index2;
    }
    cout << endl;
  }

  int whinum = 1;
  int whicount= 0;
  while (whinum <= 1000) {
    whinum *= 2;
    whicount++;
    cout << whicount << endl;
  }

  int dowhile = 1;
  int dowhilecount = 0;
  do {
    cout << "dowhile" << endl;
    dowhile *= 2;
    dowhilecount++;
    cout << dowhilecount << endl;
  } while (dowhile <= 1000);

  return 0; // 正常終了を示す
}
