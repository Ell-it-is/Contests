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
  int n = 3;
  vector<vector<int>> a = {
  { 4, 9, 7 },
  { 3, 8, 5 },
  { 1, 2, 6 }};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int top = 1e9;
      int left = 1e9;
      if (i > 0) top = a[i - 1][j];
      if (j > 0) left = a[i][j - 1];
      if (top != 1e9 || left != 1e9) {
        a[i][j] += std::min(top, left);
      }
    }
  }
  cout << a[n - 1][n - 1] << "\n";
}
/* ================= Notes ================== //
   
*/


















