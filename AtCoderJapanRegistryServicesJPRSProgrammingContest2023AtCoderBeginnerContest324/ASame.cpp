// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc324/tasks/abc324_a
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
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    bool same = true;
    for (int i = 0; i < n - 1; i++) {
      if (v[i] != v[i + 1]) same = false;
    }
    cout << (same ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















