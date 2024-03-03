// time-limit: 2000
// problem-url: https://codeforces.com/contest/1891/problem/A
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
    bool ans = true;
    for (int i = n - 2; i >= 0; i--) {
      if (a[i] > a[i + 1]) {
        // we have a problem Houston
        double pos = i + 1;
        // pick smallest 2^m value greater than pos
        int m = std::ceil(log2(pos));
        if (std::pow(2, m) <= n && std::pow(2, m) <= pos) continue;
        else ans = false;
      }
    }
    cout << (ans ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















