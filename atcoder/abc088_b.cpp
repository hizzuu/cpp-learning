#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> cordNumbers(n);
  int alice = 0;
  int bob = 0;

  for (int i = 0; i < n; i++) {
    cin >> cordNumbers.at(i);
  }

  sort(cordNumbers.begin(), cordNumbers.end(), greater<int>());

  while (cordNumbers.size() > 0)
  {
    alice += cordNumbers.at(0);
    cordNumbers.erase(cordNumbers.begin());
    if (cordNumbers.size() > 0)
    {
      bob += cordNumbers.at(0);
      cordNumbers.erase(cordNumbers.begin());
    }
  }

  cout << alice - bob << endl;

  return 0;
}