// time-limit: 1500
// problem-url: https://codeforces.com/contest/1913/problem/C
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
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  std::cin >> tt;
  vector<int> v(30);
  while (tt--) {
    int op;
    cin >> op;
    if (op == 1) {
      int x;
      cin >> x;
      v[x]++;
    } else {
      int val;
      cin >> val;
      for (int x = 29; x >= 0; x--) {
        int take = std::min(val >> x, v[x]);
        val -= take << x;
      }
      cout << (val == 0 ? "YES" : "NO") << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















