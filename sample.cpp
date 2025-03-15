#include <iostream>
using namespace std;

void keisan(int apple, int orange) {
  cout << "リンゴの値段は" << apple << "円です" << endl;
  cout << "オレンジの値段は" << orange << "円です" << endl;
  cout << "リンゴとオレンジの合計は" << apple + orange << "円です" << endl;
}

int keisan2(int apple, int orange) {
  cout << "リンゴの値段は" << apple << "円です" << endl;
  cout << "オレンジの値段は" << orange << "円です" << endl;
  return apple + orange;
}

int main() {
  int apple, orange;
  cout << "リンゴの値段を入力してください" << endl;
  cin >> apple;
  cout << "オレンジの値段を入力してください" << endl;
  cin >> orange;
  keisan(apple, orange);
  cout << "リンゴとオレンジの合計は" << keisan2(apple, orange) << "円です" << endl;
}

