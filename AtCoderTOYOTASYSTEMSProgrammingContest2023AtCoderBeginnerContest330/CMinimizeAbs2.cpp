// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc330/tasks/abc330_c
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
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    ll d;
    cin >> d;
    ll min = LLONG_MAX;
    for (ll y = 1; y <= 100'000'000; y++) {
      ll k = (ll)std::pow(y, 2);
      if (d - k >= 0) {
        ll x = (ll)std::sqrt(d - k);
        min = std::min(min, (ll)std::abs((ll)std::pow(x, 2) + (ll)std::pow(y, 2) - d)); 
      }
    }
    cout << min << "\n";
  }
}
/* ================= Notes ================== //
   x^2 + k - d, known 'k' and 'd'
   x^2 = d - k
   x = sqrt(d - k)
*/


















