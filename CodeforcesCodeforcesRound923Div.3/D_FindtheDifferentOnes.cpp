// time-limit: 5000
// problem-url: https://codeforces.com/contest/1927/problem/D
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
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> right(n);
    right[n - 1] = -1;
    int i = n - 2;
    while (a[i] == a[i + 1]) {
      right[i] = -1;
      i--;
    }
    int dist = 1;
    for (; i >= 0; i--) {
      if (a[i] != a[i + 1]) {
        dist = 1;
        right[i] = dist;
      } else {
        dist++;
        right[i] = dist;
      }
    }
    cin >> q;
    for (int query = 0; query < q; query++) {
      int l, r;
      cin >> l >> r;
      if (right[l - 1] != -1 && l + right[l - 1] <= r) {
        cout << l << " " << l + right[l - 1] << "\n";
      } else {
        cout << -1 << " " << -1 << "\n";
      }
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   for each query find withing [L, R] a pair of different integers 
*/
















