// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc217/tasks/abc217_c
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
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> p[i];
    }
    vector<int> q(n + 1);
    for (int i = 1; i <= n; i++) {
      q[p[i]] = i;
    }
    for (int i = 0; i <= n; i++) {
      if (i == 0) continue;
      cout << q[i] << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















