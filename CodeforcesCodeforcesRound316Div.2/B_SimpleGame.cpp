// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/570/B
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
    ll n, m;
    cin >> n >> m;
    ll left = m - 1;
    ll right = n - m;
    if (n == 1) {
      cout << 1 << "\n";
    } else {
      ll ans = (left >= right ? m - 1 : m + 1);
      cout << ans << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















