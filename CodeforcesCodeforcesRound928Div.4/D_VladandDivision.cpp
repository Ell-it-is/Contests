// time-limit: 2000
// problem-url: https://codeforces.com/contest/1926/problem/D
// ================= Header ================= //
#include <bits/stdc++.h>
typedef long long ll;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution =============== //
int invert_bits(int n) {
  return n ^ (1ll << 31) - 1;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  std::cin >> tt;
  while (tt--) {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) std::cin >> a[i];
    int groups = 0;
    std::map<int, int> cnt;
    for (int i = 0; i < n; i++) {
      int inverse = invert_bits(a[i]);
      // if we found a match, say we belong to the same group -> that is discard group
      if (cnt[inverse] > 0) cnt[inverse]--;
      // if a[i] doesn't have a buddy, make him a new group and look for buddy
      else {
        cnt[a[i]]++;
        groups++;
      }
    }
    std::cout << groups << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















