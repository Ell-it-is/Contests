// time-limit: 2000
// problem-url: https://codeforces.com/contest/1921/problem/C
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
    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    // f - initial phone charge
    // a - how much you lose each UoT
    // b - how much you lose for turning phone off and back on
    vector<ll> m(n + 1);
    m[0] = 0;
    for (int i = 1; i < n + 1; i++) cin >> m[i];
    ll e = f; // current energy
    db(m);
    for (int i = 0; i < n; i++) {
      ll time = m[i + 1] - m[i]; // time in between moments
      if (time * a > b) {
        e -= b;
      } else {
        e -= time * a;
      }
    }
    bool ans = e > 0;
    cout << (ans ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















