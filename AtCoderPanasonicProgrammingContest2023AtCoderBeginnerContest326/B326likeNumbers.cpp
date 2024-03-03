// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc326/tasks/abc326_b
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
    do {
      // check if n is 326 like number
      int o = n % 10;
      int t = (n / 10) % 10;
      int h = n / 100;
      if (h * t == o) break;
      n++;
    } while (n <= 919);
    cout << n << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















