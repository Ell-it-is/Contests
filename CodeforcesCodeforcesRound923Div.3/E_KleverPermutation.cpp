// time-limit: 2000
// problem-url: https://codeforces.com/contest/1927/problem/E
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
    int n, k;
    cin >> n >> k;
    // pattern: min | max | min | max | ...
    int up = 3;
    int down = 2;
    vector<int> p(n);
    p[0] = 1;
    bool change = false;
    for (int i = 2; i < n; i += 2) {
      if (!change) {
        p[i] = p[i - 2] + up;
      } else {
        p[i] = p[i - 2] - down;
      }
      change = !change;
    }
    p[1] = n - 3;
    change = false;
    for (int i = 3; i < n; i += 2) {
      if (!change) {
        p[i] = p[i - 2] + down;
      } else {
        p[i] = p[i - 2] - up;
      }
      change = !change;
    }
    for (int i = 0; i < n; i++) {
      cout << p[i] << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   5 4
   5 1 2 3 4

   7 4
   1 6 3 7 2 5 4
   1) 17
   2) 18
   3) 17
   4) 18

   wtf was I doing
*/
















