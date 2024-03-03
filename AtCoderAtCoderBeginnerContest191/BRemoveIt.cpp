// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc191/tasks/abc191_b
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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int num : a) {
      if (num != x) cout << num << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















