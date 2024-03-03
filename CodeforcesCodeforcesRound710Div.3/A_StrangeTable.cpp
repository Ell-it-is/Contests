// time-limit: 2000
// problem-url: https://codeforces.com/contest/1506/problem/A
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
    ll n, m, x;
    cin >> n >> m >> x;
    if (x == 1) {
      cout << 1 << "\n";
      continue;
    }
    if (x == n * m) {
      cout << x << "\n";
      continue;
    }
    ll y1 = x / n + 1;
    if (1 <= x && x <= n) {
      y1 = 1;
    } else if (x % n == 0) {
      y1 = x / n;
    }
    ll x1 = x % n;
    if (x % n == 0) {
      x1 = n;
    }
    ll ans = 1 + (x1 - 1) * m + y1 - 1; 
    cout << ans << "\n"; 
  }
}
/* ================= Notes ================== //
   so the question is how do I find x1 and y1?
   
*/


















