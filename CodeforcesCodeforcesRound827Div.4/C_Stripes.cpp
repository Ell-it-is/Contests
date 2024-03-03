// time-limit: 1000
// problem-url: https://codeforces.com/contest/1742/problem/C
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
  cin >> tt;
  while (tt--) {
    int n = 8;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    // check rows
    char ans = '.';
    for (int i = 0; i < n; i++) {
      string s = v[i];
      s.erase(unique(s.begin(), s.end()), s.end());
      db(s);
      if (s.size() == 1 && s[0] == 'R') {
        ans = 'R';
        break;
      }
    }
    for (int i = 0; i < n; i++) {
      string s = "";
      for (int j = 0; j < n; j++) {
        s += v[j][i];
      }
      s.erase(unique(s.begin(), s.end()), s.end());
      db(s);
      if (s.size() == 1 && s[0] == 'B') {
        ans = 'B';
        break;
      }
    }
    cout << ans << '\n';
  }
}
/* ================= Notes ================== //
   Find either a column or row in which the letter is unique
*/


















