#include <iostream>
using namespace std;

int main() {
  int n, y;
  cin >> n >> y;
  
  // iループの範囲を制限
  for (int i = 0; i <= min(n, y/10000); i++) {
      // jループの範囲を制限
      int max_j = min(n-i, (y-10000*i)/5000);
      for (int j = 0; j <= max_j; j++) {
          int k = n - i - j;
          if (k >= 0 && 10000*i + 5000*j + 1000*k == y) {
              cout << i << " " << j << " " << k << endl;
              return 0;
          }
      }
  }
  
  cout << "-1 -1 -1" << endl;
  return 0;
}
