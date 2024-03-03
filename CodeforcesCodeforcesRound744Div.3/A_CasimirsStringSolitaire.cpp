// time-limit: 2000
// problem-url: https://codeforces.com/contest/1579/problem/A
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
    string s;
    cin >> s;
    int n = (int) s.size();
    int a, b, c;
    a = b = c = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'A') a++;
      if (s[i] == 'B') b++;
      if (s[i] == 'C') c++;
    }
    int pair_ab = std::min(a, b);
    b -= pair_ab;
    int pair_cb = std::min(b, c);
    if (2 * pair_ab + 2 * pair_cb == n) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















