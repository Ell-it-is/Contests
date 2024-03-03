// time-limit: 1000
// problem-url: https://codeforces.com/contest/1905/problem/C
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
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    
    std::vector<int> pos;
    for (int i = n - 1; i >= 0; i--) {
      if (pos.empty() || s[i] >= s[pos.back()]) {
        pos.push_back(i);
      }
    }
    std::reverse(pos.begin(), pos.end());
    
    int j = 0;
    while (j < pos.size() && s[pos[0]] == s[pos[j]]) {
      j++;
    }
    
    int ans = pos.size() - j;
    for (int i = 0; i < pos.size() - 1 - i; i++) {
      std::swap(s[pos[i]], s[pos[pos.size() - 1 - i]]);
    }
    if (!std::is_sorted(s.begin(), s.end())) {
      ans = -1;
    }
    std::cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















