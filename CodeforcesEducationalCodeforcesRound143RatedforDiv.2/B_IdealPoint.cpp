// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1795/B
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
    int n, k;
    cin >> n >> k;
    int q = n;
    std::map<int, int> map; 
    while (q--) {
      int l, r;
      cin >> l >> r;
      if (l <= k && k <= r) {
        for (int i = l; i <= r; i++) {
          map[i]++;
        }
      }
    }
    if (map.size() == 0) {
      cout << "NO" << "\n";
      continue;
    }
    vector<pair<int, int>> v;
    for (auto&& [key, val] : map) {
      v.push_back({val, key});
    }
    std::sort(v.rbegin(), v.rend());
    if (v.front().second == k && v.size() == 1) {
      cout << "YES" << "\n";
    } else if (v.front().second == k && v[0].first > v[1].first) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   Only give layers to 'k' and check if it's the best
*/


















