// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/217/A
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
    int n;
    cin >> n;
    std::set<int> xs; // connected x's
    std::set<int> ys; // connected y's
    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      xs.insert(x);
      ys.insert(y);
    }
    
  }
}
/* ================= Notes ================== //
   I need to make sure that every point has atleast one point with same x or y coordinates

   Find a position that connects to a point that is connected and also connects
   to the maximum non-connected points
*/


















