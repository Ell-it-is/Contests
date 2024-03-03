// time-limit: 1000
// problem-url: https://codeforces.com/contest/1294/problem/B
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
int mdist(int x1, int y1, int x2, int y2) {
  return std::abs(x2 - x1) + std::abs(y2 - y1); 
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    int cx = 0, cy = 0;
    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      vp[i] = { x, y };
    }
    bool wrong = false;
    string ans = "";
    int took = 0;
    while (took < n) {
      int closest = INT_MAX;
      int dest_x = -1;
      int dest_y = -1;
      int idx = -1;
      for (int i = 0; i < n; i++) {
        auto [x, y] = vp[i];
        if (x == -1) continue;
        if (mdist(cx, cy, x, y) < closest) {
          closest = mdist(cx, cy, x, y);
          dest_x = x;
          dest_y = y;
          idx = i;
        }
      }
      if (dest_x < cx || dest_y < cy) {
        wrong = true;
        break;
      }
      db(cx, cy);
      db(dest_x, dest_y);
      ans += std::string(abs(cx - dest_x), 'R') + std::string(abs(cy - dest_y), 'U');
      cx = dest_x;
      cy = dest_y;
      vp[idx].first = -1;
      took++;
    }
    if (wrong) cout << "NO" << "\n";
    else {
      cout << "YES" << "\n";
      cout << ans << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















