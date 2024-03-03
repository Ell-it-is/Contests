// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/275/A
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
    vector<vector<int>> v(3, vector<int>(3));
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        cin >> v[i][j];
      }
    }
    for (int i = 0; i < 3; i ++) {
      for (int j = 0; j < 3; j++ ) {
        if (v[i][j] % 2) cout << 0;
        else cout << 1;
      }
      cout << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















