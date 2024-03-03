// time-limit: 2000
// problem-url: https://codeforces.com/contest/1932/problem/B
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
    ll n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (ll i = 0; i < n; i++) std::cin >> a[i];
    ll x = a[0];
    for (int i = 1; i < n; i++) {
      ll k = x / a[i];
      if (k <= x / a[i]) k++;
      x = k * a[i];
      db(k, x);
    }
    std::cout << x << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















