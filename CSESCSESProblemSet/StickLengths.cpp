// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1074
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
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }
    std::sort(p.begin(), p.end());
    int m = 0;
    if (n % 2) {
      m = p[n / 2];
    } else {
      m = std::round(1.0 * (p[n / 2] + p[n / 2 - 1]) / 2);
    }
    ll ans = 0;
    for (int x : p) {
      ans += abs(x - m);
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















