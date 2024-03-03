// time-limit: 1000
// problem-url: https://codeforces.com/contest/1006/problem/A
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
  //std::cin >> tt;
  while (tt--) {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) std::cin >> a[i];
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 0) --a[i];
    }
    for (int i = 0; i < n; i++) {
      std::cout << a[i] << " ";
    }
    std::cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















