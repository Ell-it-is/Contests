// time-limit: 1000
// problem-url: https://codeforces.com/contest/1903/problem/C
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<ll> ssum(n);
    ssum[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      ssum[i] = ssum[i + 1] + a[i];
    }
    ll sum = ssum[0];
    for (int i = n - 1; i > 0; i--) {
      if (ssum[i] > 0) {
        sum += ssum[i];
      }
    }
    cout << sum << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















