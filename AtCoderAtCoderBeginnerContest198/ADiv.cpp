// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc198/tasks/abc198_a
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
    if (n == 1) {
      cout << 0 << "\n";
    } else {
      cout << n - 1 << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















