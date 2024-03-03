// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc329/tasks/abc329_b
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
    int max = *std::max_element(a.begin(), a.end());
    int smax = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] == max) continue;
      smax = std::max(smax, a[i]);
    }
    cout << smax << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















