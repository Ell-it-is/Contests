// time-limit: 2000
// problem-url: https://codeforces.com/contest/1294/problem/A
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
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    int max = std::max({a, b, c});
    if (a != max) n -= max - a;
    if (b != max) n -= max - b;
    if (c != max) n -= max - c;
    cout << (n >= 0 && n % 3 == 0 ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















