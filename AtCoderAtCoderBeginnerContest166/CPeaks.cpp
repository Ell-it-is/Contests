// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc166/tasks/abc166_c
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
    int n, m;
    std::cin >> n >> m;
    std::vector<int> h(n);
    for (int i = 0; i < n; i++) std::cin >> h[i];
    std::vector<int> obs(n + 1, -1);
    for (int i = 0; i < m; i++) {
      int a, b;
      std::cin >> a >> b;
      obs[a] = std::max(obs[a], h[b - 1]);
      obs[b] = std::max(obs[b], h[a - 1]);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
      int highest_connected = obs[i];
      if (highest_connected < h[i - 1]) cnt++;
    }
    std::cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















