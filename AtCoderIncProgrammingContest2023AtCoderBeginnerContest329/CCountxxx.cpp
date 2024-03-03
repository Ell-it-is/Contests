// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc329/tasks/abc329_c
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
    string s;
    cin >> s;
    std::map<char, int> map;
    pair<char, int> p {s[0], 1};
    for (int i = 1; i < n; i++) {
      if (s[i] != p.first) {
        if (p.second > map[p.first]) {
          map[p.first] = p.second;
        }
        p = { s[i], 1 };
      } else {
        p.second++;
      }
    }
    if (p.second > map[p.first]) {
      map[p.first] = p.second;
    }
    int cnt = 0;
    for (auto x : map) {
      cnt += x.second;
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















