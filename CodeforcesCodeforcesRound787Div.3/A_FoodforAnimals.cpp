// time-limit: 1000
// problem-url: https://codeforces.com/contest/1675/problem/A
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
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if (a < x) {
      c -= x - a;
    }
    if (b < y) {
      c -= y - b;
    }
    if (c >= 0) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















