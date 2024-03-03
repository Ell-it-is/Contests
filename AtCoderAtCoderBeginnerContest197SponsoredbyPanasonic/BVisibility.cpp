// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc197/tasks/abc197_b
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
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    x--;
    y--;
    vector<string> v(h);
    for (int i = 0; i < h; i++) {
      cin >> v[i];
    }
    int ans = 0;
    int from_x = 0;
    for (int i = 0; i < y; i++) {
      if (v[x][i] == '#') {
        from_x = i + 1;
      }
    }
    int to_x = w - 1;
    for (int i = y; i < w; i++) {
      if (v[x][i] == '#') {
        to_x = i - 1;
        break;
      } 
    }
    ans += abs(to_x - from_x) + 1;
    int from_y = 0;
    for (int i = 0; i < x; i++) {
      if (v[i][y] == '#') {
        from_y = i + 1;
      }
    }
    int to_y = h - 1;
    for (int i = x; i < h; i++) {
      if (v[i][y] == '#') {
        to_y = i - 1;
        break;
      }
    }
    ans += abs(to_y - from_y) + 1;
    cout << ans - 1 << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















