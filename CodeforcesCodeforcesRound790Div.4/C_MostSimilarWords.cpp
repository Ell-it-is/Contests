// time-limit: 2000
// problem-url: https://codeforces.com/contest/1676/problem/C
// Start: Created on Sunday, September 17, 2023 at 10:03:05 AM
// End: Created on Sunday, September 17, 2023 at 10:12:19 AM
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
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      v[i] = s;
    }
    int min = numeric_limits<int>::max();
    for (int i = 0; i < n - 1; i++) {
      string s = v[i];
      for (int j = i + 1; j < n; j++) {
        string t = v[j];
        int diff = 0;
        for (int k = 0; k < m; k++) {
          diff += abs(int(s[k]) - int(t[k]));
        }
        min = std::min(min, diff);
      }
    }
    cout << min << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















