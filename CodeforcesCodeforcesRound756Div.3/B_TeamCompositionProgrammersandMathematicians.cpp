// time-limit: 1000
// problem-url: https://codeforces.com/contest/1611/problem/B
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
    int ans = std::min(std::min(a, b), (a + b) / 4);
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   Possible teams:
   1p 3m
   2p 2m
   3p 1m
*/


















