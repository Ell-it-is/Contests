// time-limit: 1000
// problem-url: https://codeforces.com/contest/1611/problem/A
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
  cin >> tt;
  while (tt--) {
    string s;
    cin >> s;
    int n = (int) s.size();
    int ans = -1;
    int last = int(s[n - 1] - '0');
    if (last % 2 == 0) {
      ans = 0;
    } else {
      bool is_even = false;
      for (int i = 1; i < n - 1; i++) {
        if (int(s[i] - '0') % 2 == 0) is_even = true;
      }
      int first = int(s[0] - '0');
      if (first % 2 == 0) {
        ans = 1;
      } else if (is_even) {
        ans = 2;
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















