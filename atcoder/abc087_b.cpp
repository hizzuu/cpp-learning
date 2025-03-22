#include <iostream>
using namespace std;

int main() {
  // a: 500 yen, b: 100 yen, c: 50 yen, x: total amount
  int a, b, c, x;
  cin >> a >> b >> c >> x;

  int count = 0;
  // 各種類の枚数回をfor文を回す
  for (int i = 0; i <= a; i++) {
    for (int j = 0; j <= b; j++) {
      for (int k = 0; k <= c; k++) {
        // それぞれの枚数を全探索する
        if (500 * i + 100 * j + 50 * k == x) {
          count++;
        }
      }
    }
  }

  cout << count << endl;

  return 0;
}