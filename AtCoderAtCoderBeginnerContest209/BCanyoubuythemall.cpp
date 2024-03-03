// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc209/tasks/abc209_b
// Start: DATE
// End: DATE
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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int cost = 0;
    for (int i = 0; i < n; i++) {
      if (i > 0 && (i + 1) % 2 == 0) {
        cost += a[i] - 1;
      } else {
        cost += a[i];
      }
    }
    cout << ((cost <= x) ? "Yes" : "No") << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















