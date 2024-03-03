// time-limit: 1000
// problem-url: https://codeforces.com/contest/1906/problem/A
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
    int n = 3;
    std::vector<std::string> s(n);
    for (int i = 0; i < n; i++) std::cin >> s[i];
    std::string ans = "CCC";
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        for (int a = 0; a < n; a++) {
          for (int b = 0; b < n; b++) {
            if (a == i && b == j) continue;
            if (abs(i - a) > 1 || abs(j - b) > 1) continue;
            for (int c = 0; c < n; c++) {
              for (int d = 0; d < n; d++) {
                if ((c == i && d == j) || (c == a && d == b)) continue;
                if (abs(c - a) > 1 || abs(d - b) > 1) continue;
                std::string cur { s[i][j], s[a][b], s[c][d] };
                ans = std::min(ans, cur);
              }
            }
          }
        }
      }
    }
    std::cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















