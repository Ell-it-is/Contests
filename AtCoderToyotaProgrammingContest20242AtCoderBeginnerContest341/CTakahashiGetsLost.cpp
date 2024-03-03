// time-limit: 3000
// problem-url: https://atcoder.jp/contests/abc341/tasks/abc341_c
// ================= Header ================= //
#include <bits/stdc++.h>
typedef long long ll;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution =============== //
bool out_of_borders(int x, int y, int rows, int cols) {
  return (x < 0 || y < 0 || x >= rows || y >= cols);
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  //std::cin >> tt;
  while (tt--) {
    int h, w, n;
    std::cin >> h >> w >> n;
    std::string t;
    std::cin >> t;
    std::vector<std::string> m(h);
    for (int i = 0; i < h; i++) {
      std::cin >> m[i];
    }
    int cnt = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (m[i][j] == '#') continue;
        int x = i;
        int y = j;
        bool path_ok = true;
        for (int k = 0; k < n; k++) {
          if (t[k] == 'L') y--;
          if (t[k] == 'U') x--;
          if (t[k] == 'R') y++;
          if (t[k] == 'D') x++;
          if (out_of_borders(x, y, h, w) || m[x][y] == '#') {
            path_ok = false;
            break;
          }
        }
        if (path_ok) {
          cnt++;
        }
      }
    }
    std::cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















