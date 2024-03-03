// time-limit: 1000
// problem-url: https://codeforces.com/contest/1915/problem/A
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
    vector<int> v(3);
    for (int i = 0; i < 3; i++) {
      cin >> v[i];
    }
    std::sort(v.begin(), v.end());
    int ans = 0;
    if (v[0] == v[1]) ans = v[2];
    if (v[0] == v[2]) ans = v[1];
    if (v[1] == v[2]) ans = v[0];
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















