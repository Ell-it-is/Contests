// time-limit: 2000
// problem-url: https://codeforces.com/contest/1923/problem/A
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
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
      std::cin >> a[i];
    }
    int L = 0;
    int R = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] == 1) {
        L = i;
        break;
      }
    }
    for (int i = n - 1; i >= 0; i--) {
      if (a[i] == 1) {
        R = i;
        break;
      }
    }
    int ans = std::count(a.begin() + L, a.begin() + R + 1, 0);
    std::cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















