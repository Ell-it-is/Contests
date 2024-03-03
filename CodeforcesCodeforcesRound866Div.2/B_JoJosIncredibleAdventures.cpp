// time-limit: 1000
// problem-url: https://codeforces.com/contest/1820/problem/B
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
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  std::cin >> tt;
  while (tt--) {
    std::string s;
    cin >> s;
    ll n = (int) s.size();

    s += s;
    ll max = 0;
    ll cur = 0;
    for (ll i = 0; i < 2 * n; i++) {
      if (s[i] == '1') cur++;
      else {
        max = std::max(max, cur);
        cur = 0;
      }
    }
    max = std::max(max, cur);

    ll ans = 0;
    if (max > n) {
      ans = n * n; 
    } else {
      for (ll i = 1; i < max + 1; i++) {
        ans = std::max(ans, i * (max + 1 - i));
        // Ex.: 1x4, 2x3, 3x2, 4x1
      } 
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















