// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc218/tasks/abc218_b
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
    const int n = 26;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    for (int x : v) {
      int c = 96 + x;
      cout << char(c);
    }
    cout << '\n';
  }
}
/* ================= Notes ====================
   
*/



















