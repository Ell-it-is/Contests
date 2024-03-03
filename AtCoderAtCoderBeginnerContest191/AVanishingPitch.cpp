// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc191/tasks/abc191_a
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
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    // At what meters does the ball become invisible?
    int m1 = t * v;
    int m2 = s * v;
    if (d < m1 || d > m2) {
      cout << "Yes" << "\n";
    } else {
      cout << "No" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















