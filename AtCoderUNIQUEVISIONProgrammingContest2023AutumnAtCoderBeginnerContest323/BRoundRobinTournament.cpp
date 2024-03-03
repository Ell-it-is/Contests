// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc323/tasks/abc323_b
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
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++) {
      string s = v[i];
      int cnt = 0;
      for (char c : s) {
        if (c == 'o') cnt++; 
      }
      p[i] = {cnt, i + 1};
    }
    db(p);
    std::sort(p.begin(), p.end(), [](auto &left, auto &right) {
      return (left.first != right.first ? left.first > right.first : left.second < right.second);
    });
    db(p);
    for (int i = 0; i < n; i++) {
      cout << p[i].second << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   the player that played sooner (smaller numbe) ranks higher in case of a tie
*/


















