// time-limit: 2000
// problem-url: https://codeforces.com/contest/1311/problem/B
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
    vector<int> a(n);
    bool sorted = true;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (i && a[i - 1] > a[i]) sorted = false;
    }
    std::set<int> set;
    for (int i = 0; i < m; i++) {
      int pos;
      cin >> pos;
      set.insert(--pos);
    }
    bool ans = true;
    if (!sorted) {
      ans = true;
      bool swapped = true;
      while (swapped) {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
          if (a[i] > a[i + 1] && set.count(i) > 0) {
            std::swap(a[i], a[i + 1]);
            swapped = true;
          }
        }
      }
      for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) ans = false;
      }
    }
    cout << (ans ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















