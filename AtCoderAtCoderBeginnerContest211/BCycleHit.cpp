// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc211/tasks/abc211_b
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
    map<string, int> map;
    map["H"] = 0;
    map["2B"] = 0;
    map["3B"] = 0;
    map["HR"] = 0;
    for (int i = 0; i < 4; i++) {
      string s;
      cin >> s;
      map[s]++;
    }
    bool ans = true;
    for (auto&& [key, val] : map) {
      if (val == 0) {
        ans = false;
        break;
      }
    }
    cout << (ans ? "Yes" : "No") << '\n';
  }
}
/* ================= Notes ==================
   
*/



















