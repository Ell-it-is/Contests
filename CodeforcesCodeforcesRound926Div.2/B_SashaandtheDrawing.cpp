// time-limit: 1000
// problem-url: https://codeforces.com/contest/1929/problem/B
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
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
    cin >> n >> k;
    if (k == 4 * n - 2) {
      // == 2 * n colored
      cout << 2 * n << "\n";
    } else if (k == 4 * n - 3) {
      // == 2 * n - 1 colored
      cout << 2 * n - 1 << "\n";
    } else {
      // <= 2 * n - 2 colored
      cout << (k + 1) / 2 << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















