// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/279/B
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


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    // prefix sum for the books reading time
    vector<int> p(n);
    p[0] = a[0];
    for (int i = 1; i < n; i++) {
      p[i] = p[i - 1] + a[i];
    }
    int max = 0;
    for (int i = 0; i < n; i++) {
      int lo = i;
      int hi = n - 1;
      int ans = 0;
      while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        int r_time = i == 0 ? p[mid] : p[mid] - p[i - 1]; // time spend reading from i-th book up to this point (mid)
        if (r_time > t) {
          hi = mid - 1;
        } else {
          ans = mid - i + 1;
          lo = mid + 1;
        }
      }
      max = std::max(max, ans);
    }
    cout << max << '\n';
  }
}
/* ================= Notes ================== //
   max <= t
   where max is sum in some range [L, R] in array 'a'

   3 4 6 7
   
*/


















