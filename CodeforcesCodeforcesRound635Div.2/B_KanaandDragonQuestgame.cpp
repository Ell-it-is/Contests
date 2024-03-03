// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1337/B
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
    int h, n, m;
    cin >> h >> n >> m;
    for (int i = 0; i < n; i++) {
      if (h <= 0 || h <= 20) break;
      h = h / 2 + 10;
    }
    h -= m * 10;
    cout << (h <= 0 ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















