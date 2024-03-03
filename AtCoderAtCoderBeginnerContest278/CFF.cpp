// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc278/tasks/abc278_c
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
  //cin >> tt;
  while (tt--) {
    int n, q;
    cin >> n >> q;
    std::set<pair<int, int>> vs;
    for (int qq = 0; qq < q; qq++) {
      int t, a, b;
      cin >> t >> a >> b;
      if (t == 1) {
        // User A follows User B
        vs.insert({b, a});
      } else if (t == 2) {
        // User A unfollows User B
        vs.erase({b, a});
      } else {
        // If A -> B AND B -> A
        if (vs.count({a, b}) && vs.count({b, a})) {
          cout << "Yes" << "\n";
        } else {
          cout << "No" << "\n";
        }
      }
    }
  }
}
/* ================= Notes ================== //
   
*/


















