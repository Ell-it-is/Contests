// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc177/tasks/abc177_b
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
    string s, t;
    cin >> s >> t;
    int n = (int) s.size();
    int m = (int) t.size();
    int min = INT_MAX;
    for (int i = 0; i < n - m + 1; i++) {
      string test = s.substr(i, m);
      int wrong_cnt = 0;
      for (int j = 0; j < m; j++) {
        if (test[j] != t[j]) wrong_cnt++;
      }
      min = std::min(min, wrong_cnt);
    }
    cout << min << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















