// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1662
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
    int n;
    cin >> n;
    vector<ll> v(n);
    ll psums = 0;
    v[0] = 1;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      psums += a;
      // adding modulo value to take care of negative psum
      // if psums < 0 and psums % n -> negative value, by adding n we move to positive values
      // so that we don't end up with out of boundary exceptions
      v[(psums % n + n) % n]++;
    }
    ll ans = 0;
    for (ll x : v) {
      ans += x * (x - 1) / 2;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   sum % n == 0, cnt++
   
*/


















