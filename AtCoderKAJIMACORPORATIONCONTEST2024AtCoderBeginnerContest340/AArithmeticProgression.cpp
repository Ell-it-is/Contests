// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc340/tasks/abc340_a
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
    int a, b, d;
    cin >> a >> b >> d;
    for (int i = a; i <= b; i += d) cout << i << " ";
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















