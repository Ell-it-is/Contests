// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc184/tasks/abc184_b
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
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    int p = x;
    for (char c : s) {
      if (c == 'o') {
        p++;
      } else {
        p = std::max(p - 1, 0);
      }
    }
    cout << p << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















