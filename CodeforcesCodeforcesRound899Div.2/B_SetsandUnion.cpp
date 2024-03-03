// time-limit: 2000
// problem-url: https://codeforces.com/contest/1882/problem/B
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
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
      int k;
      cin >> k;
      a[i].resize(k);
      for (int j = 0; j < k; j++) {
        cin >> a[i][j];
      }
    }
    set<int> u;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < a[i].size(); j++) {
        u.insert(a[i][j]);
      }
    }
    int ans = 0;
    for (int r : u) {
      set<int> u2;
      for (int i = 0; i < n; i++) {
        bool contains = false;
        for (int j = 0; j < a[i].size(); j++) {
          if (a[i][j] == r) contains = true;
        }
        if (!contains) {
          for (int k = 0; k < a[i].size(); k++) {
            u2.insert(a[i][k]);
          }
        }
      }
      ans = std::max(ans, (int) u2.size());
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















