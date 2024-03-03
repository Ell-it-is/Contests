// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc339/tasks/abc339_b
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
    int h, w, n;
    cin >> h >> w >> n;
    vector<string> v(h);
    string row = std::string(w, '.');
    for (int i = 0; i < h; i++) {
      v[i] = row;
    }
    int i = 0;
    int j = 0;
    int state = 0;
    // up, right, down, left
    int dy[4] = {-1, 0, 1, 0};
    int dx[4] = {0, 1, 0, -1};
    for (int k = 0; k < n; k++) {
      if (v[i][j] == '.') {
        // if current cell is white
        v[i][j] = '#';
        state = (state + 1) % 4;
      } else {
        // if current cell is black
        v[i][j] = '.';
        // add MOD value if you want to MOD negative values
        state = (state - 1 + 4) % 4;
      }
      i = (i + dy[state] + h) % h;
      j = (j + dx[state] + w) % w;
    }
    for (int row = 0; row < h; row++) {
      cout << v[row] << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















