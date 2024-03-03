// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc175/tasks/abc175_a
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
    string s;
    cin >> s;
    int n = (int) s.size();
    int max_cnt = 0;
    int cnt = 0; 
    for (int i = 0; i < n; i++) {
      if (s[i] == 'R') cnt++;
      else cnt = 0;
      max_cnt = std::max(max_cnt, cnt);
    }
    cout << max_cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















