// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1102/C
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
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    int below = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] <= x) below++;
    }
    if (x > y) {
      cout << n << "\n";
      continue;
    }
    if (x <= y) {
      if (below % 2 == 0) {
        cout << below / 2 << "\n";
      } else {
        cout << below / 2 + 1 << "\n";
      }
      continue;
    }
  }
}
/* ================= Notes ================== //
   
*/


















