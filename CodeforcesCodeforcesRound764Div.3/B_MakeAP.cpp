// time-limit: 2000
// problem-url: https://codeforces.com/contest/1624/problem/B
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
    int a, b, c;
    cin >> a >> b >> c;
    bool ans = false;
    // a b
    int diff = std::abs(a - b);
    int x = b - diff;
    if (a > b) {
      if (x >= c && x % c == 0) ans = true;
    } else {
      x = b + diff;
      if (x >= c && x % c == 0) ans = true;
    }
    // b c
    diff = std::abs(b - c);
    x = b + diff;
    if (b > c) {
      if (x >= a && x % a == 0) ans = true; 
    } else {
      x = b - diff;
      if (x >= a && x % a == 0) ans = true;
    }
    // a c
    double mid = (a + c) / 2.0;
    if (floor(mid) == ceil(mid)) {
      x = mid;
      if (x >= b && x % b == 0) ans = true;
    }
    cout << (ans ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   for a sequence of a, b, c to be AP
   sequence cannot be incr and then decr or vice versa
*/


















