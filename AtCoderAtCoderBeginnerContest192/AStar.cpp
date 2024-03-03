// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc192/tasks/abc192_a
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
    int x;
    cin >> x;
    if (x % 100 == 0) {
      cout << 100 << "\n";
    } else {
      cout << 100 - (x % 100) << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















