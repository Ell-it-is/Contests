// time-limit: 2000
// problem-url: https://codeforces.com/contest/1547/problem/B
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
    string s;
    cin >> s;
    int n = (int) s.size();
    int idx = -1;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'a') {
        idx = i;
        break;
      }
    }
    if (idx == -1) {
      cout << "NO" << "\n";
      continue;
    }
    int i = idx - 1;
    int j = idx + 1;
    char cur = 'b';
    bool found = true;
    db(i, j);
    while (i >= 0 || j <= n - 1) {
      db(cur);
      found = false;
      if (i >= 0 && s[i] == cur) {
        found = true;
        i--;
      } else if (j <= n - 1 && s[j] == cur) {
        found = true;
        j++;
      }
      if (!found) break;
      cur++;
    }
    if (found) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















