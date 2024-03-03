// time-limit: 2000
// problem-url: https://codeforces.com/contest/1902/problem/C
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
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
    cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    if (n == 1) {
      cout << 1 << "\n";
      continue;
    }
    
    ll max = *std::max_element(a.begin(), a.end());
    std::vector<ll> d;
    for (int i = 0; i < n; i++) {
      if (a[i] != max) d.push_back(max - a[i]);
    }
    ll gcd = d.front();
    for (int i = 1; i < n - 1; i++) {
      gcd = std::gcd(gcd, d[i]);
    }
    ll ans = 0;
    for (int i = 0; i < n - 1; i++) {
      ans += d[i] / gcd;
    }
    
    std::sort(a.begin(), a.end());
    ll z = max - gcd;
    while (std::binary_search(a.begin(), a.end(), z)) {
      z -= gcd;
    }
    ll ans2 = ans;
    ans += (max - z) / gcd;
    cout << std::min(ans, ans2 + n) << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















