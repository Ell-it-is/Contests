// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1182/A
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
    if (n % 2 == 1) {
      cout << 0 << "\n";
    } else {
      ll ans = powl(2, 1ll * n / 2);
      cout << ans << "\n";
    }
  }
}
/* ================= Notes ================== //
   3x1
   3x2
   3x3
   3x4
   3x5
   ...

   # of rows is still the same = 3
   I can always solve every 3x2 with 2 shapes
   There are 2 ways for every 3x2
   Not possible for odd # of columns / for n % 2 == 1
*/


















