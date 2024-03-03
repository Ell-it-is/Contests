// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc199/tasks/abc199_b
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
    int max = *std::max_element(a.begin(), a.end());
    int min = *std::min_element(b.begin(), b.end());
    int ans = std::max(0, min - max + 1);
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   Just have to find the closest numbers
*/


















