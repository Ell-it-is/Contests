// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/519/B
// Start: DATE
// End: DATE
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
    int n;
    cin >> n;
    map<int, int> a;
    map<int, int> b;
    map<int, int> c;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      a[x]++;
    }
    for (int i = 0; i < n - 1; i++) {
      int x;
      cin >> x;
      b[x]++;
    }
    for (int i = 0; i < n - 2; i++) {
      int x;
      cin >> x;
      c[x]++;
    }
    for (auto&& [key, val] : a) {
      if (b.find(key) != b.end()) {
        if (val - b[key] == 1) {
          cout << key << '\n';
        }
        if (val - b[key] == 2) {
          cout << key << '\n';
          cout << key << '\n';
        }
      } else {
        cout << key << '\n';
      }
    }
    for (auto&& [key, val] : b) {
      if (c.find(key) != c.end()) {
        if (val - c[key] == 1) {
          cout << key << '\n';
        }
        if (val - c[key] == 2) {
          cout << key << '\n';
          cout << key << '\n';
        }
      } else {
        cout << key << '\n';
      }
    }
  }
}
/* ================= Notes ================== //
   
*/


















