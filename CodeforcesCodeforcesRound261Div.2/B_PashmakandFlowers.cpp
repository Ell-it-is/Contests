// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/459/B
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
    vector<ll> f(n);
    for (int i = 0; i < n; i++) cin >> f[i];
    ll mx = *max_element(f.begin(), f.end());
    ll mn = *min_element(f.begin(), f.end());
    ll mx_cnt = 0;
    ll mn_cnt = 0;
    for (int i = 0; i < n; i++) {
      if (f[i] == mx) mx_cnt++;
      if (f[i] == mn) mn_cnt++;
    }
    cout << mx - mn << " " << (mx == mn ? mx_cnt * (mx_cnt - 1) / 2 : mx_cnt * mn_cnt) << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















