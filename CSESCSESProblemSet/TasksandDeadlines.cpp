// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1630
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
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      v[i] = { a, b };
    }
    std::sort(v.begin(), v.end(), [] (auto left, auto right) {
      return left.first < right.first;
    });
    ll ans = 0; // sum of rewards
    ll t = 0;
    for (int i = 0; i < n; i++) {
      ans += v[i].second - (v[i].first + t);
      t += v[i].first;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   I need to be able to quickly recalculate the values based on the current time
   -> simply change what the current time is, the best order does not change and can be decided at the start)

   Best order is to sort by duration only in increasing order
   - This can be shown by observing 2 tasks and how your reward improves when you first finish the one that takes less time  

   (not best solution, just example)
   5 12 t: 0 -> +7
   8 15 t: 5 -> +2 
   6 10 t: 13 -> -9
   -> ans = 0
   
*/


















