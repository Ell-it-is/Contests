// time-limit: 1000
// problem-url: https://codeforces.com/contest/978/problem/A
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
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) std::cin >> a[i];
    std::set<int> seen;
    std::vector<int> ans;
    for (int i = n - 1; i >= 0; i--) {
      if (!seen.count(a[i])) ans.push_back(a[i]);
      seen.insert(a[i]);
    }
    std::reverse(ans.begin(), ans.end());
    std::cout << (int) ans.size() << "\n";
    for (int i = 0; i < (int) ans.size(); i++) {
      std::cout << ans[i] << " ";
    }
    std::cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















