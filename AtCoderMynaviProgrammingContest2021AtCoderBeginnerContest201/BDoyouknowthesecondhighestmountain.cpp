// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc201/tasks/abc201_b
// Start: DATE
// End: DATE
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
    cin >> n;
    vector<pair<int, string>> v(n);
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      int t;
      cin >> t;
      v[i] = {t, s};
    }
    sort(v.begin(), v.end());
    cout << v[n - 2].second << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















