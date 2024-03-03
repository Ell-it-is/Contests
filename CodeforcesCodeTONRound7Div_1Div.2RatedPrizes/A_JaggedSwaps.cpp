// time-limit: 1000
// problem-url: https://codeforces.com/contest/1896/problem/A
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
    bool changed = true;
    while (changed) {
      changed = false;
      for (int i = 1; i < n - 1; i++) {
        if (a[i - 1] < a[i] && a[i] > a[i + 1] && a[i] > i + 1) {
          swap(a[i], a[i + 1]);
          changed = true;
        }
      }
    }
    int ok = true;
    for (int i = 0; i < n; i++) {
      if (a[i] != i + 1) ok = false;
    }
    cout << (ok ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   1 3 2 5 4
   1 2 3 5 4
   1 2 3 4 5

   1 5 4 3 2
   1 4 5 3 2

   1 5 4 2 3
*/


















