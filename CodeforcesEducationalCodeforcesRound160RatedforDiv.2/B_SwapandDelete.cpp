// time-limit: 1000
// problem-url: https://codeforces.com/contest/1913/problem/B
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
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
    cin >> s;
    int n = (int) s.size();
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '0') zero++;
      if (s[i] == '1') one++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '0' && one > 0) {
        one--;
        continue;
      }
      if (s[i] == '1' && zero > 0) {
        zero--;
        continue;
      }
      ans = n - i;
      break;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   when t[i] != s[i], t[i] is good for all positions in 't'
*/
















