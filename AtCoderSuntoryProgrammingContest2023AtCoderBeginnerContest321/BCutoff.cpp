// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc321/tasks/abc321_b
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
    int n, x;
    cin >> n >> x;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++) {
      cin >> a[i];
    }
    int ans = -1;
    for (int k = 0; k <= 100; k++) {
      vector<int> b(a);
      b.push_back(k);
      sort(b.begin(), b.end());
      int sum = std::accumulate(++b.begin(), --b.end(), 0);
      if (sum >= x) {
        ans = k;
        break;
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















