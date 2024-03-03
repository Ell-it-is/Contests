// time-limit: 1000
// problem-url: https://codeforces.com/contest/1703/problem/C
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
int down(int i) {
  if (i == 0) return 9;
  return --i;
}

int up(int i) {
  if (i == 9) return 0;
  return ++i;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    for (int k = 0; k < n; k++) {
      int b;
      cin >> b;
      string s;
      cin >> s;
      for (int i = 0; i < b; i++) {
        if (s[i] == 'D') {
          // Up
          v[k] = up(v[k]);
        } else {
          // Down
          v[k] = down(v[k]);
        }
      }
    }
    for (int i = 0; i < n; i++) {
      cout << v[i] << " ";
    }
    cout << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















