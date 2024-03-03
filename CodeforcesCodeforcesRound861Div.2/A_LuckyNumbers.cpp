// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1808/A
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
    int l, r;
    cin >> l >> r;
    int ans = 0;
    int max_luck = 0;
    for (int i = l; i <= r; i++) {
      string s = to_string(i);
      int luck = *std::max_element(s.begin(), s.end()) - *std::min_element(s.begin(), s.end());
      if (luck == 9) {
        ans = i;
        break;
      } else {
        if (luck >= max_luck) {
          max_luck = luck;
          ans = i;
        }
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   9 0
   9 1 | 8 0
   9 2 | 8 1 | 7 0
   9 3 | 8 2 | 7 1 | 6 0
   ...
   9 9 | 8 8 | 7 7 | ...

   
*/


















