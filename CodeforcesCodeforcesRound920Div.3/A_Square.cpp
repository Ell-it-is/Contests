// time-limit: 1000
// problem-url: https://codeforces.com/contest/1921/problem/A
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
    vector<pair<int, int>> vp(4);
    for (int i = 0; i < 4; i++) {
      int x, y;
      cin >> x >> y;
      vp[i]= { x, y };
    }
    std::sort(vp.begin(), vp.end());
    int a = std::abs(vp[0].second - vp[1].second);
    int b = std::abs(vp[2].second - vp[3].second);
    cout << a * b << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















