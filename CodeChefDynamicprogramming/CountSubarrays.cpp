// time-limit: 1000
// problem-url: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/SUBINC
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
    vector<int> dp(n, 1); 
    for (int i = 1; i < n; i++) {
      if (a[i - 1] <= a[i]) {
        dp[i] = dp[i - 1] + 1;
      }
    }
    ll ans = std::accumulate(dp.begin(), dp.end(), 0ll);
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















