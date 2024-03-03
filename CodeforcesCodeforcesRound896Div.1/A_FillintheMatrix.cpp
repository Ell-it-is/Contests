// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1868/A
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
    int n, m;
    cin >> n >> m;
    int max_beauty = 0;
    if (m == 1) max_beauty = 0;
    else if (n > m - 1) max_beauty = m;
    else max_beauty = n + 1;
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> v(m);
    for (int i = 0; i < m; i++) {
      v[i] = i;
    }
    for (int i = 0; i < n; i++) {
      a[i] = v;
      if ((i + 1) < max_beauty - 1) {
        std::rotate(v.rbegin(), v.rbegin() + 1, v.rend());
      }
    }
    cout << max_beauty << "\n";
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cout << a[i][j] << " ";
      }
      cout << "\n";
    }
  }
}
/* ================= Notes ================== //
   Each of n rows must be a permutation of length m
   Take MEX of every column
   Take MEX of all the MEX's and that is the beauty of your array

   How to maximize such value?
   You must make the 1st column not contain 0 
   You must make the 2nd column not contain 1 
   You must make the 3rd column not contain 2
   ...

   Beauty is based on the number of shifts I can make
*/


















