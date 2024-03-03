// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1642
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
    ll x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    std::map<pair<int, int>, ll> map;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        ll sum = a[i] + a[j];
        map[{i, j}] = sum;
      }
    }
    for (auto iter1 = map.begin(); iter1 != map.end(); ++iter1) {
      for (auto iter2 = iter1; ++iter2 != map.end();) {
        auto [i, j] = iter1->first;
        ll sum1 = iter1->second;
        auto [k, l] = iter2->first;
        ll sum2 = iter2->second;
        if (sum1 + sum2 == x) {
          if (i != j && i != k && i != l &&
              j != k && j != l &&
              k != l) {
            cout << i + 1 << " " << j + 1 << " " << k + 1 << " " << l + 1 << "\n";
            return 0;
          }
        }
      }
    }
    cout << "IMPOSSIBLE" << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















