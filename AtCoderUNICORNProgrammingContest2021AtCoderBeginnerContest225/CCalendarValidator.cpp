// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc225/tasks/abc225_c
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
    vector<vector<ll>> v(n, vector<ll>(m));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> v[i][j];
        v[i][j] -= ((i + 1) - 1) * 7 + (j + 1); 
      }
    }
    bool ans = true;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (v[i][j] != v[0][0]) ans = false;
      }
    }
    cout << (ans ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















