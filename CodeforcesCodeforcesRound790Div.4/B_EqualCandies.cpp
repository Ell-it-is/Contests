// time-limit: 1000
// problem-url: https://codeforces.com/contest/1676/problem/B
// Start: Created on Sunday, September 17, 2023 at 9:58:56 AM
// End: Created on Sunday, September 17, 2023 at 10:03:02 AM
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
    int eaten = 0;
    int min = *min_element(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
      eaten += a[i] - min;
    }
    cout << eaten << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















