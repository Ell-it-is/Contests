// time-limit: 2000
// problem-url: https://codeforces.com/contest/1899/problem/B
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<ll> psum(n);
    psum[0] = a[0];
    for (int i = 1; i < n; i++) {
      psum[i] = psum[i - 1] + a[i];
    }
    ll max = 0;
    for (int k = 1; k <= n / 2; k++) {
      if (n % k) continue;
      ll mx = LLONG_MIN;
      ll mn = LLONG_MAX;
      int i = 0;
      while (i + k - 1 < n) {
        ll sum = i == 0 ? psum[i + k - 1] : psum[i + k - 1] - psum[i - 1];
        mx = std::max(mx, sum);
        mn = std::min(mn, sum);
        i += k;
      }
      max = std::max(max, mx - mn);
    }
    cout << max << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















