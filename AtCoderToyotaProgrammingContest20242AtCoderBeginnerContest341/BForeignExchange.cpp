// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc341/tasks/abc341_b
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
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) std::cin >> a[i];
    for (int i = 0; i < n - 1; i++) {
      ll s, t;
      std::cin >> s >> t;
      ll x = a[i] / s;
      a[i + 1] += x * t;
    }
    std::cout << a.back() << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















