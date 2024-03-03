// time-limit: 2000
// problem-url: https://codeforces.com/contest/1914/problem/D
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
    vector<pair<int, int>> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      a[i] = {num, i};
    }
    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      b[i] = {num, i};
    }
    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      c[i] = {num, i};
    }
    std::sort(a.rbegin(), a.rend());
    std::sort(b.rbegin(), b.rend());
    std::sort(c.rbegin(), c.rend());
    int max = INT_MIN;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
          if (a[i].second == b[j].second || a[i].second == c[k].second || b[j].second == c[k].second) continue;
          max = std::max(max, a[i].first + b[j].first + c[k].first);
        }
      }
    }
    cout << max << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















