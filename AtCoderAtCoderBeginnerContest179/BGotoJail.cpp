// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc179/tasks/abc179_b
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
    int cnt = 0;
    bool ans = false;
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      if (a == b) {
        cnt++;
      } else cnt = 0;
      if (cnt == 3) ans = true;
    }
    cout << (ans ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















