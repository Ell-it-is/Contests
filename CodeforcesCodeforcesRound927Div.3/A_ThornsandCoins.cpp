// time-limit: 1000
// problem-url: https://codeforces.com/contest/1932/problem/0
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
  std::cin >> tt;
  while (tt--) {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    std::vector<int> dp(n + 1, INT_MIN);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
      if (i > 1 && s[i - 2] != '*') {
        dp[i] = std::max(dp[i], dp[i - 2] + (s[i] == '@'));
      }
      if (s[i - 1] != '*') dp[i] = std::max(dp[i], dp[i - 1] + (s[i] == '@'));
    }
    int max = *std::max_element(dp.begin(), dp.end());
    std::cout << max << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















