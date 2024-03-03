// time-limit: 1000
// problem-url: https://codeforces.com/contest/988/problem/A
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
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) std::cin >> a[i];
    std::set<int> seen;
    std::vector<int> ans;
    for (int i = 0; i < n && (int) ans.size() < k; i++) {
      if (!seen.count(a[i])) ans.push_back(i + 1);
      seen.insert(a[i]);
    }
    if ((int) ans.size() == k) {
      std::cout << "YES" << "\n";
      for (int i = 0; i < (int) ans.size(); i++) {
        std::cout << ans[i] << " ";
      }
      std::cout << "\n";
    } else {
      std::cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















