// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc176/tasks/abc176_a
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
    int n, x, t;
    cin >> n >> x >> t;
    int total = 0; // total time to make 'n' takoyaki
    total += n / x * t;
    if (n % x) {
      total += t;
    }
    cout << total << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















