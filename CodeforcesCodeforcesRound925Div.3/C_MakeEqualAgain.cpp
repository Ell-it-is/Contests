// time-limit: 2000
// problem-url: https://codeforces.com/contest/1931/problem/C
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
    bool equal = true;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (i && a[i] != a[i - 1]) {
        equal = false;
      }
    }
    if (equal) {
      cout << 0 << "\n";
      continue;
    }
    int left = a[0]; // same value from left
    int i = 0;
    while (i < n && a[i] == a[i + 1]) i++;
    int right = a[n - 1]; // same value from right
    int j = n - 1;
    while (j > 0 && a[j] == a[j - 1]) j--;
    db(left, right);
    db(i, j);
    int ans = INT_MAX;
    if (left == right) {
      ans = j - i - 1;
    } else {
      ans = n - i - 1;
      ans = std::min(ans, j);
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   I can choose to not apply the operation
   OR I can apply the operation exactly once

   The goal is to minimize distance for the operation that makes all elements equal

   It can be shown that solution always exists
*/
















