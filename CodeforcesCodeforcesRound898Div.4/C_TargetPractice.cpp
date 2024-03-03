// time-limit: 1000
// problem-url: https://codeforces.com/contest/1873/problem/C
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
int layer(int x, int y, int n) {
  return std::min({x, y, n - x + 1, n - y + 1});
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n = 10;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int points = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (v[i][j] == 'X') {
          points += layer(i + 1, j + 1, n); 
        }
      }
    }
    cout << points << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















