// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1697/B
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
    int n, q;
    cin >> n >> q;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }
    std::sort(p.begin(), p.end());
    vector<ll> psum(n);
    psum[0] = p[0];
    for (int i = 1; i < n; i++) {
      psum[i] = psum[i - 1] + p[i];
    }
    while (q--) {
      int x, y;
      cin >> x >> y;
      int from = n - x;
      int to = from + y - 1;
      ll ans = (from == 0 ? psum[to] : psum[to] - psum[from - 1]);
      cout << ans << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















