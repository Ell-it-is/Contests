// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1342/B
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
    string t;
    cin >> t;
    int n = (int) t.size();
    bool same = true;
    for (int i = 1; i < n; i++) {
      if (t[i] != t[i - 1]) same = false;
    }
    if (same) {
      cout << t << "\n";
      continue;
    } else {
      string s;
      for (int i = 0; i < n; i++) {
        s += "01";  
      }
      cout << s << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















