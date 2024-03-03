// time-limit: 2000
// problem-url: https://codeforces.com/contest/1895/problem/A
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
    int x, y, k;
    cin >> x >> y >> k;
    // x - chest, y - key
    int ans = 0; // # of steps
    if (x < y) {
      // chest is before key
      int dist = y - x;
      if (x + k >= y) {
        ans = y;
      } else {
        x += k;
        dist = y - x;
        ans = y + dist;
      }
    } else {
      // chest is after key, key is light I can carry it however far I want
      ans = x;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
  I can change position of a chest
  Only movement along the axis takes time of 1 sec / move
*/


















