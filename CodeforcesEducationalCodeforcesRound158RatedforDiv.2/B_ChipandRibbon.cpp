// time-limit: 2000
// problem-url: https://codeforces.com/contest/1901/problem/B
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
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<ll> d(n);
    for (int i = 0; i < n; i++) {
      ll num;
      cin >> num;
      d[i] = i == 0 ? num - 1 : num;
    }
    if (n == 1) {
      cout << d[0] << "\n";
      continue;
    }
    ll ans = 0;
    int i = 1;
    int j = 1;
    if (d[0] > 0) {
      ans = 1;
      i = 0;
      j = 0;
      for (int i = 1; i < n; i++) {
        if (d[i]) d[i]--;
      }
    }
    while (i < n) {
      while (i < n && d[i] == 0) i++;
      j = i;
      ll mx = 0;
      while (j < n && d[j] != 0) {
        mx = max(mx, d[j]);
        j++;
      }
      ans += mx - 1;
      i = j;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















