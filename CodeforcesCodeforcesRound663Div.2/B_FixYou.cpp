// time-limit: 1000
// problem-url: https://codeforces.com/contest/1391/problem/B
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
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (v[i][m - 1] == 'R') cnt++;
    }
    for (int j = 0; j < m; j++) {
      if (v[n - 1][j] == 'D') cnt++;
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   bottom row must be all R (except bottom-right)
   rightmost column must be all D (except bottom-right) 
   I think the rest is w/e
*/


















