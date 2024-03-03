// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc170/tasks/abc170_c
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
    int x, n;
    cin >> x >> n;
    set<int> p;
    bool exists = false;
    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      p.insert(num);
      if (num == n) exists = true;
    }
    if (exists) {
      int d = INT_MAX;
      int ans = -1;
      for (int i = 1; i <= 100; i++) {
        if (p.count(i) == 0) {
          if (abs(x - i) < d) {
            d = abs(x - i);
            ans = i;
          }
        }  
      }
      cout << ans << "\n";
    } else {
      cout << x << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















