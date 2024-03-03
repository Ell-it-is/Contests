// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc341/tasks/abc341_a
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
    bool one = true;
    for (int i = 0; i < 2 * n + 1; i++) {
      std::cout << (one ? "1" : "0");
      one = !one;
    }
    std::cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















