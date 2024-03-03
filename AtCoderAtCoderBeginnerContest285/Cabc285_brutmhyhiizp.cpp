// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc285/tasks/abc285_c
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
    ll ans = 0;
    ll add = 26;
    for (int i = 1; i < n; i++) {
      ans += add;
      add *= 26;
    }
    ll num = 0;
    for (int i = 0; i < n; i++) {
      num *= 26;
      num += (s[i] - 'A');
    }
    cout << ans + num + 1 << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















