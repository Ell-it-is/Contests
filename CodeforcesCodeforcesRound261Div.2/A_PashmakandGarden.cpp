// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/459/A
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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if ( x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2) ) {
      cout << -1 << "\n";
    } else {
      if (x1 == x2) {
        int dist = std::abs(y1 - y2);
        cout << x1 + dist << " " << y1 << " " << x2 + dist << " " << y2 << "\n";
      } else if (y1 == y2) {
        int dist = std::abs(x1 - x2);
        cout << x1 << " " << y1 + dist << " " << x2 << " " << y2 + dist << "\n";
      } else {
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   
*/


















