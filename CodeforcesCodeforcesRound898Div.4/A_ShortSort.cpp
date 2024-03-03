// time-limit: 1000
// problem-url: https://codeforces.com/contest/1873/problem/0
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
    string abc = "abc";
    bool ans = s == abc;
    string x, y, z;
    x = y = z = s;
    swap(x[0], x[2]);
    swap(y[0], y[1]);
    swap(z[1], z[2]);
    if (x == abc || y == abc || z == abc) ans = true;
    cout << (ans ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















