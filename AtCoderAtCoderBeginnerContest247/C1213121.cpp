// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc247/tasks/abc247_c
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution =============== //

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<string> dp(n + 1);
    dp[1] = "1";
    for (int i = 2; i <= n; i++) {
      dp[i] = dp[i - 1] + " " + to_string(i) + " " + dp[i - 1];
    }
    cout << dp[n] << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















