// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1141/A
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
    int n, m;
    cin >> n >> m;
    bool found = false;
    int ans = 0;
    for (int k = 0; k <= 30; k++) {
      for (int l = 0; l <= 30; l++) {
        if (n * pow(2, k) * pow(3, l) == m) {
          found = true;
          ans = k + l;
          break;
        }
      }
      if (found) break;
    }
    if (found) {
      cout << ans << "\n";
    } else {
      cout << -1 << "\n";
    }
  }
}
/* ================= Notes ================== //
   n * 2^k == m
   n * 3^k == m
   n * 2^k * 3^l == m

   worst case: n = 1 and m = 5 * 10^8
*/


















