// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1634
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
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
      cin >> c[i];
    }
    vector<ll> dp(x + 1);
    dp[0] = 0;
    for (int i = 1; i <= x; i++) {
      dp[i] = INT_MAX;
    }
    for (int i = 0; i < n; i++) {
      for (int sum = 0; sum <= x; sum++) {
        // if given coin <= sum, we can use it
        if (sum - c[i] >= 0) {
          dp[sum] = std::min(dp[sum], dp[sum - c[i]] + 1);
        }
      }
    }
    db(dp);
    cout << (dp[x] == INT_MAX ? -1 : dp[x]) << "\n";
  }
}
/* ================= Notes ================== //
   How many coins does it take to get to the sum X?

   dp[x] = min(dp[x - c[i]]), where i: 1..n
   
   base case:
   dp[0] = 0
   -> it takes 0 coins to get to the sum 0
*/


















