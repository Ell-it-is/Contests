// time-limit: 2000
// problem-url: https://codeforces.com/contest/1873/problem/E
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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int ans = 0; // biggest possible height
    int lo = 1;
    int hi = 3e9;
    while (lo <= hi) {
      int h = lo + (hi - lo) / 2;
      ll w = 0;
      for (int i = 0; i < n; i++) {
        if (a[i] < h) w += h - a[i];
      }
      db(w);
      if (w <= x) {
        ans = h;
        lo = h + 1;
      } else {
        hi = h - 1;
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   There are n towers of some height a[i]
   Condition: sum each (a[i] < h) as (h - a[i])
   w = (h - a[0]) + (h - a[1]) + ... + (h - a[n - 1])
   and find maximum h such that w <= x

   The bigger wall h I pick the more water w there is
   So I could be "guessing" the values of h until I get w as close to x as I can using binary search
*/


















