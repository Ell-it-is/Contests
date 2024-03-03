// time-limit: 1000
// problem-url: https://www.codechef.com/practice/course/dynamic-programming/INTDP01/problems/MAXCOMP
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
    vector<pair<pair<int, int>, int>> v;
    for (int i = 0; i < n; i++) {
      int s, e, c;
      cin >> s >> e >> c;
      v[i] = {{s,e},c};
    }
    std::sort(v.begin(), v.end(), [] (auto a, auto b) {
      auto left = a.first;
      auto right = b.first;
      return left.second == right.second ? left.first < right.first : left.second < right.second;
    });
    db(v);
    vector<int> dp(n); // max sum of compensations for i-th event
    dp[0] = v[0].second;
    int ans = dp[0]; // c[0]
    for (int i = 1; i < n; i++) {
      dp[i] = v[i].second; // c[i]
      for (int j = 0; j < i; j++) {
        if (v[j].first.second <= v[i].first.first) {
          dp[i] = std::max(dp[i], dp[j] + v[i].second);
        }
      }
      ans = std::max(ans, dp[i]);
    }
    db(dp);
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















