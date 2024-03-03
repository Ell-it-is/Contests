// time-limit: 1000
// problem-url: https://codeforces.com/contest/1607/problem/B
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
    ll x, n;
    cin >> x >> n;
    ll ans = 0;
    ll h = n / 4 * 4;
    ll o = n - h;
    db(h, o);
    while (h < n) {
      if (x % 2 == 0) {
        x -= h + 1;
      } else {
        x += h + 1;
      }
      h++;
      db(x);
      db(h);
    }
    cout << x << "\n";
  }
}
/* ================= Notes ================== //
   even - left jump
   odd - right jump

   0 - 0
   1 - -1
   2 - 1
   3 - 4
   4 - 0
   5 - -5

   0 and all numbers += 4 -> 0
   1 and all numbers += 4 -> -number
   2 and all numbers += 4 -> 1
   3 and all numbers += 4 -> number + 1

   if n mod 4 is either of those, I know what to do
*/


















