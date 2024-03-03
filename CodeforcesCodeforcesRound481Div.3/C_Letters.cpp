// time-limit: 4000
// problem-url: https://codeforces.com/contest/978/problem/C
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
    std::vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++) std::cin >> a[i];
    for (int i = 0; i < m; i++) std::cin >> b[i];
    std::vector<ll> psum(n);
    psum[0] = a.front();
    for (int i = 1; i < n; i++) {
      psum[i] = psum[i - 1] + a[i];
    }
    for (int i = 0; i < m; i++) {
      int idx = std::lower_bound(psum.begin(), psum.end(), b[i]) - psum.begin();
      std::cout << idx + 1 << " " << (idx > 0 ? b[i] - psum[idx - 1] : b[i]) << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















