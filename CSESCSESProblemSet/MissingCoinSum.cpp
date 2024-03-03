// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/2183
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
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    std::sort(v.begin(), v.end());
    ll res = 1;
    for (int i = 0; i < n && v[i] <= res; i++) {
      res = res + v[i];
    }
    cout << res << "\n";
  }
}
/* ================= Notes ================== //
   You can only use specific coin once

   The solution is to realize how binary system works
   That you need values of
   1 2 4 8 16 ...
   in order to form the values that lie in between them

   And the reason I start at res = 1 is to always look for the next value that I cannot be able to get if I don't have some
   needed value above
*/
















