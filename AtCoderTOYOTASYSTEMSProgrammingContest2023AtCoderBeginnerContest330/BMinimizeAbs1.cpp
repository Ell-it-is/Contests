// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc330/tasks/abc330_b
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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      if (a[i] <= l) {
        cout << l << " ";
      } else if (a[i] >= r) {
        cout << r << " ";
      } else {
        cout << a[i] << " ";
      }
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
    4 5 6 7
 9: 5 4 3 2

    4 5 6 7
 1: 3 4 5 6
 
*/


















