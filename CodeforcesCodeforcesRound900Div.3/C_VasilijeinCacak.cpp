// time-limit: 1000
// problem-url: https://codeforces.com/contest/1878/problem/C
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
    ll n, k, x;
    cin >> n >> k >> x;
    ll n;
    // choose k distinct integers in [1, n] such that sum == x
    ll min_sum = k * (k + 1) / 2;
    ll max_sum = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2);
    if (min_sum <= x && x <= max_sum) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















