// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc219/tasks/abc219_b
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution ================= //


int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string t;
    cin >> t;
    string ans = "";
    for (int i = 0; i < (int) t.size(); i++) {
      int k = t[i] - '0';
      switch (k) {
        case 1:
          ans += s1;
          break;
        case 2:
          ans += s2;
          break;
        case 3:
          ans += s3;
          break;
      }
    }
    cout << ans << '\n';
  }
}
/* ================= Notes ====================
   
*/



















