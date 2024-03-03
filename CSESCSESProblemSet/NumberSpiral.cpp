// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1071
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
  cin >> tt;
  while (tt--) {
    ll y, x;
    cin >> y >> x;
    if (y > x) {
      if (y % 2 != 0) {
        cout << (y - 1) * (y - 1) + x << "\n";
      } else {
        cout << y * y - x + 1 << "\n";
      }
    } else {
      if (x % 2 == 0) {
        cout << (x - 1) * (x - 1) + y << "\n";
      } else {
        cout << x * x - y + 1 << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   each spiral has a max value of a perfect square
   max(y, x) defines perfect square your number is in
   y > x, then y^2 - x
   y < x, then x^2 + y
*/


















