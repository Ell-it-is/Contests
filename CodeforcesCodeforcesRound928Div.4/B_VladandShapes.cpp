// time-limit: 1000
// problem-url: https://codeforces.com/contest/1926/problem/B
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
    int prev = -1;
    std::string ans = "";
    for (int i = 0; i < n; i++) {
      std::string s;
      std::cin >> s;
      int cnt = std::count(s.begin(), s.end(), '1');
      if (i) {
        if (prev > 0 && cnt > 0 && abs(prev - cnt) > 0) {
          ans = "TRIANGLE";
        } else if (prev > 0 && cnt > 0 && abs(prev - cnt) == 0) {
          ans = "SQUARE";
        }
      }
      prev = cnt;
    }
    std::cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















