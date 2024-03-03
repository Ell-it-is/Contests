// time-limit: 2000
// problem-url: https://codeforces.com/contest/1896/problem/C
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
    int n, x;
    cin >> n >> x;
    std::vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      a[i] = {num, i};
    }
    
    std::vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    std::rotate(b.begin(), b.begin() + x, b.end());
    std::vector<int> ans(n);
    int beauty = 0;
    for (int i = 0; i < n; i++) {
      ans[a[i].second] = b[i];
      beauty += (a[i].first > b[i]);
    }
    if (beauty == x) {
      std::cout << "YES" << "\n";
      for (int i = 0; i < n; i++) {
        std::cout << ans[i] << " ";
      }
      std::cout << "\n";
    } else {
      std::cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   The idea is that I put x smallest values of 'b' under x biggest values of 'a'
*/
















