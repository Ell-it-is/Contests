// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc231/tasks/abc231_c
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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    for (int k = 1; k <= q; k++) {
      int x;
      cin >> x;
      // How many students with height of atleast x?
      // 'atleast' == '>=' == 'lower_bound'
      int idx = std::lower_bound(a.begin(), a.end(), x) - a.begin();
      cout << n - idx << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















