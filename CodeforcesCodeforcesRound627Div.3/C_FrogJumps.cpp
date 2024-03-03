// time-limit: 2000
// problem-url: https://codeforces.com/contest/1324/problem/C
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
    string s;
    cin >> s;
    int n = (int) s.size();
    vector<int> pos;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'R') pos.push_back(i + 1);
    }
    int m = (int) pos.size();
    int ans = n + 1; // m == 0
    if (m != 0) {
      ans = std::max(pos.front(), n + 1 - pos.back());
    }
    for (int i = 0; i < m - 1; i++) {
      ans = std::max(ans, abs(pos[i] - pos[i + 1]));
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   minimize the max jump frog can make to make it past last cell

   all 'L' -> max = n + 1
   all 'R' -> max = 1

   max jump is max dist between any 2 'R's?
   + max from beggining to first 'R' and max from last 'R' to the end
*/
















