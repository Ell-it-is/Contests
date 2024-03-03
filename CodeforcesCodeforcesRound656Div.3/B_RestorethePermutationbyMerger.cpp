// time-limit: 1000
// problem-url: https://codeforces.com/contest/1385/problem/B
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
    vector<int> a(n * 2);
    for (int i = 0; i < n * 2; i++) {
      cin >> a[i];
    }
    std::map<int, int> map;
    for (int i = n * 2 - 1; i >= 0; i--) {
      map[a[i]] = i;
    }
    vector<pair<int, int>> v;
    for (auto&& [key, val] : map) {
      v.push_back({val, key});
    }
    std::sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
      cout << v[i].second << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















