// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc333/tasks/abc333_b
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
    vector<int> v(4);
    for (int i = 0; i < 4; i++) {
      char c;
      cin >> c;
      c -= 16;
      v[i] = c - '0';
    }
    if (v[0] > v[1]) swap(v[0], v[1]);
    if (v[2] > v[3]) swap(v[2], v[3]);
    db(v);
    int first_short = std::min(std::abs(v[0] - v[1]), 6 - v[1] + v[0] - 1);
    int second_short = std::min(std::abs(v[2] - v[3]), 6 - v[2] + v[3] - 1);
    string ans = first_short == second_short ? "Yes" : "No";
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















