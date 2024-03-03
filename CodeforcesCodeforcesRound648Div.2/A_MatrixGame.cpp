// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1365/A
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
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> v[i][j];
      }
    }
    int a, b;
    a = b = 0;
    for (int i = 0; i < n; i++) {
      bool row_free = true;
      for (int j = 0; j < m; j++) {
        if (v[i][j] == 1) row_free = false;
      }
      if (row_free) a++;
    }
    for (int i = 0; i < m; i++) {
      bool col_free = true;
      for (int j = 0; j < n; j++) {
        if (v[j][i] == 1) col_free = false; 
      }
      if (col_free) b++;
    }
    int ans = std::min(a, b);
    cout << (ans % 2 == 1 ? "Ashish" : "Vivek") << "\n";
  }
}
/* ================= Notes ================== //
   A goes first
   A cell can be claimed if it does not share row or column with any shared cell
   It should be optimal to claim a cell that makes maximum other cells unclaimable

   If I claim i-th free row I will also make i-th free col claimed

   Whenever you affect cell [i][j] you affect row [i] and col [j]
   and since you can only pick [i] and [j] that are unaffected, after you pick this cell, they both get affected
*/


















