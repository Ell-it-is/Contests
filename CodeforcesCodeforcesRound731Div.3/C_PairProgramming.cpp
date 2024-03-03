// time-limit: 2000
// problem-url: https://codeforces.com/contest/1547/problem/C
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
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }
    vector<int> ans;
    bool ok = true;
    int i = 0, j = 0;
    while (i < n || j < m) {
      if (i != n && a[i] == 0) {
        ans.push_back(0);
        k++;
        i++;
      } else if (j != m && b[j] == 0) {
        ans.push_back(0);
        k++;
        j++;
      } else if (i != n && a[i] <= k) {
        ans.push_back(a[i++]);
      } else if (j != m && b[j] <= k) {
        ans.push_back(b[j++]);
      } else {
        cout << -1 << "\n";
        ok = false;
        break;
      }
    }
    if (ok) {
      for (int x : ans) {
        cout << x << " ";
      }
      cout << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















