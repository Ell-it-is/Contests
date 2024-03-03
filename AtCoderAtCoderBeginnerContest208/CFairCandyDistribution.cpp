// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc208/tasks/abc208_c
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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<pair<ll, ll>> ans(n);
    for (int i = 0; i < n; i++) {
      ans[i] = {a[i], 0};
    }
    if (k >= n) {
      ll give_cnt = k / n;
      for (int i = 0; i < n; i++) {
        ans[i].second += give_cnt;
      }
      k -= give_cnt * n;
    }
    if (k > 0) {
      std::sort(ans.begin(), ans.end());
      for (int i = 0; i < k; i++) {
        ans[i].second++;
      }
    }
    std::map<ll, ll> map;
    for (int i = 0; i < n; i++) {
      map[ans[i].first] = ans[i].second;
    }
    for (int i = 0; i < n; i++) {
      cout << map[a[i]] << "\n";
    }
  }
}
/* ================= Notes ================== //
   when k >= n
    give to n (all) citizens -> k -= n
   else
    give to k citizens with smallest id's
*/


















