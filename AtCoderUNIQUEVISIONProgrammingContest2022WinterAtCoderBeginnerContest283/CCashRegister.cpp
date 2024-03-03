// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc283/tasks/abc283_c
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
    string s;
    cin >> s;
    int ans = 0;
    while (!empty(s)) {
      const char back {s.back()};
      s.pop_back();
      if (back == '0' && s.back() == '0') {
        s.pop_back();
      }
      ++ans;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















