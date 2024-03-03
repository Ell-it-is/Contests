// time-limit: 2000
// problem-url: https://codeforces.com/contest/1926/problem/E
// ================= Header ================= //
#include <bits/stdc++.h>
typedef long long ll;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution =============== //
int get(int n, int k) {
  // if the k-th card I should pick
  // is withing odd numbers of range [1...n] -> say which one it is
  if (k <= (n + 1) / 2) {
    // value of odd number I take
    return 2 * k - 1;
  }
  // else half the input range [1...n / 2] until you can do the above
  // then pretty much just count how many times it should be multiplied to get the right answer
  return get(n / 2, k - (n + 1) / 2) * 2;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  std::cin >> tt;
  while (tt--) {
    int n, k;
    std::cin >> n >> k;
    std::cout << get(n, k) << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















