// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc176/tasks/abc176_c
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
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    ll sum = 0;
    for (int i = 1; i < n; i++) {
      ll d = a[i] - a[i - 1];
      if (d < 0) {
        sum += abs(d);
        a[i] += abs(d);
      }
    }
    cout << sum << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















