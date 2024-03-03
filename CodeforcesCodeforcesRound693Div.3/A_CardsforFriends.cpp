// time-limit: 1000
// problem-url: https://codeforces.com/contest/1472/problem/A
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
    ll w, h, n;
    cin >> w >> h >> n;
    ll pw = 1;
    while (w % 2 == 0) {
      w /= 2;
      pw *= 2;
    }
    ll ph = 1;
    while (h % 2 == 0) {
      h /= 2;
      ph *= 2;
    }
    ll pieces = pw * ph;
    if (pieces >= n) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   if atleast n pieces of paper -> yes

   the formula is actually that each time we cut we double the
   number of papers on that side (kinda obv lol)
*/


















