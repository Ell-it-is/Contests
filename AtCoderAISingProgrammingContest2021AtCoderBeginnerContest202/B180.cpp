// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc202/tasks/abc202_b
// Start: DATE
// End: DATE
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
    reverse(s.begin(), s.end());
    for (int i = 0; i < (int) s.size(); i++) {
      if (s[i] == '9') s[i] = '6';
      else if (s[i] == '6') s[i] = '9';
    }
    cout << s << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















