// time-limit: 2000
// problem-url: https://codeforces.com/contest/1490/problem/A
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
    vector<double> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    bool dense = true;
    int ans = 0;
    for (int i = 0; i < n - 1; i++ ) {
      double max = std::max(a[i], a[i + 1]);
      double min = std::min(a[i], a[i + 1]);
      if (max / min > 2.0) {
        dense = false;
        int cnt = 1;
        if (a[i] < a[i + 1]) {
          double x = a[i] * 2;
          while (a[i + 1] / x > 2.0) {
            cnt++;
            x *= 2;
          }
        } else {
          // a[i] > a[i + 1]
          double x = a[i] / 2;
          while (x / a[i + 1] > 2.0) {
            cnt++;
            x /= 2;
          }
        }
        ans += cnt;
      }
    }
    cout << (dense ? 0 : ans) << "\n";
  }
}
/* ================= Notes ================== //
   if smaller number can fit into bigger at most twice

   for L, R pair that is not dense:
   L < R, insert L multiplied by 2
   L > R, insert L divided by 2
*/


















