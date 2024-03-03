// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc338/tasks/abc338_a
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
    bool ans = std::isupper(s[0]);
    for (int i = 1; i < (int) s.size(); i++) {
      if (std::isupper(s[i])) {
        ans = false;
        break;
      }
    }
    cout << (ans ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















