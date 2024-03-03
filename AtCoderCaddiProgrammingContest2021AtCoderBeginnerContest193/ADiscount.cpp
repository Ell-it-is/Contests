// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc193/tasks/abc193_a
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
    double diff = a - b;
    diff = diff / a;
    cout << fixed << setprecision(20) << diff * 100 << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















