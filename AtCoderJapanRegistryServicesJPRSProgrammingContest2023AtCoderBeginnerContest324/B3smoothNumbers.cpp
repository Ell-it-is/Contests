// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc324/tasks/abc324_b
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
    bool yes = false;
    for (ll x = 0; x <= 35; x++) {
      for (ll y = 0; y <= 35; y++) {
        if (n == pow(2ll, x) * pow(3ll, y)) yes = true;
      }
    }
    cout << (yes ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















