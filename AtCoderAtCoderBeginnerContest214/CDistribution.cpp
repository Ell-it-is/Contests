// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc214/tasks/abc214_c
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
    vector<ll> s(n), t(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < n; i++) cin >> t[i];
    vector<int> ans(n);
    int idx = 0;
    ll min = LLONG_MAX;
    for (int i = 0; i < n; i++) {
      if (t[i] < min) {
        min = t[i];
        idx = i;
      }
    }
    ll x = 0;
    for (int i = idx; i < n; i++) {
      if (i == idx) {
        ans[i] = t[i];
        x = t[i] + s[i];
      }
      x = std::min(t[i], x);
      ans[i] = x;
      x += s[i];
    }
    if (idx > 0) {
      for (int i = 0; i <= idx - 1; i++) {
        x = std::min(t[i], x);
        ans[i] = x;
        x += s[i];
      } 
    }
    for (int num : ans) {
      cout << num << "\n";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   Each snuke either receives a gem based at time t[i]
   or he receives a gem from his friend left of him at some time x
   I care about min(t[i], x)
   
*/


















