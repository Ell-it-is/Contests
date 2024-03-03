// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1624
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
    int n = 8;
    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<vector<bool>> blocked(n, vector<bool>(n));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (v[i][j] == '*') blocked[i][j] = true;
      }
    }
    vector<int> queens(n);
    std::iota(queens.begin(), queens.end(), 0);
    int cnt = 0;
    do {
      bool good = true;
      for (int c = 0; c < n; c++) {
        if (blocked[queens[c]][c]) {
          good = false;
          break;
        }
      }
      vector<bool> taken(2 * n - 1);
      for (int c = 0; c < n; c++) {
        if (taken[queens[c] + c]) {
          good = false;
          break;
        }
        taken[queens[c] + c] = true;
      }
      vector<bool> taken2(2 * n - 1);
      for (int c = 0; c < n; c++) {
        if (taken2[queens[c] - c + n - 1]) {
          good = false;
          break;
        }
        taken2[queens[c] - c + n - 1] = true;
      }
      cnt += good;
    } while (std::next_permutation(queens.begin(), queens.end()));
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















