// time-limit: 1000
// problem-url: https://codeforces.com/contest/1915/problem/C
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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    ll sum = std::accumulate(a.begin(), a.end(), 0ll);
    ll sqrt = std::sqrt(sum);
    if (sqrt * sqrt == sum) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   Square can be build only from square numbers...
   1, 4, 9, 16, 25, ...
*/
















