// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc244/tasks/abc244_c
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
    int n;
    cin >> n;
    std::set<int> p;
    bool him = false;
    for (int i = 0; i < 2 * n + 1; i++) {
      if (him) {
        int x;
        cin >> x;
        p.insert(x);
      } else {
        for (int k = 1; k <= 2 * n + 1; k++) {
          if (!p.count(k)) {
            p.insert(k);
            cout << k << "\n";
            cout << flush;
            break;
          }
        }
      }
      him = !him;
    }
  }
}
/* ================= Notes ================== //
   
*/


















