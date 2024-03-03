// time-limit: 1000
// problem-url: https://codeforces.com/contest/1898/problem/A
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0; // # of B's in the string s
    for (char c : s) if (c == 'B') cnt++;
    int ans = 0;
    if (cnt == k) {
      cout << ans << "\n";
    } else if (cnt < k) {
      // we have to add B's
      // we waste no operation if we change a substring that consists only of A's
      int cur = cnt;
      for (int i = 0; i < n && cur < k; i++) {
        if (s[i] == 'A') {
          cur++;
          ans = i;
        }
      }
      cout << 1 << "\n";
      cout << ans + 1 << " " << "B" << "\n";
    } else {
      // we have to remove B's
      int cur = cnt;
      for (int i = 0; i < n && cur > k; i++) {
        if (s[i] == 'B') {
          cur--;
          ans = i;
        }
      }
      cout << 1 << "\n";
      cout << ans + 1 << " " << "A" << "\n";
    }
  }
}
/* ================= Notes ================== //
   There can always be 0 or 1 operations
*/


















