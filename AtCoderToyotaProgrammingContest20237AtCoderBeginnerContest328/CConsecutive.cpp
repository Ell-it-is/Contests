// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc328/tasks/abc328_c
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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> b(n);
    for (int i = 0; i < n - 1; i++) {
      b[i] = s[i] == s[i + 1] ? 1 : 0;
    }
    vector<int> psum(n);
    psum[0] = b[0] ? 1 : 0;
    for (int i = 1; i < n; i++) {
      psum[i] = psum[i - 1] + (b[i] ? 1 : 0);
    }
    for (int query = 1; query <= q; query++) {
      int l, r;
      cin >> l >> r;
      if (n == 1) {
        cout << 0 << "\n";  
        continue;
      }
      l--;
      r -= 2;
      int cnt = l == 0 ? psum[r] : psum[r] - psum[l - 1];
      cout << cnt << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















