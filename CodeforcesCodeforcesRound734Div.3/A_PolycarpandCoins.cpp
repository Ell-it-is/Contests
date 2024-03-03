// time-limit: 1000
// problem-url: https://codeforces.com/contest/1551/problem/A
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
    int k = n / 3;
    if (n % 3 == 0) {
      cout << k << " " << k << "\n";
    } else {
      if (k + 2 * (k + 1) == n) {
        cout << k << " " << k + 1 << "\n";
      } else {
        cout << k + 1 << " " << k << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   
*/


















