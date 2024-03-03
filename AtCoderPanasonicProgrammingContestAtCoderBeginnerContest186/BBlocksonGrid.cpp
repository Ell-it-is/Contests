// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc186/tasks/abc186_b
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
    int h, w;
    cin >> h >> w;
    vector<vector<int>> v(h, vector<int>(w));
    int min = INT_MAX;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cin >> v[i][j];
        min = std::min(min, v[i][j]);
      }
    }
    int ans = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (v[i][j] > min) ans += v[i][j] - min;
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















