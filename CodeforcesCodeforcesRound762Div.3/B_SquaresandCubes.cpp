// time-limit: 1000
// problem-url: https://codeforces.com/contest/1619/problem/B
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
    int squares = sqrt(n);
    int cubes = cbrt(n);
    int ans = squares + cubes;
    for (int i = 1; i <= cbrt(n); i++) {
      int k = sqrt(pow(i, 3));
      if (k * k == pow(i, 3)) ans--;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   count squares from 1 to N -> floor(sqrt(n))
   count cubes from 1 to N -> floor(cbrt(n))
*/


















