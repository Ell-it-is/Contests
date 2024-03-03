// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc179/tasks/abc179_a
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
    if (s[n - 1] == 's') {
      cout << s << "es" << "\n";
    } else {
      cout << s << "s" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















