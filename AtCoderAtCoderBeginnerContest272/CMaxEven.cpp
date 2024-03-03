// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc272/tasks/abc272_c
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
    vector<int> even;
    vector<int> odd;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x % 2 == 0) {
        even.push_back(x);
      } else {
        odd.push_back(x);
      }
    }
    sort(even.rbegin(), even.rend());
    sort(odd.rbegin(), odd.rend());
    ll max_even = (even.size() >= 2 ? even[0] + even[1] : -1);
    ll max_odd = (odd.size() >= 2 ? odd[0] + odd[1] : -1);
    ll ans = std::max(max_even, max_odd);
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   even + even = even
   odd + odd = even
*/


















