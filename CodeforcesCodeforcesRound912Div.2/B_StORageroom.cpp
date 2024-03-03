// time-limit: 2000
// problem-url: https://codeforces.com/contest/1903/problem/B
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
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  std::cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
      a[i] = (1 << 30) - 1;
    }
    std::vector<vector<int>> M(n, std::vector<int>(n));
    for (int row = 0; row < n; row++) {
      for (int j = 0; j < n; j++) cin >> M[row][j];
      for (int col = row + 1; col < n; col++) {
        // for each bit that is off at value of M[row][col], make sure that a[row] and a[col] has that bit off
        a[row] &= M[row][col];
        a[col] &= M[row][col];
      }
    }
    bool ans = true;
    for (int row = 0; row < n; row++) {
      for (int col = row + 1; col < n; col++) {
        if (M[row][col] != (a[row] | a[col])) ans = false;
      }
    }
    if (ans) {
      cout << "YES" << "\n";
      for (int num : a) {
        cout << num << " ";
      }
      cout << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















