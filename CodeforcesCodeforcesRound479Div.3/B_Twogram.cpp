// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/977/B
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
    set<string> p;
    for (int i = 0; i < n - 1; i++) {
      p.insert(s.substr(i, 2));
    }
    int max_cnt = 0;
    string winner = "";
    for (string t : p) {
      int cnt = 0;
      for (int i = 0; i < n - 1; i++) {
        if (t == s.substr(i, 2)) cnt++;
      }
      if (cnt > max_cnt) {
        max_cnt = cnt;
        winner = t;
      }
    }
    cout << winner << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















