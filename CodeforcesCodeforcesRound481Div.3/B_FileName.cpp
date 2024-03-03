// time-limit: 1000
// problem-url: https://codeforces.com/contest/978/problem/B
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
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    int ans, cnt;
    ans = cnt = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] != 'x') {
        cnt = 0;
      } else {
        cnt++;
        if (cnt == 3) {
          ans++;
          cnt--;
        }
      }
    }
    std::cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















