// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc182/tasks/abc182_b
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int max = *std::max_element(a.begin(), a.end());
    int mx_cnt = INT_MIN;
    int ans = a[0];
    for (int k = 2; k <= max; k++) {
      int cnt = 0;
      for (int i = 0; i < n; i++) {
        if (a[i] % k == 0) cnt++;
      }
      if (cnt >= mx_cnt) {
        mx_cnt = cnt;
        ans = k;
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















