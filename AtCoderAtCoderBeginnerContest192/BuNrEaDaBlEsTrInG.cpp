// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc192/tasks/abc192_b
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
    bool ans = true; // hard to read
    for (int i = 0; i < n; i++) {
      bool odd = (i + 1) % 2 == 1;
      int c = (int) s[i];
      if (odd) {
        if (65 <= c && c <= 90) {
          ans = false;
          break;
        }
      } else {
        if (97 <= c && c <= 122) {
          ans = false;
          break;
        }  
      }
    }
    cout << (ans ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   odd - lowercase
   even - uppercase
*/


















