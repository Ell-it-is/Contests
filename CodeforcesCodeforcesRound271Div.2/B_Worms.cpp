// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/474/B
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
    vector<int> p(n - 1);
    p[0] = a[0] + 1;
    for (int i = 1; i < n - 1; i++) {
      p[i] = a[i] + p[i - 1];
    }
    vector<int> b(n);
    b[0] = 1;
    for (int i = 1; i < n; i++) {
      b[i] = p[i - 1];
    }
    int m;
    cin >> m;
    vector<int> q(m);
    for (int i = 0; i < m; i++) {
      cin >> q[i];
    }
    for (int i = 0; i < m; i++) {
      auto it = std::upper_bound(b.begin(), b.end(), q[i]);
      if (it != b.begin()) {
        std::advance(it, -1);
      }
      int idx = it - b.begin();
      cout << ++idx << "\n";
    }
  }
}
/* ================= Notes ================== //
   How to find first smaller than my number?
   upper_bound - 1
*/


















