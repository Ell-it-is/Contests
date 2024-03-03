// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc166/tasks/abc166_b
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
    std::map<int, int> map;
    for (int i = 0; i < k; i++) {
      int d;
      std::cin >> d;
      for (int i = 0; i < d; i++) {
        int snuke;
        std::cin >> snuke;
        map[snuke]++;
      }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
      if (map.find(i) == map.end()) cnt++; 
    }
    std::cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















