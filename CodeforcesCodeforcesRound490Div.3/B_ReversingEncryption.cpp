// time-limit: 1000
// problem-url: https://codeforces.com/contest/999/problem/B
// ================= Header ================= //
#include <bits/stdc++.h>
typedef long long ll;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution =============== //
std::vector<int> get_divs(int n) {
  std::vector<int> divs;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) divs.push_back(i);
  }
  return divs;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  //std::cin >> tt;
  while (tt--) {
    int n;
    std::cin >> n;
    std::string t;
    std::cin >> t;
    std::vector<int> divs = get_divs(n);
    int m = (int) divs.size();
    for (int i = 0; i < m; i++) {
      int d = divs[i];
      std::reverse(t.begin(), t.begin() + d);
    }
    std::cout << t << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















