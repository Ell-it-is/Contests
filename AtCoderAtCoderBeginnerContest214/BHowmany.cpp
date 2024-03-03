// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc214/tasks/abc214_b
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
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int a = 0; a <= s; a++) {
      for (int b = 0; a + b <= s; b++) {
        for (int c = 0; a + b + c <= s; c++) {
          if (a * b * c <= t) cnt++;
        }
      }
    }
    cout << cnt << '\n';
  }
}
/* ================= Notes ==================
   3 same = 1 option
   2 same = 3 options
   1 same = 3 options

   3 different = 6 options
   2 different = 6 options
   1 different = 1 same
*/



















