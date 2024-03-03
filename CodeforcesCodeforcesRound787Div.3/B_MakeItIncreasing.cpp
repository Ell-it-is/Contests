// time-limit: 2000
// problem-url: https://codeforces.com/contest/1675/problem/B
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
    for (int i = n - 2; i >= 0; i--) {
      while (a[i] >= a[i + 1]) {
        if (a[i] == 0) {
          cnt = -1;
          break;
        }
        a[i] /= 2;
        cnt++;
      }
      if (cnt == -1) break;
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















