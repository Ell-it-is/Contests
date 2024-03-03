// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1072
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
    vector<int> v { 0, 6, 28, 96, 252, 550, 1056, 1848 };
    int add = 56;
    for (int i = 9; i <= n; i++) {
      int k = i * i;
      v.push_back(k * (k - 1) / 2 - (336 + add) / 2);
      add += 8;
    }
    for (int x : v) {
      cout << x << "\n";
    }
  }
}
/* ================= Notes ================== //
   Distance from closest "column edge" (end of the board):
   Outer row:
   1 - 2 attacks
   2 - 3 attacks
   3+ - 4 attacks

   Second outer row:
   1 - 3 attacks
   2 - 4 attacks
   3+ - 6 attacks

   Third+ outer row:
   1 - 4 attacks
   2 - 6 attacks
   3+ - 8 attacks

   3x3
   All: 8 * 9 = 72 / 2 = 36
   Blocked: 4 * 2 + 4 * 2 = 16 / 2 = 8
   Possible: 36 - 8 = 28
   
   4x4
   All: 15 * 16 = 240 / 2 = 120
   Blocked: 4 * 2 + 8 * 3 + 4 * 4 = 48 / 2 = 24
   Possible = 120 - 24 = 96

   5x5
   All: 24 * 25 = 600 / 2 = 300
   Blocked: 4 * 2 + ... = 96 / 2 = 48
   Possible: 252

   6x6
   All: 35 * 36 = 1260 / 2 = 630
   Blocked: ... = 160 / 2 = 80
   Possible: 550

   7x7
   All: 48 * 49 = 2352 / 2 = 1176
   Blocked: ... = 240 / 2 = 120
   Possible: 1056

   8x8
   All: 63 * 64 = 4032 / 2 = 2016
   Blocked: ... = 336 / 2 = 168
   Possible: 1848

   9x9
   All: 80 * 81 = 6480 / 2 = 3240
   Blocked: 2 * 2 + 2 * 3 + 10 * 4 + 2 * 3 + 1 * 2 = 56 
   Possible: 3016
*/


















