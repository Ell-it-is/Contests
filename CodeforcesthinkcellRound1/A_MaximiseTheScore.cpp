// time-limit: 1000
// problem-url: https://codeforces.com/contest/1930/problem/A
// ================= Header ================= //
#include <bits/stdc++.h>
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
    std::cin >> n;
    int m = 2 * n;
    std::vector<int> a(m);
    for (int i = 0; i < m; i++) std::cin >> a[i];
    std::sort(a.rbegin(), a.rend());
    int sum = 0;
    for (int i = 1; i < m; i += 2) {
      sum += a[i];
    }
    std::cout << sum << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















