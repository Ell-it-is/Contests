// time-limit: 2000
// problem-url: https://codeforces.com/contest/1881/problem/C
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
    std::vector<std::string> t(n);
    for (int i = 0; i < n; i++) std::cin >> t[i];
    int ans = 0;
    for (int i = 0; i < n / 2; i++) {
      for (int j = 0; j < n / 2; j++) {
        std::vector<int> v;
        v.push_back(t[i][j] - 'a');
        v.push_back(t[j][n - 1 - i] - 'a');
        v.push_back(t[n - 1 - i][n - 1 - j] - 'a');
        v.push_back(t[n - 1 - j][i] - 'a');
        std::sort(v.begin(), v.end());
        for (int k = 0; k < 3; k++) {
          ans += v[3] - v[k];
        }
      }
    }
    std::cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   (x, y) (y, n + 1 - x) (n + 1 - x, n + 1 - y) (n + 1 - y, x) 
*/
















