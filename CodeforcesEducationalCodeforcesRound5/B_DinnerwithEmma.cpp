// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/616/B
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
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> v[i][j];
      }
    }
    vector<int> mins(n);
    for (int i = 0; i < n; i++) {
      int min = INT_MAX;
      for (int j = 0; j < m; j++) {
        min = std::min(min, v[i][j]);
      }
      mins[i] = min;
    }
    int ans = 0;
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
      if (mins[i] > max) {
        max = mins[i];
        ans = mins[i];
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   Jack - modest
   Emma - spoiled

   1. Emma - row
   2. Jack - col

   So Emma should pick a row that has the biggest minimum
   And Jack chooses any of the minimums on the chosen row
*/


















