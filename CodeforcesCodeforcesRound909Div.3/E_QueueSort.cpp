// time-limit: 1000
// problem-url: https://codeforces.com/contest/1899/problem/E
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
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) std::cin >> a[i];
    int i = n - 1;
    while (i > 0 && a[i - 1] <= a[i]) {
      i--;
    }
    if (i > 0 && *std::min_element(a.begin(), a.begin() + i) <= a[i]) {
      std::cout << -1 << "\n";
    } else {
      std::cout << i << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















