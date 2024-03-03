// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc332/tasks/abc332_a
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
    int n, s, k;
    cin >> n >> s >> k;
    int total = 0;
    for (int i = 0; i < n; i++) {
      int p, q;
      cin >> p >> q;
      total += q * p;
    }
    if (total < s) total += k;
    cout << total << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















