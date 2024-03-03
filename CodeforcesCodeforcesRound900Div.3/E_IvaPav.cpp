// time-limit: 5000
// problem-url: https://codeforces.com/contest/1878/problem/E
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
    vector<vector<int>> psums(n);
    for (int i = 0; i < n; i++) {
      vector<int> psum(n);
      psum[0] = a[i];
      for (int j = 1; j < n; j++) {
        psum[j] = psum[j - 1] & a[j];
        db(a[j]);
      }
      psums[i] = psum;
    }
    db(psums);
    int q;
    cin >> q;
    while (q--) {
      int l, k;
      cin >> l >> k;
      vector<int> v(psums[l - 1]);
      int m = v.size();
      int ans = -1;
      for (int i = m - 1; i >= 0; i--) {
        if (v[i] >= k) {
          ans = l - 1 + i + 1;
          break;
        }
      }
      cout << ans << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















