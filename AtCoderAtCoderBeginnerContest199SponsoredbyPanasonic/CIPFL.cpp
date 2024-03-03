// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc199/tasks/abc199_c
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
    string s;
    cin >> s;
    int q;
    cin >> q;
    bool odd = false;
    while (q--) {
      int t, a, b;
      cin >> t >> a >> b;
      if (t == 1) {
        if (odd) {
          if (a <= n) a += n;
          else a -= n;
          if (b <= n) b += n;
          else b -= n;
        } 
        std::swap(s[a - 1], s[b - 1]); 
      } else if (t == 2) {
        odd = !odd;
      }
    }
    if (odd) {
      string front = s.substr(0, n);
      string back = s.substr(n);
      s = back + front;
    }
    cout << s << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















