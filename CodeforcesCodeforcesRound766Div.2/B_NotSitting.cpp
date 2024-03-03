// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1627/B
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
int mdist(int x, int y, int p, int q) {
  return std::abs(x - p) + std::abs(y - q);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, 0));
    vector<int> ans;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        // check the dist to 4 corners and pick the biggest one
        int a = mdist(i, j, 0, 0);
        int b = mdist(i, j, 0, m - 1);
        int c = mdist(i, j, n - 1, 0);
        int d = mdist(i, j, n - 1, m - 1);
        int max_dist = std::max({a, b, c, d});
        ans.push_back(max_dist);
      }
    }
    std::sort(ans.begin(), ans.end());
    for (int x : ans) {
      cout << x << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















