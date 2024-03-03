// time-limit: 1500
// problem-url: https://codeforces.com/contest/1925/problem/B
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
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int x, n;
    cin >> x >> n;
    int ans = 1;
    for (int i = 1; i * i <= x; i++) {
      if (x % i == 0) {
        if (n <= x / i) {
          ans = std::max(ans, i);
        }
        if (n <= i) {
          ans = std::max(ans, x / i);
        }
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















