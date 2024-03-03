// time-limit: 2000
// problem-url: https://codeforces.com/contest/1879/problem/A
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
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
      int x, y; // s[i], e[i]
      cin >> x >> y;
      v[i] = { x, y };
    }
    bool win = true;
    for (int i = 1; i < n; i++) {
      int s = v[i].first;
      int e = v[i].second;
      if (s >= v[0].first && e >= v[0].second) {
        win = false;
        break;
      }
    }
    cout << (win ? v[0].first : -1) << "\n";
  }
}
/* ================= Notes ================== //
   s[i] >= w to be able to lift the barbell e[i] times

   w < s[0]
   optimally w = s[0] - 1

   if there is another participant that has same or greater strength AND same or more endurance, our guy will lose
*/


















