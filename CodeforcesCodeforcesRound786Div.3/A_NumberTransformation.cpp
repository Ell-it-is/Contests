// time-limit: 2000
// problem-url: https://codeforces.com/contest/1674/problem/A
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
    int x, y;
    cin >> x >> y;
    if (y % x != 0) {
      cout << 0 << " " << 0 << "\n";
    } else {
      cout << 1 << " " << y / x << "\n";
    }
  }
}
/* ================= Notes ================== //
   y = x * (b^a)
*/


















