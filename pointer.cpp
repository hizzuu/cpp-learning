#include <iostream>
using namespace std;

void keisan(int *x) {
  *x += 5;
}

int main (void) {
  int apple = 10;
  // ポインタ変数の宣言
  int *p;
  // こっちでもいい
  // int* p;

  // *（実態）&（アドレス）
  // appleのアドレス（ポインタ）をpに代入
  p = &apple;


  // 実態を表示
  // printf("%d", *p);
  // アドレスを表示
  printf("%p", p);
  cout << endl;
  printf("%p", &apple);

  keisan(&apple);
  cout << endl;

  cout << apple << endl;

  return 0;
}
