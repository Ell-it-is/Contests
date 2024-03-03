// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc326/tasks/abc326_c
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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    a.push_back(INT_MAX);
    sort(a.begin(), a.end());
    int max = 0;
    int j = 0;
    for (int i = 0; i < n; i++) {
      while (a[j] < a[i] + m) j++;
      max = std::max(max, j - i);
    }
    cout << max << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















