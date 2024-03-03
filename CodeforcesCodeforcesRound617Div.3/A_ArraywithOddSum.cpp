// time-limit: 1000
// problem-url: https://codeforces.com/contest/1296/problem/A
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
    int sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }
    bool ans = sum % 2 == 1;
    if (sum % 2 == 0) {
      bool even = false;
      bool odd = false;
      for (int i = 0; i < n; i++) {
        if (a[i] % 2) odd = true;
        if (a[i] % 2 == 0) even = true;
      }
      if (even && odd) ans = true;
    }
    cout << (ans ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   Is it possible to get odd sum of elements in an array?
   Iff I can pick two unique indicies {i, j} and a[i] = a[j]

   The value changes by a[i] - a[j], the change must be odd and only 1 is needed
*/
















