// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc331/tasks/abc331_a
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
    int M, D;
    cin >> M >> D;
    int y, m, d;
    cin >> y >> m >> d;
    int day_year = M * D;
    if (m == M) {
      if (d == D) {
        y++;
        m = 1;
        d = 1;
      } else {
        d++;
      }
    } else {
      if (d == D) {
        m++;
        d = 1;
      } else {
        d++;
      }
    }
    cout << y << " " << m << " " << d << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















