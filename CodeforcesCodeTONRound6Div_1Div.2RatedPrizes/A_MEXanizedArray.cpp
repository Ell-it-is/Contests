// time-limit: 1000
// problem-url: https://codeforces.com/contest/1870/problem/A
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
    int n, k, x;
    cin >> n >> k >> x;
    if (k > n || k > x + 1) {
      cout << -1 << "\n";
      continue;
    }
    vector<int> v(n); // sum = n * x
    if (x == k) {
      for (int i = 0; i < n; i++) {
        v[i] = x - 1;
      }
    } else {
      for (int i = 0; i < n; i++) {
        v[i] = x;
      }
    }
    // array v must include all elements of [0...k - 1]
    for (int i = 0; i < k; i++) {
      v[i] = i;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += v[i];
    }
    cout << sum << "\n";
  }
}
/* ================= Notes ================== //
   sum of n elements <= x && mex(n elements) == k
*/


















