// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc213/tasks/abc213_b
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
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      a[i] = {x, i + 1};
    }
    std::sort(a.begin(), a.end());
    cout << a[n - 2].second << '\n';
  }
}
/* ================= Notes ==================
   
*/



















