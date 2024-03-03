// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc188/tasks/abc188_a
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
    int x, y;
    cin >> x >> y;
    if (x > y) swap(x, y);
    if (x + 3 > y) {
      cout << "Yes" << "\n";
    } else {
      cout << "No" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















