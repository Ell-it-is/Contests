// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc194/tasks/abc194_a
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
    int a, b;
    cin >> a >> b;
    a += b;
    if (a >= 15 && b >= 8) {
      cout << 1 << "\n";
    } else if (a >= 10 && b >= 3) {
      cout << 2 << "\n";
    } else if (a >= 3) {
      cout << 3 << "\n";
    } else {
      cout << 4 << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















