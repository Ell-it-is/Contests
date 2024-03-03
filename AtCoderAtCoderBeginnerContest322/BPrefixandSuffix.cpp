// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc322/tasks/abc322_b
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
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    bool is_prefix = t.substr(0, n) == s;
    bool is_suffix = t.substr(m - n) == s;
    int ans = 0;
    if (is_prefix && !is_suffix) {
      ans = 1;
    } else if (!is_prefix && is_suffix) {
      ans = 2;
    } else if (!is_prefix && !is_suffix) {
      ans = 3;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















