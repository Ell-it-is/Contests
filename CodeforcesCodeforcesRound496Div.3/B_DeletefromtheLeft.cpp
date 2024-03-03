// time-limit: 1000
// problem-url: https://codeforces.com/contest/1005/problem/B
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
    std::string s, t;
    std::cin >> s >> t;
    int n = (int) s.size();
    int m = (int) t.size();
    int i = n;
    int j = m;
    while (i > 0 && j > 0 && s[i - 1] == t[j - 1]) {
      i--;
      j--;
    }
    std::cout << i + j << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















