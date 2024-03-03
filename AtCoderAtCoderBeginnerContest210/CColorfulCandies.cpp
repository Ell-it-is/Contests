// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc210/tasks/abc210_c
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
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    std::map<int, int> map;
    for (int i = 0; i < k; i++) map[c[i]]++;
    int max = (int) map.size();
    int ans = max;
    int i = 0;
    int j = k - 1;
    while (j < n - 1) {
      map[c[i]]--;
      if (map[c[i]] == 0) max--; 
      i++;
      j++;
      map[c[j]]++;
      if (map[c[j]] == 1) max++;
      ans = std::max(ans, max);
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















