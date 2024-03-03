// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc189/tasks/abc189_b
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
    ll n, x;
    cin >> n >> x;
    x *= 100;
    vector<int> v(n), p(n);
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      v[i] = a;
      p[i] = b;
    }
    ll in = 0;
    int ans = -1;
    for (int i = 0; i < n; i++) {
      in += v[i] * p[i];
      db(in, x);
      if (in > x) {
        ans = i + 1;
        break;
      } 
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















