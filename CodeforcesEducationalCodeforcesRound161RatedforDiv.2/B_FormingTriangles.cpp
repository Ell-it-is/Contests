// time-limit: 2000
// problem-url: https://codeforces.com/contest/1922/problem/B
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
    for (int i = 0; i < n; i++) std::cin >> a[i];
    int x = n + 1;
    std::vector<ll> cnt(x);
    for (int i = 0; i < n; i++) {
      cnt[a[i]]++;
    }
    ll ans = 0;
    ll sum = 0;
    for (int i = 0; i < x; i++) {
      if (cnt[i] >= 3) {
        ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6;
      }
      if (cnt[i] >= 2) {
        ans += cnt[i] * (cnt[i] - 1) / 2 * sum;
      }
      sum += cnt[i];
    }
    std::cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















