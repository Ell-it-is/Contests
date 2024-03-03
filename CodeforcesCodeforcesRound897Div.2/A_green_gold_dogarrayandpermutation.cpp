// time-limit: 1000
// problem-url: https://codeforces.com/contest/1867/problem/A
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution ================= //


int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<pair<int, int>> sorted(n);
    for (int i = 0; i < n; i++) {
      sorted[i] = {a[i], i};
    }
    std::sort(sorted.begin(), sorted.end(), std::greater<>());
    vector<int> ans(n);
    for (int i = 1; i <= n; i++) {
      ans[sorted[i - 1].second] = i;
    }
    for (int x : ans) {
      cout << x << " ";
    }
    cout << '\n';
  }
}
/* ================= Notes ====================
   simply lowest - highest? hopefully I understood the statement correctly
*/



















