// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc336/tasks/abc336_c
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
    ll n;
    cin >> n;
    ll digits = ll(log2(n) / log2(5)) + 1; 
    string s = string(digits, '0');
    ll iter = 1;
    for (ll i = 0; i < digits; i++) {
      ll x = 0;
      ll d = pow(5, (digits - i - 1));
      while (iter + x * d <= n) x++;
      x--;
      if (iter + x * d <= n) {
        iter += x * d;
        s[i] = (char)(x * 2)|48;
      }
    }
    cout << s << "\n";
  }
}
/* ================= Notes ================== //
   x * 5^(d) + y * 5^(d - 1) + z * 5^(d - 0) + ...
*/
















