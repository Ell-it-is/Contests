// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc331/tasks/abc331_c
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
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    std::map<ll, ll, greater<ll>> map;
    for (ll num : a) {
      map[num]++;
    }
    for (auto&& [key, val] : map) {
      val *= key;
    }
    ll sum = map.begin()->second;
    for (auto&& [key, val] : map) {
      if (key == map.begin()->first) {
        val = 0;
        continue;
      }
      ll temp = val;
      val = sum;
      sum += temp;
    }
    for (int i = 0; i < n; i++) {
      cout << map[a[i]] << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















