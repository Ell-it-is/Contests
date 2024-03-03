// time-limit: 1000
// problem-url: https://codeforces.com/contest/1889/problem/A
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
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    bool can = n % 2 == 0;
    for (int i = 0; i < n - i - 1; i++) {
      if (s[i] == '0' && s[n - i - 1] == '1') can = false; 
    }
    if (!can) {
      std::cout << -1 << "\n";
      continue;
    }
    bool ok = true;
    for (int i = 0; i < n - i - 1; i++) {
      if (s[i] == s[n - i - 1]) ok = false; 
    }
    std::vector<int> ans;
    if (!ok) {
      int i = 0;
      while (i < n) {
        if (s[i] == '1' && s[n - i - 1] == '0') {
          ans.push_back(i + 1);
          s = s.substr(0, i) + "01" + s.substr(i);
          i--;
        }
        i++;
      }
    }
    std::cout << (int) ans.size() << "\n";
    for (int an : ans) {
      std::cout << an << " ";
    }
    std::cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















