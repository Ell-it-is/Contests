// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc327/tasks/abc327_c
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
bool check_row(int x, int y, vector<vector<int>> &v) {
  for (int col = 0; col < 9; col++) {
    if (col == y) continue;
    if (v[x][col] == v[x][y]) return false;
  }
  return true;
}

bool check_col(int x, int y, vector<vector<int>> &v) {
   for (int row = 0; row < 9; row++) {
     if (row == x) continue;
     if (v[row][y] == v[x][y]) return false;
   }
   return true;
}

bool check_box(int x, int y, vector<vector<int>> &v) {
  std::set<int> set;
  for (int i = x; i < x + 3; i++) {
    for (int j = y; j < y + 3; j++) {
      set.insert(v[i][j]);
    }
  }
  return set.size() == 9;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int n = 9;
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> v[i][j];
      }
    }
    bool ans = true;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (!check_row(i, j, v)) ans = false;
        if (!check_col(i, j, v)) ans = false;
      }
    }
    // check the 3x3 grids
    vector<pair<int, int>> p {{0,0}, {0, 3}, {0, 6}, {3, 0}, {3, 3}, {3, 6}, {6, 0}, {6, 3}, {6, 6}};
    for (auto x : p) {
      if (!check_box(x.first, x.second, v)) ans = false;
    }
    cout << (ans ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















