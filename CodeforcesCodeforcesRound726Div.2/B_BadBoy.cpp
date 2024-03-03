// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1537/B
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
int man_dist(int i, int j, int x, int y) {
  return abs(i - x) + abs(j - y);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n, m, i, j;
    cin >> n >> m >> i >> j;
    int top_left = man_dist(i, j, 0, 0);
    int top_right = man_dist(i, j, 0, m - 1);
    int bottom_left = man_dist(i, j, n - 1, 0);
    int bottom_right = man_dist(i, j, n - 1, m - 1);
    int min = std::min({top_left, top_right, bottom_left, bottom_right});
    if (min == top_left || min == bottom_right) {
      cout << 1 << " " << m << " " << n << " " << 1 << "\n";   
    } else if (min == top_right || min == bottom_left) {
      cout << 1 << " " << 1 << " " << n << " " << m << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















