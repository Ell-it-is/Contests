// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1660
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
    ll x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    ll ans = 0;
    std::map<ll, ll> psums;
    ll cur_sum = 0;
    for (int i = 0; i < n; i++) {
      cur_sum += a[i];
      if (cur_sum == x) {
        ans++;
      }
      if (psums.count(cur_sum - x)) {
        ans += psums[cur_sum - x];
      }
      psums[cur_sum]++;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   Array of size n
   When trying to move through every cell of every subarray it takes this many operations:
   n * 1 + (n - 1) * 2 + (n - 2) * 3 ... + 1 * n
   
   Those are Tetrahedral (or triangular pyramidal) numbers: n * (n + 1) * (n + 2) / 6
   And for input n = 2 * 10^5 it would take far too long.

   
*/


















