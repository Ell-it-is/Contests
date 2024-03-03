// time-limit: 2000
// problem-url: https://codeforces.com/contest/1932/problem/D
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
  /*
   * Typy karet: C D H S
   * Rank: 2 ... 9
   *
   * Karta: 5D
   * Zolik:
   *
   */
  while (tt--) {
    int n;
    std::cin >> n;
    char t;
    std::cin >> t;
    std::vector<std::string> a;
    std::vector<std::string> b;
    std::vector<std::string> c;
    std::vector<std::string> d;
    std::vector<std::string> suits;
    for (int i = 0; i < 2 * n; i++) {
      std::string s;
      std::cin >> s;
      if (s[1] == 'C') a.push_back(s);
      if (s[1] == 'D') b.push_back(s);
      if (s[1] == 'H') c.push_back(s);
      if (s[1] == 'S') d.push_back(s);
      if (t == 'C' && s[1] == 'C') suits.push_back(s);
      if (t == 'D' && s[1] == 'D') suits.push_back(s);
      if (t == 'H' && s[1] == 'H') suits.push_back(s);
      if (t == 'S' && s[1] == 'S') suits.push_back(s);
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    std::sort(c.begin(), c.end());
    std::sort(d.begin(), d.end());
    std::sort(suits.begin(), suits.end());

    std::vector<std::string> ans;
    int idx = 0;
    int sm = (int) suits.size();
    auto f = [&] (std::vector<std::string> v, char name) {
      if (name == t) return;
      int i = 0;
      int l = (int) v.size() - 1;
      while (i < l && v[i][0] < v[l][0]) {
        ans.push_back(v[i++]);
        ans.push_back(v[l--]);
      }
      while (i <= l && idx < sm) {
        ans.push_back(v[i++]);
        ans.push_back(suits[idx++]);
      }
    };
    f(a, 'C');
    f(b, 'D');
    f(c, 'H');
    f(d, 'S');
    for (; idx < sm - 1; idx += 2) {
      ans.push_back(suits[idx]);
      ans.push_back(suits[idx + 1]);
    }
    
    if ((int) ans.size() != 2 * n) {
      std::cout << "IMPOSSIBLE" << "\n";
    } else {
      for (int k = 0; k < 2 * n; k += 2) {
        std::cout << ans[k] << " " << ans[k + 1] << "\n";
      }  
    }
  }
}
/* ================= Notes ================== //
   
*/
















