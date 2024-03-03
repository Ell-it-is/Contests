// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/368/B
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    set<int> set { a[n - 1] };
    vector<int> sx(n);
    sx[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
      int pre = (int) set.size();
      set.insert(a[i]);
      int now = (int) set.size();
      sx[i] = sx[i + 1] + (now > pre ? 1 : 0);
    }
    while (m--) {
      int l;
      cin >> l;
      cout << sx[l - 1] << '\n';
    }
  }
}
/* ================= Notes ================== //
   
*/


















