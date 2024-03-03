// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc223/tasks/abc223_c
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
    vector<double> a(n), b(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      cin >> b[i];
    }
    double i = 0;
    double j = n - 1;
    double ans = 0;
    while (i <= j) {
      double t1 = a[i] / b[i];
      double t2 = a[j] / b[j];
      if (t1 < t2) {
        ans += a[i];
        i++;
        a[j] -= t1 * b[j];
      } else if (t2 < t1) {
        j--;
        a[i] -= t2 * b[i];
        ans += t2 * b[i];
      } else {
        if (i == j) {
          ans += a[i] / 2;
          break;
        }
        ans += a[i];
        i++;
        j--;
      }
      db(i, j);
      db(ans);
    }
    cout << fixed << setprecision(15) << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















