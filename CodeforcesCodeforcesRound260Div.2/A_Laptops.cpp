// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/456/A
// Start: DATE
// End: DATE
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
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
      int p, q;
      cin >> p >> q;
      v[i] = {p, q};
    }
    std::sort(v.begin(), v.end(), [](auto &left, auto &right) {  
      return (left.first != right.first ? left.first < right.first : left.second > right.second);
    });
    bool exists = false;
    for (int i = 0; i < n - 1; i++) {
      if (v[i + 1].first > v[i].first && v[i + 1].second < v[i].second) {
        exists = true;
        break;
      }
    }
    cout << (exists ? "Happy Alex" : "Poor Alex") << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















