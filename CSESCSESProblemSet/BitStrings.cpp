// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1617
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif
const int MOD = 1e9 + 7;

// ================= Solution =============== //


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 0; i < n; i++) {
      ans = (ans * 2) % MOD;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   n = 3
   then I can create bit strings in [0, 7]
   n = 4
   then I can create bit strings in [0, 15]

   And so the general formula should be 2^n
   the issue is that I can never get a number of 2^1mil
   2^n = 2^(n - 1) + 2^(n - 2) ... + 2^0 + 1
   It can also be thought of as n times multiplying the number 2 :) and I can MOD after each step
*/
















