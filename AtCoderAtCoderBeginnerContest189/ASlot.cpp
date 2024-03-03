// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc189/tasks/abc189_a
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
    char a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c) {
      cout << "Won" << "\n";
    } else {
      cout << "Lost" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















