// time-limit: 2000
// problem-url: https://codeforces.com/contest/1929/problem/C
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
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  std::cin >> tt;
  while (tt--) {
    ll k, x, a;
    cin >> k >> x >> a;
    ll lost = 1;
    for (int i = 1; i < x; i++) {
      if (lost >= a) break;
      ll cur = a - lost;
      ll y = lost / (k - 1) + 1;
      lost += y;
    }
    ll cur = a - lost;
    if (cur > 0 && lost < a && cur * k > a) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















