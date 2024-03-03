// time-limit: 2000
// problem-url: https://codeforces.com/contest/999/problem/C
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
    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;
    std::map<char, int> map;
    for (int i = 0; i < n; i++) map[s[i]]++;
    for (auto&& [c, cnt] : map) {
      int temp = cnt;
      cnt = std::max(cnt - k, 0);
      k -= temp - cnt;
    }
    std::string ans = "";
    for (int i = n - 1; i >= 0; i--) {
      if (map[s[i]] > 0) {
        ans += s[i];
        map[s[i]]--;
      }
    }
    std::reverse(ans.begin(), ans.end());
    std::cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















