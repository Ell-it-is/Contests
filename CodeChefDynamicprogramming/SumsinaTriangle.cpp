// time-limit: 1000
// problem-url: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/SUMTRIAN
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
    vector<vector<int>> v(n, vector<int>(n, -1));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= i; j++) {
        cin >> v[i][j]; 
      }
    }
    vector<vector<int>> dp(n, vector<int>(n, 0));
    dp[0][0] = v[0][0];
    for (int i = 1; i < n; i++) {
      for (int j = 0; j <= i; j++) {
        int a = 0;
        int b = 0;
        if (v[i - 1][j] != -1) {
          a = dp[i - 1][j];
        }
        if (j > 0) {
          b = dp[i - 1][j - 1];
        }
        int max = std::max(a, b);
        dp[i][j] = v[i][j] + max;
      }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= i; j++) {
        ans = std::max(ans, dp[i][j]);
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















