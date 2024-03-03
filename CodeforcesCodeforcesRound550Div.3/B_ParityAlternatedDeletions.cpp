// time-limit: 2000
// problem-url: https://codeforces.com/contest/1144/problem/B
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
    vector<int> a(n);
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] % 2) odd++;
      else even++;
    }
    if (abs(odd - even) <= 1) {
      cout << 0 << "\n";
    } else {
      std::sort(a.begin(), a.end());
      int sum = 0;
      int d = (odd > even) ? odd - even : even - odd;
      d--;
      if (odd > even) {
        int i = 0;
        while (d > 0) {
          if (a[i] % 2) {
            sum += a[i];
            d--;
          }
          i++;
        }
      } else {
        int i = 0;
        while (d > 0) {
          if (a[i] % 2 == 0) {
            sum += a[i];
            d--;
          }
          i++;
        }
      }
      cout << sum << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















