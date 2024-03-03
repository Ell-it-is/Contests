// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc265/tasks/abc265_c
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
bool is_out(int x, int y, int h, int w) {
  if (x < 0 || y < 0 || x == h || y == w) return true;
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int h, w;
    cin >> h >> w;
    vector<string> g(h);
    for (int i = 0; i < h; i++) {
      cin >> g[i];
    }
    vector<vector<bool>> visited(h, vector<bool>(w, false));
    int i = 0;
    int j = 0;
    visited[i][j] = true;
    while (true) {
      int temp_i = i;
      int temp_j = j;
      char d = g[i][j];
      if (d == 'U') {
        i--;
      } else if (d == 'D') {
        i++;
      } else if (d == 'L') {
        j--;
      } else if (d == 'R') {
        j++;
      }
      if (is_out(i, j, h, w)) {
        i = temp_i;
        j = temp_j;
        break;
      }
      if (visited[i][j]) {
        cout << -1 << "\n";
        return 0;
      }
      visited[i][j] = true;
    }
    cout << ++i << " " << ++j << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















