// time-limit: 2000
// problem-url: https://codeforces.com/contest/1311/problem/C
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
    string s;
    cin >> s;
    vector<int> p(m + 1);
    for (int i = 0; i < m; i++) {
      cin >> p[i];
      p[i]--;
    }
    p[m] = n - 1;
    vector<vector<int>> b(n, vector<int>(26, 0));
    vector<int> v(26, 0);
    for (int i = 0; i < n; i++) {
      v[s[i] - 'a']++;
      b[i] = v;
    }
    vector<int> ans(26, 0);
    for (int i = 0; i < m + 1; i++) {
      for (int k = 0; k < 26; k++) {
        ans[k] += b[p[i]][k];
      }
    }
    for (int x : ans) {
      cout << x << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   1) I press p[0] first buttons
   2) I press p[1] first buttons
   ...
   m) I press p[i] first buttons
*/
















