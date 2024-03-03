// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc174/tasks/abc174_b
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
double dist(int x1, int y1, int x2, int y2) {
  return sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2) * 1.0);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int n, d;
    cin >> n >> d;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      if (dist(x, y, 0, 0) <= d) {
        cnt++;
      }
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















