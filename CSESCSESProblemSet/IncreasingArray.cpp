// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1094
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
  //cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    ll cnt = 0;
    for (int i = 1; i < n; i++) {
      if (a[i] < a[i - 1]) {
        cnt += a[i - 1] - a[i];
        a[i] += a[i - 1] - a[i];
      }
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















