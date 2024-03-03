// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1620
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
    ll n, x; // # of machines and # of products I need to make
    cin >> n >> x;
    vector<ll> m(n);
    for (int i = 0; i < n; i++) {
      cin >> m[i];
    }
    ll lo = 1;
    ll hi = 1e18;
    ll ans = 0;
    while (lo <= hi) {
      ll t = lo + (hi - lo) / 2;
      ll products = 0;
      for (int i = 0; i < n; i++) {
        products += t / m[i];
        if (products >= x) {
          break;
        }
      }
      db(t, products);
      if (products >= x) {
        ans = t;
        hi = t - 1;
      } else {
        lo = t + 1;
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   How many products can I make at time t?
   products = t / m[0] + t / m[1] ... + t / m[n - 1]
*/


















