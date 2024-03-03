// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc178/tasks/abc178_b
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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << std::max(std::max(a*c, a*d), std::max(b*c, b*d)) << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















