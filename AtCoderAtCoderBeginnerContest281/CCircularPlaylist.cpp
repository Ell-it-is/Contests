// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc281/tasks/abc281_c
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
    ll n, t;
    cin >> n >> t;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    ll total_time = std::accumulate(a.begin(), a.end(), 0ll);
    t %= total_time;
    ll song = 1;
    ll time_left = t;
    for (int i = 0; i < n; i++) {
      if (time_left <= a[i]) {
        song = i + 1;
        break;
      } else {
        time_left -= a[i];
      }
    }
    cout << song << " " << time_left << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















