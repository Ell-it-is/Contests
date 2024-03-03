// time-limit: 2000
// problem-url: https://codeforces.com/contest/1506/problem/C
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
    string a, b;
    cin >> a >> b;
    if (a == b) {
      cout << 0 << "\n";
      continue;
    }
    if (a.size() > b.size()) swap(a, b);
    int n, m;
    n = a.size();
    m = b.size();
    int min = INT_MAX;
    int l = 1;
    while (l <= n) {
      for (int i = 0; i <= n - l; i++) {
        string t = a.substr(i, l);
        for (int j = 0; j < m; j++) {
          string s = b.substr(j, l);
          if (s == t) {
            int remove = i + n - (i + l);
            remove += j + m - (j + l);
            min = std::min(min, remove);
          }
        }
      }
      l++;
    }
    if (min == INT_MAX) {
      min = n + m;
    }
    cout << min << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















