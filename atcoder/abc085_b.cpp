#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  // setを使用して重複を自動的に除去
  set<int> d;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    d.insert(x);
  }

  // setのサイズが異なる直径の鏡餅の数
  cout << d.size() << endl;

  return 0;
}
