// time-limit: 1000
// problem-url: https://codeforces.com/contest/1899/problem/C
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
    vector<int> dp(n);
    dp[0] = a[0];
    auto parity = [&] (int a, int b) {
      return ((a ^ b) & 1) == 0; 
    };
    for (int i = 1; i < n; i++) {
      dp[i] = (!parity(a[i - 1], a[i]) ? std::max(a[i], dp[i - 1] + a[i]) : a[i]);
    }
    int max = *std::max_element(dp.begin(), dp.end());
    cout << max << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















