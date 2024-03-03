// time-limit: 2000
// problem-url: https://codeforces.com/contest/1883/problem/C
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
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) std::cin >> a[i];
    std::sort(a.begin(), a.end());
    int product = 1;
    for (int i = 0; i < n; i++) product *= a[i];
    if (k == 2 || k == 3 || k == 5) {
      int x = 0;
      while ((x + a[0]) * (product / a[0]) % k != 0) x++;
      std::cout << x << "\n";
    } else {
      std::cout << 0 << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















