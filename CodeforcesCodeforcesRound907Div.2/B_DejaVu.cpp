// time-limit: 2000
// problem-url: https://codeforces.com/contest/1891/problem/B
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
    cin >> n >> q;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int min_x = INT_MAX; 
    for (int i = 0; i < q; i++) {
      int x;
      cin >> x;
      if (x < min_x) {
        for (int j = 0; j < n; j++) {
          if (a[j] % ((ll)std::pow(2, x)) == 0) {
            a[j] += (ll)std::pow(2, x - 1);
          }
        }
        min_x = x;
      }
    }
    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















