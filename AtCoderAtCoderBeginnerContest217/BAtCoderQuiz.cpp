// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc217/tasks/abc217_b
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
    map<string, int> map;
    map["ABC"] = 0;
    map["ARC"] = 0;
    map["AGC"] = 0;
    map["AHC"] = 0;
    string q, r, s;
    cin >> q >> r >> s;
    map[q]++;
    map[r]++;
    map[s]++;
    string ans = "";
    for (auto&& [name, cnt] : map) {
      if (cnt == 0) {
        ans = name;
        break;
      }
    }
    cout << ans << '\n';
  }
}
/* ================= Notes ====================
   
*/



















