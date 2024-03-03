// time-limit: 2000
// problem-url: https://codeforces.com/contest/1714/problem/B
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
    set<int> set;
    int ans = -1;
    for (int i = n - 1; i >= 0; i--) {
      int old_size = set.size();
      set.insert(a[i]);
      if (set.size() == old_size) {
        ans = i;
        break;
      }
    }
    cout << ++ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















