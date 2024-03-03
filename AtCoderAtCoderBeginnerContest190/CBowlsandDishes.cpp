// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc190/tasks/abc190_c
// ================= Header ================= //
#include <bits/stdc++.h>
typedef long long ll;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution =============== //
int n, m, k;
int ans = 0;

void f(int row, int col,
  std::vector<std::vector<int>> &b,
  std::vector<std::vector<int>> &c, std::map<int, std::vector<int>> &say) {
  if (row == k - 1) {
    for (int col = 0; col < 2; col++) {
      c[k - 1][col] = 1;
      std::vector<int> rows(m);
      for (int i = 0; i < k; i++) {
        int bval = (c[i][0] ? b[i][0] : b[i][1]);
        std::vector<int> w = say[bval];
        for (int row : w) {
          rows[row]++;
        }
      }
      int cnt = 0;
      for (int i = 0; i < m; i++) {
        if (rows[i] == 2) cnt++; 
      }
      ans = std::max(ans, cnt);
      c[k - 1][col] = 0;
    }
    return;
  }

  c[row][0] = 1;
  f(row + 1, 0, b, c, say);
  c[row][0] = 0;
  
  c[row][1] = 1;
  f(row + 1, 1, b, c, say);
  c[row][1] = 0;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  //std::cin >> tt;
  while (tt--) {
    std::cin >> n >> m;
    std::vector<std::vector<int>> a(m, std::vector<int>(2));
    std::map<int, std::vector<int>> say;
    for (int i = 0; i < m; i++) {
      std::cin >> a[i][0];
      std::cin >> a[i][1];
      say[a[i][0]].push_back(i);
      say[a[i][1]].push_back(i);
    }
    std::cin >> k;
    std::vector<std::vector<int>> b(k, std::vector<int>(2)), c(k, std::vector<int>(2)); 
    for (int i = 0; i < k; i++) {
      std::cin >> b[i][0];
      std::cin >> b[i][1];
    }
    f(0, 0, b, c, say);
    f(0, 1, b, c, say);
    std::cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















