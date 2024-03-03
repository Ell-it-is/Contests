// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1643
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
    ll max = -1e18;
    ll sum = -1e18;
    // This pretty much finds the optimal index from which we still get positive sum even if there are negatives along the way
    for (int i = 0; i < n; i++) {
      ll x;
      cin >> x;
      // sum so far is either the (current sum + the element) OR (the element itself) if its greater than the sum so far
      // ...if element happens to be greater, that means its better to start our subarray from here and discard the previous section
      sum = std::max(x, sum + x);
      // just update the maximum
      max = std::max(max, sum);
    }
    cout << max << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















