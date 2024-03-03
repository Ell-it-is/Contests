// time-limit: 1000
// problem-url: https://codeforces.com/contest/1926/problem/0
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
    std::string s;
    std::cin >> s;
    int a = std::count(s.begin(), s.end(), 'A');
    int b = std::count(s.begin(), s.end(), 'B');
    if (a > b) {
      std::cout << "A" << "\n";
    } else {
      std::cout << "B" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















