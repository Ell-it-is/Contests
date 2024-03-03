// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/313/A
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
    int n;
    cin >> n;
    if (n >= 0) {
      cout << n << '\n';
    } else {
      if (abs(n) >= 0 && abs(n) <= 10) {
        cout << 0 << '\n';
        continue;
      } 
      string s = to_string(n);
      int m = s.size();
      int last = s[m - 1] - '0';
      int blast = s[m - 2] - '0';
      string ans = "";
      if (last >= blast) {
        ans = s.substr(0, m - 1);
      } else {
        ans = s.substr(0, m - 2) + s[m - 1]; 
      }
      if (ans == "-0") ans = "0";
      cout << ans << '\n';
    }
  }
}
/* ================= Notes ================== //
   
*/


















