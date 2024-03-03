// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc332/tasks/abc332_b
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
    int k, g, m;
    cin >> k >> g >> m;
    int glass = 0;
    int mug = 0;
    for (int i = 0; i < k; i++) {
      if (glass == g) {
        glass = 0;
      } else if (mug == 0) {
        mug = m;
      } else {
        // transfer water from the mug to the glass
        int remains_to_fill = g - glass;
        if (mug <= remains_to_fill) {
          glass += mug;
          mug = 0;
        } else {
          mug -= remains_to_fill;
          glass = g;
        }
      }
    }
    cout << glass << " " << mug << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















