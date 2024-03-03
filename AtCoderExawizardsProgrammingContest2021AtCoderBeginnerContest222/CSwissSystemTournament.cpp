// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc222/tasks/abc222_c
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
    int n, m;
    cin >> n >> m;
    n *= 2;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<pair<int, int>> points(n);
    for (int i = 0; i < n; i++) {
      points[i] = {0, i};
    }
    auto xwins = [&] (char x, char y) {
      if (x == 'G' && y == 'C') return true;
      if (x == 'C' && y == 'P') return true;
      if (x == 'P' && y == 'G') return true;
      return false;
    };
    for (int r = 0; r < m; r++) {
      for (int k = 1; k <= n / 2; k++) {
        int i = points[2 * k - 2].second;
        int j = points[2 * k - 1].second;
        char x = a[i][r];
        char y = a[j][r];
        if (x == y) continue;
        if (xwins(x, y)) {
          for (int l = 0; l < n; l++) {
            if (points[l].second == i) points[l].first++;
          }
        } else {
          for (int l = 0; l < n; l++) {
            if (points[l].second == j) points[l].first++;
          }
        }
      }
      std::sort(points.begin(), points.end(), [](auto &left, auto &right) {
        return (left.first != right.first ? left.first > right.first : left.second < right.second);
      });
    }
    for (int i = 0; i < n; i++) {
      cout << points[i].second + 1 << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















