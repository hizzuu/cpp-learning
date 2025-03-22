#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    string words[4] = {"dream", "dreamer", "erase", "eraser"};
    vector<bool> dp(S.size() + 1, false);
    // 空文字列は作れる
    dp[0] = true;

    cout << S.size() << endl;

    // Sのi番目までの文字列が作れるかをdpで管理
    for (int i = 1; i <= S.size(); i++) {
        for (const auto& word : words) {
            // 単語と同じ長さまでの文字列が作れない場合はスキップ
            if (word.size() > i) continue;

            // dp[i - word.size()]がtrueで、Sのi - word.size()番目からword.size()分の文字列がwordと一致する場合
            if (dp[i - word.size()] && S.substr(i - word.size(), word.size()) == word) {
                dp[i] = true;
                break;
            }
        }
    }

    cout << (dp[S.size()] ? "YES" : "NO") << endl;

    return 0;
}
