// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc212/tasks/abc212_c
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
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    std::sort(b.begin(), b.end());
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
      int lo = 0;
      int hi = m - 1;
      int left = -1;
      int right = -1;
      int x = a[i];
      while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (b[mid] >= x) {
          right = b[mid];
          hi = mid - 1;
        } else {
          left = b[mid];
          lo = mid + 1;
        }
      }
      if (left != -1) {
        min = std::min(min, abs(x - left));
      }
      if (right != -1) {
        min = std::min(min, abs(x - right));
      }
    }
    cout << min << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















