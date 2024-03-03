// time-limit: 3000
// problem-url: https://codeforces.com/contest/1923/problem/C
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
    int n, Q;
    std::cin >> n >> Q;
    std::vector<ll> c(n);
    for (int i = 0; i < n; i++) {
      std::cin >> c[i];
    }
    std::vector<ll> pone(n);
    pone[0] = c[0] == 1;
    for (int i = 1; i < n; i++) {
      pone[i] = pone[i - 1] + (c[i] == 1);
    }
    std::vector<ll> psum(n); // psum without ones
    psum[0] = (c[0] == 1 ? 0 : c[0]);
    for (int i = 1; i < n; i++) {
      psum[i] = psum[i - 1] + (c[i] == 1 ? 0 : c[i]);
    }
    for (int q = 0; q < Q; q++) {
      int l, r;
      std::cin >> l >> r;
      l--;
      r--;
      if (l == r) {
        std::cout << "NO" << "\n";
        continue;
      }
      auto fun = [&] (int l, int r, std::vector<ll> &v) {
        return (l ? v[r] - v[l - 1] : v[r]);
      };
      ll ones = fun(l, r, pone);
      ll sum_of_others = fun(l, r, psum);
      sum_of_others -= r - l + 1 - ones;
      if (ones > 1 && sum_of_others < ones) {
        std::cout << "NO" << "\n";
      } else {
        std::cout << "YES" << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   
*/
















