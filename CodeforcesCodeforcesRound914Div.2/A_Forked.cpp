// time-limit: 2000
// problem-url: https://codeforces.com/contest/1904/problem/A
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
    int a, b;
    std::cin >> a >> b;
    int xk, yk, xq, yq;
    std::cin >> xk >> yk >> xq >> yq;
    std::set<std::pair<int, int>> c;
    auto f = [&] (int x, int y) {
      c.insert({x + a, y + b});
      c.insert({x + a, y - b});
      c.insert({x - a, y + b});
      c.insert({x - a, y - b});
      c.insert({x + b, y + a});
      c.insert({x + b, y - a});
      c.insert({x - b, y + a});
      c.insert({x - b, y - a});
    };
    f(xk, yk);
    f(xq, yq);
    std::cout << (a == b ? 8 : 16) - (int) c.size() << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















