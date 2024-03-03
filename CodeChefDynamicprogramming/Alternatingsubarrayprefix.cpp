// time-limit: 1000
// problem-url: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/ALTARAY
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
    vector<int> ans(n);
    vector<int> dp(n);
    dp[n - 1] = 1;
    ans[n - 1] = 1;
    bool last_pos = a[n - 1] > 0;
    for (int i = n - 2; i >= 0; i--) {
      bool cur_pos = a[i] > 0;
      if (last_pos == cur_pos) {
        dp[i] = 1;
      } else {
        dp[i] = dp[i + 1] + 1;
      }
      ans[i] = dp[i];
      last_pos = cur_pos;
    }
    for (int x : ans) {
      cout << x << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















