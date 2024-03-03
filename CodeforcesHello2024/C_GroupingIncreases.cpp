// time-limit: 1000
// problem-url: https://codeforces.com/contest/1919/problem/C
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
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> b, c;
    int x = 0; // last of 'b'
    int y = 0; // last of 'c'
    int i = n - 1;
    while (i >= 0) {
      int dx = a[i] - x;
      int dy = a[i] - y;
      if (dx >= 0 && dy < 0) {
        b.push_back(a[i]);
        x = a[i];
      } else if (dy >= 0 && dx < 0) {
        c.push_back(a[i]);
        y = a[i];
      } else if (dx >= 0 && dy >= 0) {
        if (dx > dy) {
          c.push_back(a[i]);
          y = a[i];
        } else {
          b.push_back(a[i]);
          x = a[i];
        }
      }
      if (dx < 0 && dy < 0) {
        if (dx < dy) {
          b.push_back(a[i]);
          x = a[i];
        } else {
          c.push_back(a[i]);
          y = a[i];
        }
      }
      i--;
    }
    std::reverse(b.begin(), b.end());
    std::reverse(c.begin(), c.end());
    db(b);
    db(c);
    int ans = 0;
    for (int j = 1; j < n; j++) {
      if (j < (int) b.size() && b[j - 1] < b[j]) ans++;
      if (j < (int) c.size() && c[j - 1] < c[j]) ans++;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















