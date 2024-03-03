// time-limit: 1000
// problem-url: https://codeforces.com/contest/1660/problem/A
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
  cin >> tt;
  while (tt--) {
    int a, b;
    cin >> a >> b;
    if (a == 0) {
      cout << 1 << "\n";
    } else if (b == 0) {
      cout << a + 1 << "\n";
    } else {
      cout << b * 2 + a + 1 << "\n";
    }
  }
}
/* ================= Notes ================== //
   he can always pay up to a multiples of 1
   he can always pay up to b multiples of 2 
*/


















