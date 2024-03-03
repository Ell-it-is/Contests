// time-limit: 5000
// problem-url: https://codeforces.com/contest/1907/problem/D#
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
    vector<pair<int, int>> level(n);
    for (int i = 0; i < n; i++) {
      cin >> level[i].first >> level[i].second;
    }
    int hi = 1e9;
    int lo = 0;
    int ans = 0; // minimized 'k'
    while (lo <= hi) {
      int k = lo + (hi - lo) / 2;
      if (k < level[0].first) {
        // I can't even jump to the first segment Sadge
        lo = k + 1;
        continue;
      }
      bool ok = true;
      pair<int, int> cur = { 0, 0 };
      for (int i = 0; i < n; i++) {
        auto [l, r] = level[i];
        // go to both sides
        cur = { cur.first - k, cur.second + k };
        // find the left most and right most positions you can go to
        cur = { std::max(cur.first, l), std::min(cur.second, r) };
        // nowhere to go
        if (cur.first > cur.second) {
          ok = false;
          break;
        }
      }
      if (ok) {
        hi = k - 1;
        ans = k;
      } else {
        lo = k + 1;
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















