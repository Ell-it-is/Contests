// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc194/tasks/abc194_b
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
    int min = INT_MAX;
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      v[i] = {a, b};
      min = std::min(min, a + b);
    }
    int ans = min;
    min = INT_MAX;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == j) continue;
        min = std::min(min, std::max(v[i].first, v[j].second));
      }
    }
    ans = std::min(ans, min);
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















