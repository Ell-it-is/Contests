// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1755
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
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    string s;
    cin >> s;
    int n = (int) s.size();
    int odd = 0;
    std::map<char, int> map;
    for (char c : s) map[c]++;
    for (auto&& [c, cnt] : map) {
      if (cnt % 2) odd++;
    }
    if (odd <= 1) {
      string ans = "";
      char odd_c;
      int odd_cnt = 0;
      for (auto&& [c, cnt] : map) {
        if (cnt % 2) {
          odd_c = c;
          odd_cnt = cnt;
          continue;
        }
        ans += std::string(cnt / 2, c);
      }
      string rev = ans;
      std::reverse(rev.begin(), rev.end());
      if (odd == 1) {
        ans += std::string(odd_cnt, odd_c);
      }
      ans += rev;
      cout << ans << "\n";
    } else {
      cout << "NO SOLUTION" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















