// time-limit: 1000
// problem-url: https://codeforces.com/contest/1930/problem/B
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
    std::vector<int> p(n);
    int x = 1;
    for (int i = 0; i < n; i += 2) p[i] = x++;
    x = n;
    for (int i = 1; i < n; i += 2) p[i] = x--;
    for (int i = 0; i < n; i++) std::cout << p[i] << " ";
    std::cout << "\n";
  }
}
/* ================= Notes ================== //
   For all elements it is true that: (p[i] % p[j] != 0) || (p[i + 1] % p[j + 1] != 0)

*/
















