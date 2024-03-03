// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc175/tasks/abc175_b
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
    vector<int> l(n);
    for (int i = 0; i < n; i++) cin >> l[i];
    auto check = [&](int x, int y, int z) {
      return (x + y > z && x + z > y && y + z > x) && (x != y && x != z && y != z);
    };
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < i; j++) {
        for (int k = 0; k < j; k++) {
          db(i, j, k);
          if (check(l[i], l[j], l[k])) cnt++;
        }
      }
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















