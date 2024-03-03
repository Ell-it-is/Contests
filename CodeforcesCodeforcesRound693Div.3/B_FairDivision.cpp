// time-limit: 2000
// problem-url: https://codeforces.com/contest/1472/problem/B
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
    int cnt_ones = 0;
    int cnt_twos = 0;
    int w = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] == 1) cnt_ones++;
      if (a[i] == 2) cnt_twos++;
      w += a[i];
    }
    if (w % 2 == 0) {
      if ( (cnt_twos % 2 != 0) && ((cnt_ones == 0) || (cnt_ones % 2 != 0)) ) {
        cout << "NO" << "\n";
      } else {
        cout << "YES" << "\n";
      }
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   wA = weight of Alice's candies
   wB = weight of Bob's candies
   We want wA == wB

   The total weight wA + wB must be even so it can be split
*/


















