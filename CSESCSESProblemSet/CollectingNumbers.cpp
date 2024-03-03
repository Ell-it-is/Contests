// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/2216
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
    std::map<int, int> map;
    for (int i = 0; i < n; i++) {
      map[a[i]] = i;
    }
    int r = 1;
    int cur = 1;
    while (cur < n) {
      int idx = map[cur];
      int idx2 = map[cur + 1];
      if (idx2 < idx) {
        r++;
      }
      cur++;
    }
    cout << r << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















