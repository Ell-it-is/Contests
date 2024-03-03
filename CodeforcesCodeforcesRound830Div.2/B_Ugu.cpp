// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1732/B
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
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool one = true; // looking for one
    int cnt = -1;
    for (int i = 0; i < n; i++) {
      if (one && s[i] == '1') {
        cnt++;
        one = !one;
        continue;
      }
      if (!one && s[i] == '0') {
        cnt++;
        one = !one;
      }
    }
    if (cnt == -1) cnt = 0;
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
  100010
  011101
  000010
  000001

  000011111 -> already correct
  111100000 -> 000011111
  011100000 -> 000011111

  ...change from the most left 1 if sequence is still not OK
*/


















