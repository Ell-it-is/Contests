// time-limit: 3000
// problem-url: https://atcoder.jp/contests/abc331/tasks/abc331_e
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
    int n, m, l;
    cin >> n >> m >> l;
    vector<pair<int, int>> a(n), b(m);
    for (int i = 0; i < n; i++) {
      cin >> a[i].first;
      a[i].second = i;
    }
    for (int i = 0; i < m; i++) {
      cin >> b[i].first;
      b[i].second = i;
    }
    std::set<pair<int, int>> p;
    for (int i = 0; i < l; i++) {
      int x, y;
      cin >> x >> y;
      p.insert({--x, --y});
    }
    std::sort(a.rbegin(), a.rend());
    std::sort(b.rbegin(), b.rend());
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (p.count({a[i].second, b[j].second}) == 0) {
          // best answer for dish 'i'
          ans[i] = a[i].first + b[j].first;
          break;
        }
      }
    }
    int max = *max_element(ans.begin(), ans.end());
    cout << max << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















