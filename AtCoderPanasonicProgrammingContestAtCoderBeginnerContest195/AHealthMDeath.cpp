// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc195/tasks/abc195_a
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
    int m, h;
    cin >> m >> h;
    if (h % m == 0) {
      cout << "Yes" << "\n";
    } else {
      cout << "No" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















