// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/118/B
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
    vector<vector<int>> v(n + 1);
    for (int i = 0; i < n + 1; i++) {
      vector<int> w;
      for (int j = 0; j <= i; j++) {
        w.push_back(j);
      }
      vector<int> r(w);
      std::reverse(r.begin(), r.end());
      for (int j = 1; j < r.size(); j++) {
        w.push_back(r[j]);
      }
      v[i] = w;
    }
    int spaced = 2 * n;
    for (int i = 0; i < n + 1; i++) {
      vector<int> w = v[i];
      for (int j = 1; j <= spaced; j++) {
        cout << " ";
      }
      for (int j = 0; j < w.size(); j++) {
        cout << w[j];
        if (j == w.size() - 1) continue;
        cout << " ";
      }
      cout << "\n";
      spaced -= 2;
    }
    spaced = 2;
    std::reverse(v.begin(), v.end());
    for (int i = 1; i < n + 1; i++) {
      vector<int> w = v[i];
      for (int j = 1; j <= spaced; j++) {
        cout << " ";
      }
      for (int j = 0; j < w.size(); j++) {
        cout << w[j];
        if (j == w.size() - 1) continue;
        cout << " ";
      }
      cout << "\n";
      spaced += 2;
    }
  }
}
/* ================= Notes ================== //
   2 * n + 1 rows and columns
*/

















