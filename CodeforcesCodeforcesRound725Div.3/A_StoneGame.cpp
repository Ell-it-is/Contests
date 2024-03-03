// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1538/A
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
    int min_pos = std::min_element(a.begin(), a.end()) - a.begin() + 1;
    int max_pos = std::max_element(a.begin(), a.end()) - a.begin() + 1;
    int diff = std::abs(min_pos - max_pos) + 1;
    int x = std::max(min_pos, max_pos);
    int y = std::max(n - min_pos + 1, n - max_pos + 1);
    int z = std::min(min_pos, max_pos) + std::min(n - min_pos + 1, n - max_pos + 1);
    int ans = std::min({x, y, z});
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















