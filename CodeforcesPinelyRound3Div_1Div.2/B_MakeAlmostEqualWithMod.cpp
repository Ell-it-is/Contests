// time-limit: 1000
// problem-url: https://codeforces.com/contest/1909/problem/B
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
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) std::cin >> a[i];
    int odd = std::count_if(a.begin(), a.end(), [](ll ai) { return ai % 2; });
    if (odd > 0 && odd != n) {
      std::cout << 2 << "\n";
      continue;
    }
    // all numbers are now either odd or even
    ll ans = -1;
    for (ll k = 1; ; k *= 2) {
      std::set<ll> dist;
      for (int i = 0; i < n; i++) dist.insert(a[i] % k);
      if ((int) dist.size() == 2) {
        ans = k;
        break;
      }
    }
    std::cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















