// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc187/tasks/abc187_b
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
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
      cin >> x[i];
      cin >> y[i];
    }
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        double m = 1.0 * abs(y[i] - y[j]) / abs(x[i] - x[j]);
        if (m >= -1 && m <= 1) cnt++;
      }
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   slope = rise / run = (y1 - y2) / (x1 - x2)
*/


















