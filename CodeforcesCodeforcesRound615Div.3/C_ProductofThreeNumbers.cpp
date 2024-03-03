// time-limit: 2000
// problem-url: https://codeforces.com/contest/1294/problem/C
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
    bool ans = false;
    for (int i = 2; i <= 1000 && !ans; i++) {
      for (int j = 2; j <= 1000 && !ans; j++) {
        for (int k = 2; k <= 1000 && !ans; k++) {
          if (i * j * k == n && i != j && i != k && j != k) {
            ans = true;
            cout << "YES" << "\n";
            cout << i << " " << j << " " << k << "\n";
          }
        }
      }
    }
    if (!ans) {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















