// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1652
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
    int n, q;
    cin >> n >> q;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    auto forest = [&] (int x, int y) {
      return a[x][y] == '*' ? 1 : 0;
    };
    vector<vector<int>> psum(n, vector<int>(n, 0));
    psum[0][0] = forest(0, 0);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == 0 && j == 0) continue;
        if (i == 0) {
          psum[i][j] = psum[i][j - 1] + forest(i, j);
        } else if (j == 0) {
          psum[i][j] = psum[i - 1][j] + forest(i, j);
        } else {
          psum[i][j] = psum[i - 1][j] + psum[i][j - 1] - psum[i - 1][j - 1] + forest(i, j); 
        }
      }
    }
    for (int i = 1; i <= q; i++) {
      int x1, y1, x2, y2;
      cin >> x1 >> y1 >> x2 >> y2;
      x1--; y1--; x2--; y2--;
      int ans = psum[x2][y2];
      if (x1 > 0) {
        ans -= psum[x1 - 1][y2];
      }
      if (y1 > 0) {
        ans -= psum[x2][y1 - 1];
      }
      if (x1 > 0 && y1 > 0) {
        ans += psum[x1 - 1][y1 - 1];
      }
      cout << ans << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















