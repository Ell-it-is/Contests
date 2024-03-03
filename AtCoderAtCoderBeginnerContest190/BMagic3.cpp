// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc190/tasks/abc190_b
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
    int n, s, d;
    cin >> n >> s >> d;
    bool ans = false;
    for (int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      if (x < s && y > d) ans = true;
    }
    cout << (ans ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















