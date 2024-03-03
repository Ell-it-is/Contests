// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc203/tasks/abc203_b
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
  //cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= k; j++) {
        sum += 100 * i + j;
      }
    }
    cout << sum << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















