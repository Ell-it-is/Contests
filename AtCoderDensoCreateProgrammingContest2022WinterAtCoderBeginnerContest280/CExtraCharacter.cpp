// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc280/tasks/abc280_c
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
    string s, t;
    cin >> s >> t;
    int mistake = (int) s.size() + 1;
    for (int i = 0; i < (int) s.size(); i++) {
      if (s[i] != t[i]) {
        mistake = i + 1;
        break;
      }
    }
    cout << mistake << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















