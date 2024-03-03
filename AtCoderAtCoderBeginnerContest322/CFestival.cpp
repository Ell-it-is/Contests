// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc322/tasks/abc322_c
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
    vector<int> d(m);
    for (int i = 0; i < m; i++) {
      cin >> d[i];
    }
    int j = 0;
    for (int i = 0; i < n; i++) {
      cout << d[j] - (i + 1) << "\n";
      if (d[j] == (i + 1)) {
        j++;
      }
    }
  }
}
/* ================= Notes ================== //
   
*/


















