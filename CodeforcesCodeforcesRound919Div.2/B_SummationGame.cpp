// time-limit: 1000
// problem-url: https://codeforces.com/contest/1920/problem/B
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
  cin >> tt;
  while (tt--) {
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    vector<int> psum(n);
    psum[0] = a[0];
    for (int i = 1; i < n; i++) {
      psum[i] = psum[i - 1] + a[i];
    }
    vector<int> ssum(n);
    ssum[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      ssum[i] = ssum[i + 1] + a[i];
    }
    int ans = INT_MIN;
    for (int i = n - k - 1; i < n; i++) {
      int remove_cnt = std::min(i + 1, x);
      int sum = (i - remove_cnt < 0 ? 0 : psum[i - remove_cnt]);
      int remove_val = (i - remove_cnt + 1 < 0 ? 0 : ssum[i - remove_cnt + 1]);
      if (i < n - 1) remove_val -= ssum[i + 1];
      ans = std::max(ans, sum - remove_val);
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















