// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1068
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
    ll n;
    cin >> n;
    cout << n << " ";
    while (n != 1) {
      if (n % 2) {
        n = n * 3 + 1;
      } else {
        n /= 2;
      }
      cout << n << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















