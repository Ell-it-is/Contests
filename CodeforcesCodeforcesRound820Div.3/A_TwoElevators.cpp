// time-limit: 1000
// problem-url: https://codeforces.com/contest/1729/problem/A
// Start: DATE
// End: DATE
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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 1) {
      cout << 1 << "\n";
      continue;
    }
    int time_a = abs(a - 1); // number of seconds before the first elevater arrive
    int time_b = abs(b - c) + abs(c - 1);
    if (time_a == time_b) {
      cout << 3 << "\n";
    }
    else if (time_a < time_b) {
      cout << 1 << "\n";
    } else {
      cout << 2 << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















