// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc325/tasks/abc325_b
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
      int ppl, time;
      cin >> ppl >> time;
      v[i] = {time , ppl};
    }
    int max = INT_MIN;
    for (int t = 0; t <= 23; t++) {
      int cnt = 0;
      for (int i = 0; i < n; i++) {
        if (((v[i].first + t) % 24) >= 9 && ((v[i].first + t) % 24) < 18) {
          cnt += v[i].second;
        }
      }
      max = std::max(max, cnt);
    }
    cout << max << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















