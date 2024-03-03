// time-limit: 2000
// problem-url: https://codeforces.com/contest/1703/problem/D
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
    int n;
    cin >> n;
    vector<string> v(n);
    map<string, bool> map;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      map[v[i]] = true;
    }
    for (int i = 0; i < n; i++) {
      string s = v[i];
      bool found = false;
      for (int j = 1; j < s.size(); j++) {
        string pref = s.substr(0, j);
        string suff = s.subtr(j);
        if (map[pref] && map[suff]) {
          found = true;
        }
      }
      if (found) cout << 1;
      else cout << 0;
    }
    cout << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















