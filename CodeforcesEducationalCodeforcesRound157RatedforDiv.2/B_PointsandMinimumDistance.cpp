// time-limit: 2000
// problem-url: https://codeforces.com/contest/1895/problem/B
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
int mdist(int x1, int y1, int x2, int y2) {
  return std::abs(x2 - x1) + std::abs(y2 - y1); 
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; i++) {
      cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    vector<pair<int, int>> p(n);
    int dist = 0;
    for (int i = 0; i < n; i++) {
      p[i].first = a[i];
      p[i].second = a[i + n];
      if (i) {
        dist += mdist(p[i].first, p[i].second, p[i - 1].first, p[i - 1].second);
      }
    }
    cout << dist << "\n";
    for (int i = 0; i < n; i++) {
      cout << p[i].first << " " << p[i].second << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















