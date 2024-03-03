// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc200/tasks/abc200_b
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
    ll n, k;
    cin >> n >> k;
    while (k--) {
      if (n % 200 == 0) {
        n /= 200;
      } else {
        string s = to_string(n) + "200";
        n = std::stoll(s);
      } 
    }
    cout << n << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















