// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc173/tasks/abc173_a
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
    int r = n % 1000 == 0 ? n / 1000 * 1000 : (n / 1000 + 1) * 1000;
    cout << r - n << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















