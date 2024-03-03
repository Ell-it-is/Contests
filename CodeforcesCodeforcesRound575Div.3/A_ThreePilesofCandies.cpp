// time-limit: 1000
// problem-url: https://codeforces.com/contest/1196/problem/A
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
    ll a, b, c;
    cin >> a >> b >> c;
    cout << (a + b + c) / 2 << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















