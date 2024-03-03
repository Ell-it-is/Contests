// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc337/tasks/abc337_c
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
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
      if (a[i] == -1) {
        ans[0] = i + 1;
        break;
      }
    }

    std::map<int, int> map;
    for (int i = 0; i < n; i++) {
      map[a[i]] = i + 1;
    }
    for (int i = 1; i < n; i++) {
      int pos = map[ans[i - 1]];
      ans[i] = pos;
    }
    for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















