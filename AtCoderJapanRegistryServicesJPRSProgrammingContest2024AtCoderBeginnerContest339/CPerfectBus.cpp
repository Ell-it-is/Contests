// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc339/tasks/abc339_c
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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    ll cur = 0;
    ll lowest = 0;
    for (int i : a) {
      cur += i;
      lowest = std::min(lowest, cur);
    }
    ll ans = lowest * -1 + cur;
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















