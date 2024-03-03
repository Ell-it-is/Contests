// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc216/tasks/abc216_b
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
    int n;
    cin >> n;
    map<pair<string, string>, int> map;
    while (n--) {
      string s, t;
      cin >> s >> t;
      map[{s, t}]++;
    }
    bool ans = false;
    for (auto&& [name, cnt] : map) {
      if (cnt > 1) {
        ans = true;
        break;
      }
    }
    cout << (ans ? "Yes" : "No") << '\n';
  }
}
/* ================= Notes ==================
   
*/



















