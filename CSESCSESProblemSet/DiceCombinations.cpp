// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1633
// ================= Header ================= //
#include <bits/stdc++.h>
typedef long long ll;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution =============== //


int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  //std::cin >> tt;
  while (tt--) {
    int n;
    std::cin >> n;
    std::vector<int> dp(n + 1);
    dp[1] = 1;
    int const MOD = 1e9 + 7; 
    for (int i = 2; i <= n; i++) {
      dp[i] = dp[i - 1] * 2 % MOD;
    }
    std::cout << dp[n] << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















