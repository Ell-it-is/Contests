// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc192/tasks/abc192_c
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
    int n, k;
    std::cin >> n >> k;
    int ans = 0;
    for (int i = 0; i < k; i++) {
      std::string s = std::to_string(n);
      std::sort(s.begin(), s.end());
      int min = std::stoi(s);
      std::reverse(s.begin(), s.end());
      int max = std::stoi(s);
      n = max - min;
    }
    std::cout << n << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















