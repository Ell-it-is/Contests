// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc300/tasks/abc300_b
// Start: Created on Sunday, September 17, 2023 at 8:31:13 AM
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
    vector<string> a(h), b(h);
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    for (int s = 0; s < h; s++) {
      for (int t = 0; t < w; t++) {
        int ok = 1;
        for (int i = 0; i < h; i++) {
          for (int j = 0; j < w; j++) {
            if (a[(i - s + h) % h][(j - t + w) % w] != b[i][j]) ok = 0;
          }
        }
        if (ok) {
          cout << "Yes" << '\n';
          return 0;
        }
      }
    }
    cout << "No" << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















