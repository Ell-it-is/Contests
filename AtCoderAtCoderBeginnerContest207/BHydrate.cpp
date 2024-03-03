// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc207/tasks/abc207_b
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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll red = 0;
    ll cnt = 1;
    a += b;
    red += c;
    cnt++;
    if (d * red > a) {
      cout << 1 << '\n';
      break;
    } else if (c <= b) {
      cout << -1 << '\n';
      break;
    }
    while (d * red <= a) {
      a += b;
      red += c;
      cnt++;
    }
    if (d * red > a) cnt--;
    cout << cnt << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















