// time-limit: 2000
// problem-url: https://codeforces.com/contest/1650/problem/B
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
    int l, r, a;
    cin >> l >> r >> a;
    int max_mod = r % a;
    int max_x = r;
    for (int x = r - 1; x >= l; x--) {
      int cur_mod = x % a;
      if (cur_mod > max_mod) {
        max_x = x;
        max_mod = cur_mod;
        if (x % (a - 1) == 0) break;  
      }
    }
    db(max_x);
    int f = max_x / a + max_x % a;
    cout << f << "\n";
  }
}
/* ================= Notes ================== //
   biggest multiple of a number <= a - 1
*/


















