// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc322/tasks/abc322_a
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
    int idx = s.find("ABC");
    if (idx != string::npos) {
      cout << idx + 1 << "\n";
    } else {
      cout << -1 << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















