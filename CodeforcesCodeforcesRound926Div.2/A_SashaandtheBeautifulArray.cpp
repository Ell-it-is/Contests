// time-limit: 1000
// problem-url: https://codeforces.com/contest/1929/problem/A
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
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  std::cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    std::sort(a.rbegin(), a.rend());
    ll sum = 0;
    for (int i = 1; i < n; i++) {
      sum += a[i] - a[i - 1];
    }
    cout << abs(sum) << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















