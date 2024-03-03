// time-limit: 1000
// problem-url: https://codeforces.com/contest/1903/problem/A
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    bool ok = true;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (i && a[i - 1] > a[i]) ok = false; 
    }
    cout << (!ok && k == 1 ? "NO" : "YES") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















