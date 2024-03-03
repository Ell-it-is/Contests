// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc342/tasks/abc342_a

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

  std::string s;
  std::cin >> s;

  int ans = 0;
  int n = (int) s.size();
  
  for (int i = 1; i < n - 1; i++) {
    if (s[i - 1] != s[i] && s[i] != s[i + 1]) {
      ans = i + 1;
      break;
    }
  }
  
  std::cout << (ans ? ans : (s[0] == s[1] ? n : 1)) << "\n";
}
/* ================= Notes ================== //
   
*/


















