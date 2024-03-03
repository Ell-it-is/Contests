// time-limit: 2000
// problem-url: https://codeforces.com/contest/1547/problem/A
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
int mdist(int x1, int y1, int x2, int y2) {
  return std::abs(x2 - x1) + std::abs(y2 - y1); 
}

bool b(int x1, int y1, int x2, int y2, int x3, int y3) {
  if ( ( ((y2 <= y3 && y3 <= y1) || (y1 <= y3 && y3 <= y2)) && x1 == x2 && x2 == x3) ||
       ( ((x2 <= x3 && x3 <= x1) || (x1 <= x3 && x3 <= x2)) && y1 == y2 && y2 == y3) ) {
    return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    bool between = b(xa, ya, xb, yb, xc, yc);
    int ans = mdist(xa, ya, xb, yb);
    if (between) ans += 2;
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















