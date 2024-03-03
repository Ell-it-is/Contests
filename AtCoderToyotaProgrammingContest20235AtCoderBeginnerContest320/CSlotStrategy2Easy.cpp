// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc320/tasks/abc320_c
// Start: DATE
// End: DATE
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
    int m;
    cin >> m;
    vector<int> a(m);
    vector<int> b(m);
    vector<int> c(m);
    string as;
    cin >> as;
    for (int i = 0; i < m; i++) {
      a[i] = as[i] - '0';
    }
    string ab;
    cin >> ab;
    for (int i = 0; i < m; i++) {
      int x = ab[i] - '0';
      b[i] = x;
    }
    string ac;
    cin >> ac;
    for (int i = 0; i < m; i++) {
      int x = ac[i] - '0';
      c[i] = x;
    }
    int min = numeric_limits<int>::max();
    for (int i = 0; i < m; i++) {
      int ath = i % m;
      int x = a[ath];
      for (int j = 0; j < m; j++) {
        int bth = j % m;
        int y = b[bth];
        for (int k = 0; k < m; k++) {
          int cth = k % m;
          int z = c[cth];
          if (x == y && y == z) {
            /*
             * Positions:
             * dist = distance between max and the duplicates
             * All distinct -> max
             * 2 same -> max + dist
             * 3 same -> max + 2m
             */
            int ans = 0;
            int max = std::max({ath, bth, cth});
            set<int> set {ath, bth, cth};
            if (set.size() == 1) {
              // 3 same
              ans = max + 2 * m;
            } else if (set.size() == 2) {
              // 2 same
              int dupl = 0;
              if (ath == bth || ath == cth) dupl = ath;
              if (bth == cth) dupl = bth;
              if (max == dupl) {
                ans = max + m;
              } else {
                ans = max + (m - max) + (dupl);
              }
            } else {
              // all distinct
              ans = max;
            }
            min = std::min(min, ans);
          }
        }  
      }
    }
    if (min == numeric_limits<int>::max()) {
      cout << -1 << '\n';
    } else {
      cout << min << '\n';
    }
  }
}
/* ================= Notes ================== //
   
*/


















