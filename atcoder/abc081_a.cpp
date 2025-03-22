#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  int count = 0;
  bool contenue = true;
  cin >> n;
  vector<int> as(n);
  for (int i = 0; i < n; i++) {
    cin >> as.at(i);
    if(as.at(i) % 2 != 0) {
      cout << count << endl;
      return 0;
    }
  }

  while (contenue){
    for (int i = 0; i < n; i++) {
      as.at(i) /= 2;
      if (as.at(i) % 2 != 0) {
        contenue = false;
      }
    }
    count ++;
  };

  cout << count << endl;

  return 0;
}