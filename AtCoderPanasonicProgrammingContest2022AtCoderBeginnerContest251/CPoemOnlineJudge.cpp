// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc251/tasks/abc251_c
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
    map<string, pair<int, int>> scores;
    for (int i = 1; i <= n; i++) {
      string s;
      cin >> s;
      int t;
      cin >> t;
      if (!scores.count(s)) {
        scores[s] = {t, i};
      } 
    }
    vector<pair<int, int>> v;
    for (auto&& [key, val] : scores) {
      v.push_back({val.first, val.second});
    }
    std::sort(v.begin(), v.end(), [](auto &left, auto &right) {
      return (left.first != right.first ? left.first > right.first : left.second < right.second);
    });
    cout << v.front().second << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















