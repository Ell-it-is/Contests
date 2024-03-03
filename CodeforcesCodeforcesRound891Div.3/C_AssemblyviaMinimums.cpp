// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1857/C
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
    int m = n * (n - 1) / 2;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }
    std::sort(b.begin(), b.end());
    int idx = -1;
    for (int i = n - 1; i >= 1; i--) {
      idx += i;
      cout << b[idx] << " ";
    }
    cout << fixed << setprecision(0) << 1e9 << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















