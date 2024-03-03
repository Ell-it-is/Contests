// time-limit: 3000
// problem-url: https://codeforces.com/contest/1462/problem/D
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
    vector<int> a(n);
    bool all_equal = true;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (i && a[0] != a[i]) all_equal = false; 
    }
    while (!all_equal) {
      
    }
  }
}
/* ================= Notes ================== //
   You only need at most (n - 1) moves
*/


















