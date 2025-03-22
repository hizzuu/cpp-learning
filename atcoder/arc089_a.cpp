#include <iostream>
#include <vector>
using namespace std;

// マンハッタン距離の計算
// |x1 - x2| + |y1 - y2|
// 例: (1, 2), (3, 4)のマンハッタン距離
// |1 - 3| + |2 - 4| = 2 + 2 = 4
// つまり1から2に移動するには4の時間がかかる

struct Point {
  int t;
  int x;
  int y;
};

bool isPossible(const vector<Point>& plan) {
  // 時刻0にいる点は原点
  int current_t = 0;
  int current_x = 0;
  int current_y = 0;

  // size_tに変更
  for (size_t i = 0; i < plan.size(); i++) {
    // 前の位置から次の位置までの移動距離
    int dt = plan.at(i).t - current_t;
    // 前の位置から次の位置までのマンハッタン距離
    int dist = abs(plan.at(i).x - current_x) + abs(plan.at(i).y - current_y);

    // 移動距離よりもマンハッタン距離が大きい場合は不可能
    // 例えば、(1, 2)から(3, 4)に移動するには4の時間がかかるが、
    // 2の時間で移動することはできない
    if (dt < dist) {
      return false;
    }

    // 移動距離とマンハッタン距離の偶奇が一致しない場合は不可能
    // 行って戻るには偶数の時間がかかる
    // つまり、余った時間が奇数の場合は不可能
    if ((dt - dist) % 2 != 0) {
      return false;
    }

    // 次の位置を更新
    current_t = plan.at(i).t;
    current_x = plan.at(i).x;
    current_y = plan.at(i).y;
  }

  return true;
}

// O(N)
int main() {
  int n;
  cin >> n;  // 先にnを入力

  vector<Point> plan(n);  // 入力されたnでvectorを初期化
  for (int i = 0; i < n; i++) {
    cin >> plan.at(i).t >> plan.at(i).x >> plan.at(i).y;
  }

  cout << (isPossible(plan) ? "Yes" : "No") << endl;

  return 0;
}
