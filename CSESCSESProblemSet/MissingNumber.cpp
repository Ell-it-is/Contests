// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1083
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
    ll sum = 0;
    for (int i = 0; i < n - 1; i++) {
      int x;
      cin >> x;
      sum += x;
    }
    ll ans = (n * (n + 1) / 2) - sum;
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















