// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc321/tasks/abc321_a
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
    string s = to_string(n);
    bool decr = true;
    for (int i = 0; i < (int) s.size() - 1; i++) {
      int a = s[i] - '0';
      int b = s[i + 1] - '0';
      db(a, b);
      if (a <= b) {
        decr = false;
        break;
      }
    }
    cout << (decr ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















