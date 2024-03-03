// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1535/B
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
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        int gcd = std::gcd(a[i], 2 * a[j]);
        if (gcd > 1) cnt++;
      }
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















