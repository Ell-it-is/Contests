// time-limit: 1000
// problem-url: https://codeforces.com/contest/1454/problem/C
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
    bool equal = true;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (i && a[0] != a[i]) equal = false;
    }
    if (equal) {
      cout << 0 << "\n";
      continue;
    }
    n = std::unique(a.begin(), a.end()) - a.begin();
    a.resize(n);
    std::map<int, int> map;
    for (int i = 0; i < n; i++) {
      map[a[i]]++;
    }
    map[a[0]]--;
    map[a[n - 1]]--;
    int ans = INT_MAX;
    for (auto&& [num, cnt] : map) {
      ans = std::min(ans, cnt);
    }
    cout << ans + 1 << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















