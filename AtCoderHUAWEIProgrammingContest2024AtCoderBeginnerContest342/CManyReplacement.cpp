// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc342/tasks/abc342_c

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
  std::string s;
  std::cin >> s;

  std::map<char, char> map;
  for (int i = 0; i < n; i++) {
    map[s[i]] = s[i];
  }
  
  int Q;
  std::cin >> Q;
  for (int q = 0; q < Q; q++) {
    char c, d;
    std::cin >> c >> d;

    
  }
}
/* ================= Notes ================== //
   
*/


















