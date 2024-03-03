// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc302/tasks/abc302_b
// Start: DATE
// End: DATE
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
    vector<string> a(h);
    for (int i = 0; i < h; i++) {
      cin >> a[i];
    }
    vector<pair<int, int>> d { {1, -1}, {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0} };
    array<char, 4> nuke = {'n', 'u', 'k', 'e'};
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (a[i][j] == 's') {
          for (int k = 0; k < 8; k++) {
            int x = i;
            int y = j;
            int dx = d[k].first;
            int dy = d[k].second;
            vector<pair<int, int>> ans;
            ans.push_back({x, y});
            for (int l = 0; l < 4; l++) {
              x += dx;
              y += dy;
              if (0 <= x && x < h && 0 <= y && y < w) {
                if (a[x][y] == nuke[l]) {
                  ans.push_back({x, y});
                }
              }
            }
            if (ans.size() == 5) {
              for (int i = 0; i < 5; i++) {
                cout << ++ans[i].first << " " << ++ans[i].second << '\n';
              }
              cout << '\n';
              return 0;
            }
          }
        }
      }
    }
  }
}
/* ================= Notes ================== //
   
*/


















