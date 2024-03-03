// time-limit: 1000
// problem-url: https://codeforces.com/contest/1003/problem/B
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
    int a, b, x;
    std::cin >> a >> b >> x;
    if (x == 1) {
      std::string ans = std::string(a, '1') + std::string(b, '0');
      std::cout << ans << "\n";
      continue;
    }
    std::string ans = "";
    
  }
}
/* ================= Notes ================== //
   11110000 - 1

   01111000 - 2
   01110001 - 3
   
   01011100 - 4
   01011001 - 5
   
   01010110 - 6
   01010101 - 7
*/
















