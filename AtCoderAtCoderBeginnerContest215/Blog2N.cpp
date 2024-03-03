// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc215/tasks/abc215_b
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
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    ll n;
    cin >> n;
    cout << (int) std::log2((long double)n) << '\n';
  }
}
/* ================= Notes ==================
   Try to convert N to base 2?
*/



















