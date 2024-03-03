// time-limit: 2000
// problem-url: https://codeforces.com/contest/1006/problem/B
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
    std::vector<int> b(a);
    std::sort(b.rbegin(), b.rend());
    int sum = 0;
    std::multiset<int> big;
    for (int i = 0; i < k; i++) {
      sum += b[i];
      big.insert(b[i]);
    }
    std::vector<int> ans;
    for (int i = 0; i < n; i++) {
      if (big.count(a[i])) {
        if ((int) ans.size() > 0) {
          ans.push_back(i + 1 - ans.back());
        } else {
          ans.push_back(i + 1);
        }
        big.erase(big.find(a[i]));
      }
    }
    std::cout << sum << "\n";
    int add = 0;
    for (int i = 0; i < (int) ans.size(); i++) {
      if (i == (int) ans.size() - 1) {
        std::cout << n - add << " ";
      } else {
        std::cout << ans[i] << " ";
      }
      add += ans[i];
    }
    std::cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















