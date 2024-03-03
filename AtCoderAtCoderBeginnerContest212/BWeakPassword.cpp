// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc212/tasks/abc212_b
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
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    string passw;
    cin >> passw;
    int n = 4;
    vector<int> v(n);
    std::set<int> set;
    for (int i = 0; i < (int) passw.size(); i++) {
      v[i] = passw[i] - '0';
      set.insert(v[i]);
    }
    bool weak1 = (int) set.size() == 1;
    bool weak2 = true;
    for (int i = 1; i < n; i++) {
      if (v[i] == 0 && v[i - 1] == 9) continue;
      if (v[i] - v[i - 1] != 1) {
        weak2 = false;
        break;
      }
    }
    cout << ((weak1 || weak2) ? "Weak" : "Strong") << '\n';
  }
}
/* ================= Notes ==================
   If atleast one digit is different -> the password is strong
*/



















