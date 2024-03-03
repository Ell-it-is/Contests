// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc277/tasks/abc277_c
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
      int a, b;
      cin >> a >> b;
      if (a > b) swap(a, b);
      v[i] = {a, b};
    }
    std::sort(v.begin(), v.end(), [](auto &left, auto &right) {  
      return (left.first != right.first ? left.first < right.first : left.second > right.second);
    });
    int current = -1;
    vector<pair<int, int>> w;
    for (int i = 0; i < n; i++) {
      if (v[i].first == current) continue;
      current = v[i].first;
      w.push_back({v[i].first, v[i].second});
    }
    pair<int, int> floor { 1, 1 };
    int m = (int) w.size();
    for (int i = 0; i < m; i++) {
      if (w[i].first <= floor.second && w[i].second >= floor.second) {
        floor.first = w[i].first;
        floor.second = w[i].second;
      }
    }
    cout << floor.second << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















