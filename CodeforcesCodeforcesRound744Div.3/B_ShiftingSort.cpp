// time-limit: 2000
// problem-url: https://codeforces.com/contest/1579/problem/B
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
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      a[i] = {x, i}; 
    }
    std::sort(a.begin(), a.end());
    vector<string> ans;
    int cnt = 0;
    for (int l = 1; l < n; l++) {
      int d = std::abs((a[l - 1].second + 1) - l);
      for (int j = l - 1; j < n; j++) {
        a[j].second -= d;
        if (a[j].second < (l - 1)) {
          a[j].second = n - std::abs(a[j].second - (l - 1));
        }
      }
      if (d == 0) continue;
      string s = to_string(l) + " " + to_string(n) + " " + to_string(d);
      ans.push_back(s);
    }
    cout << ans.size() << "\n";
    for (string t : ans) {
      cout << t << "\n";
    }
  }
}
/* ================= Notes ================== //
   1 3 2 4
   1 2 4 3
   1 2 3 4

   1 4 3 2 5
   1 2 5 4 3
   1 2 3 5 4
   1 2 3 4 5
*/


















