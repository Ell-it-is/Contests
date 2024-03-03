// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc207/tasks/abc207_c
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
    vector<pair<double, double>> v(n);
    for (int i = 0; i < n; i++) {
      double t, l, r;
      cin >> t >> l >> r;
      if (t == 2) {
        r -= .1;
      } else if (t == 3) {
        l += .1;
      } else if (t == 4) {
        l += .1;
        r -= .1;
      }
      v[i] = {l, r};
    }
    db(v);
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        double a = v[i].first;
        double b = v[i].second;
        double p = v[j].first;
        double q = v[j].second;
        if ( (q >= a && q <= b) || (b >= p && b <= q) ) {
          ans++;
        }
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















