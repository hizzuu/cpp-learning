#include <iostream>
using namespace std;


void hello() {
  cout << "hello" << endl;
}

// メモリスペースxを定義
// 指定された引数のメモリをコピーして渡される
void nibai(int x) {
  cout << x * 2 << endl;
}

// 関数のプロトタイプ宣言
void hello2();

int main() {
  hello();
  hello2();
  // これのコピーが渡される
  nibai(10);
  return 0;
}

void hello2() {
  cout << "hello2" << endl;
}
