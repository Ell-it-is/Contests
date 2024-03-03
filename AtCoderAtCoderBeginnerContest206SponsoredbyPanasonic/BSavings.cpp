// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc206/tasks/abc206_b
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
    int n;
    cin >> n;
    ll i = 1;
    ll sum = 0;
    do {
      sum = i * (i + 1) / 2;
      i++;
    } while (sum < n);
    cout << --i << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















