// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1520/D
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
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      b[i] = a[i] - i;
    }
    std::sort(b.begin(), b.end());
    int cnt = 1;
    vector<ll> c(n + 1);
    for (int i = 1; i <= n; i++) {
      if (i == n) {
        c[i] = cnt;
        break;
      }
      if (b[i] == b[i - 1]) cnt++;
      else {
        c[i] = cnt;
        cnt = 1;
      }
    }
    ll ans = 0;
    for (int i = 0; i <= n; i++) {
      if (c[i] != 0) {
        ans += c[i] * (c[i] - 1) / 2;
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















