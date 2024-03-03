// time-limit: 2500
// problem-url: https://codeforces.com/contest/1923/problem/B
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
    int n, k;
    std::cin >> n >> k;
    std::vector<std::pair<int, int>> m(n);
    for (int i = 0; i < n; i++) {
      std::cin >> m[i].second;
    }
    for (int i = 0; i < n; i++) {
      int pos;
      std::cin >> pos;
      if (pos < 0) pos *= -1;
      m[i].first = pos;
    }
    std::sort(m.begin(), m.end());
    bool ok = true;
    int pass = 0;
    for (int i = 0; i < n; i++) {
      auto [pos, hp] = m[i];
      if (hp <= 0) continue;
      pos -= pass;
      int dist = pos;
      int rounds = (hp % k == 0) ? hp / k : hp / k + 1;
      if (rounds > dist) {
        ok = false;
        break;
      }
      if (hp % k != 0) {
        int bullets_left = k - (hp % k);
        int j = i + 1;
        while (j < n && bullets_left > 0) {
          int bullets_used = std::min(m[j].second, bullets_left);
          m[j].second -= bullets_used;
          bullets_left -= bullets_used;
          j++;
        }  
      }
      pass += rounds;
    }
    if (ok) {
      std::cout << "YES" << "\n";
    } else {
      std::cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















