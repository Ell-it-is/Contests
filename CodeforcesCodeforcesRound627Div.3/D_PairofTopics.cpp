// time-limit: 2000
// problem-url: https://codeforces.com/contest/1324/problem/D
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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
      d[i] = a[i] - b[i];
    }
    // count all pairs, where d[i] + d[j] > 0, j < i
    std::sort(d.begin(), d.end());
    ll ans = 0;
    for (int i = 0; i < n; i++) {
      if (d[i] <= 0) continue;
      int pos = std::lower_bound(d.begin(), d.end(), -d[i] + 1) - d.begin();
      // pos must be before 'i', since array is sorted
      ans += i - pos;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   a[i] + a[j] > b[i] + b[j]
   a[i] - b[i] + a[j] - b[j] > 0
*/
















