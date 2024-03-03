// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc193/tasks/abc193_b
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
    vector<int> a(n);
    vector<pair<int, int>> p(n);
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
      int g, c, r;
      cin >> g >> c >> r;
      a[i] = g;
      p[i] = {c, i};
      x[i] = r;
    }
    std::sort(p.begin(), p.end());
    int ans = -1;
    for (int i = 0; i < n; i++) {
      int prize = p[i].first;
      int idx = p[i].second;
      if (a[idx] < x[idx]) {
        ans = prize;
        break;
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   when a[i] < x[i], it is possible to buy 'Play snuke'
   so amongst those that are available, select the cheapest one
*/


















