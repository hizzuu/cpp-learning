#include <iostream>
using namespace std;

int main() {
  // 4byte * 5 = 20byte
  // int array[5] = {1, 2, 3, 4, 5};
  // cout << array[0] << endl;
  // cout << array[1] << endl;
  // cout << array[2] << endl;
  // cout << array[3] << endl;
  // cout << array[4] << endl;

  // int array2[5];
  // array2[0] = 1;
  // array2[1] = 2;
  // array2[2] = 3;
  // array2[3] = 4;
  // array2[4] = 5;
  // cout << array2[0] << endl;
  // cout << array2[1] << endl;
  // cout << array2[2] << endl;
  // cout << array2[3] << endl;
  // cout << array2[4] << endl;  

  // int array3[] = {1, 2};
  // cout << array3[0] << endl;
  // cout << array3[1] << endl;

  int num;
  int array[num];
  int i;
  cout << "配列の要素数を入力してください";
  cin >> num;
  for (i = 0; i < num; i++) {
    cin >> array[i];
  }
  for (i = 0; i < num; i++) {
    cout << i << "番目の要素は" << array[i] << "です" << endl;
  }

  return 0;
}