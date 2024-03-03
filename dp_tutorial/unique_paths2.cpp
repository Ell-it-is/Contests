// time-limit: 1000
// problem-url: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/BINARYSUB
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
    int n = 3;
    int m = 3;
    vector<vector<int>> a {
      {0, 0, 0},
      {0, -1, 0},
      {0, 0, 0}
    };
    vector<vector<int>> dp(n, vector<int>(m));
    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (i + 1 < n && a[i + 1][j] != -1) {
          dp[i + 1][j] += dp[i][j];
        }
        if (j + 1 < m && a[i][j + 1] != -1) {
          dp[i][j + 1] += dp[i][j];
        }
      }
    }
    cout << dp[n - 1][m - 1] << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















