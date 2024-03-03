// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1629
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
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      v[i] = { b, a };
    }
    std::sort(v.begin(), v.end());
    int cnt = 1;
    int blast = v[0].first;
    for (int i = 1; i < n; i++) {
      int a = v[i].second;
      int b = v[i].first;
      if (a >= blast) {
        cnt++;
        blast = b;
      }
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















