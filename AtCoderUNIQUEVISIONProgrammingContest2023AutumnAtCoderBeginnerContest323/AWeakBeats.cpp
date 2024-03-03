// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc323/tasks/abc323_a
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
    int n = s.size();
    bool every = true;
    for (int i = 1; i < n; i += 2) {
      if (s[i] == '1') every = false;
    }
    cout << (every ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















