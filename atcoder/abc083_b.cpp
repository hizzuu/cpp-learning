#include <iostream>
using namespace std;


int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    int num = i;
    int digit_sum = 0;
    // ここで桁数をずらしながら各桁の和を計算
    while (num > 0) {
      // ここで一桁目を取り出して足す
      digit_sum += num % 10;
      // ここで一桁分ずらす（小数点切り捨てなのでnumが1桁の場合0.になるから0になる）
      num /= 10;
    }
    if (a <= digit_sum && digit_sum <= b) {
      sum += i;
    }
  }

  cout << sum << endl;

  return 0;
}