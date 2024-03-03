// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc185/tasks/abc185_b
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
    int n, m, t;
    cin >> n >> m >> t;
    int max = n;
    bool ans = true;
    vector<pair<int, int>> v(m);
    for (int i = 0; i < m; i++) {
      int x, y;
      cin >> x >> y;
      v[i] = { x, y };
    }
    if (n - v[0].first <= 0) ans = false;
    n -= v[0].first;
    for (int i = 0; i < m - 1; i++) {
      n = std::min(n + v[i].second - v[i].first, max);
      n -= v[i + 1].first - v[i].second;
      if (n <= 0) ans = false;
    }
    n = std::min(n + v[m - 1].second - v[m - 1].first, max);
    n -= t - v[m - 1].second;
    if (n <= 0) ans = false;
    cout << (ans ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















