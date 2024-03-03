// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc262/tasks/abc262_c
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
  int n = 4;
  vector<int> ans(n + 1);
  ans[0] = 1;
  db(ans);
  for (int i = 0; i < n; i++) {
    if (i + 1 <= n) ans[i + 1] += ans[i];
    if (i + 2 <= n) ans[i + 2] += ans[i];
    db(ans);
  }
  cout << ans[n] << "\n";
}
/* ================= Notes ================== //
   
*/


















