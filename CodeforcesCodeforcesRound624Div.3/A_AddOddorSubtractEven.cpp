// time-limit: 2000
// problem-url: https://codeforces.com/contest/1311/problem/A
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
    int a, b;
    cin >> a >> b;
    if (a == b) {
      cout << 0 << "\n";
    } else {
      int ans = 2;
      if (a > b) {
        if ( (a & 1) == (b & 1) ) ans = 1;
      } else {
        ans = 1;
        if ( (a & 1) == (b & 1) ) ans = 2;
      }
      cout << ans << "\n";
    }
  }
}
/* ================= Notes ================== //
   add odd or remove even
*/
















