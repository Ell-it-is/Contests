// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc335/tasks/abc335_b
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
    int a = 0, b = 0, c = 0;
    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= n; j++) {
        for (int k = 0; k <= n; k++) {
          if (i + j + k > n) continue;
          cout << i << " " << j << " " << k << "\n";
        }
      }
    }
  }
}
/* ================= Notes ================== //
   
*/
















