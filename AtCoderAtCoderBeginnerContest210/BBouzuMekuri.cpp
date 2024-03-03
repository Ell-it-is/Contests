// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc210/tasks/abc210_b
// Start: DATE
// End: DATE
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
    string loser = "";
    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        loser = ((i + 1) % 2 == 0) ? "Aoki" : "Takahashi";
        break;
      }
    }
    cout << loser << '\n'; 
  }
}
/* ================= Notes ================== //
   
*/


















