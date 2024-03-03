// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1359/B
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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    ll cost = 0;
    bool use_two = 2 * x > y;
    if (use_two) {
      for (int i = 0; i < n; i++) {
        int size = (int) v[i].size();
        for (int j = 0; j < size - 1; j++) {
          if (v[i][j] == '.' && v[i][j + 1] == '.') {
            cost += y;
            v[i][j] = '*';
            v[i][j + 1] = '*';
          }
        }
      }
    } 
    for (int i = 0; i < n; i++) {
      int size = (int) v[i].size();
      for (int j = 0; j < size; j++) {
        if (v[i][j] == '.') {
          cost += x;
        }
      }
    }
    cout << cost << "\n";
  }
}
/* ================= Notes ================== //
   if (2 * x) <= y, use 1x1 tiles
   else, use 2x1 anywhere you can
*/


















