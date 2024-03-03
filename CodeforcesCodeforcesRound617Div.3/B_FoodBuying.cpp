// time-limit: 1000
// problem-url: https://codeforces.com/contest/1296/problem/B
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
    int n;
    cin >> n;
    ll ans = 0;
    while (n > 0) {
      string s = to_string(n);
      int m = (int) s.size();
      if (m == 1) {
        ans += n;
        break;
      }
      int d = (int) pow(10, m - 1);
      ans += d;
      int back = d / 10;
      n -= d;
      n += back;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   It should be usefull to spend multiples of 10 alap
*/
















