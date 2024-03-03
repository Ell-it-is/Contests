// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1469/B
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
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
      cin >> r[i];
    }
    vector<int> pred(n);
    pred[0] = r[0];
    for (int i = 1; i < n; i++) {
      pred[i] = pred[i - 1] + r[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }
    vector<int> pblue(m);
    pblue[0] = b[0];
    for (int i = 1; i < m; i++) {
      pblue[i] = pblue[i - 1] + b[i];
    }
    int m1 = *max_element(pred.begin(), pred.end());
    int m2 = *max_element(pblue.begin(), pblue.end());
    int ans = std::max(0, m1) + std::max(0, m2);
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   n - red
   m - blue

   max - consecutive subarray of biggest sum
*/


















