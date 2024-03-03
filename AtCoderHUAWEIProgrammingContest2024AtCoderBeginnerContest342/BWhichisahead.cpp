// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc342/tasks/abc342_b

#include <bits/stdc++.h>
using ll = long long;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution =============== //

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int n;
  std::cin >> n;
  std::map<int, int> p;
  for (int i = 0; i < n; i++) {
    int person;
    std::cin >> person;
    p[person] = i;
  }

  int Q;
  std::cin >> Q;
  for (int q = 0; q < Q; q++) {
    int a, b;
    std::cin >> a >> b;
    std::cout << (p[a] < p[b] ? a : b) << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















