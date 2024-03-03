// time-limit: 1000
// problem-url: https://codeforces.com/contest/1890/problem/B
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
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    bool t_ok = true;
    bool s_ok = true;
    for (int i = 1; i < m; i++) {
      if (t[i] == t[i - 1]) t_ok = false;
    }
    for (int i = 1; i < n; i++) {
      if (s[i] == s[i - 1]) s_ok = false;
    }
    if (t_ok && !s_ok) {
      // try to fix 's'
      // both ends of 't' should be different from the positons where 's' is not ok
      s_ok = true;
      for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
          if (t.front() == s[i - 1] || t.back() == s[i]) s_ok = false;
        }
      }
    }
    cout << (s_ok ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   s: 111
   t: 010
   
*/


















