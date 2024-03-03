// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc337/tasks/abc337_a
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
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      a += x;
      b += y;
    }
    if (a > b) cout << "Takahashi";
    else if (b > a) cout << "Aoki";
    else cout << "Draw";
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















