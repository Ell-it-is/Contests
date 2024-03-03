// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1343/A
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
    int n;
    cin >> n;
    for (int k = 2; k <= 29; k++) {
      if (n % (int)(pow(2, k) - 1) == 0) {
        cout << n / (int)(pow(2, k) - 1) << '\n';
        break;
      }
    }
  }
}
/* ================= Notes ================== //
   x >= 1
   k >= 2
*/


















