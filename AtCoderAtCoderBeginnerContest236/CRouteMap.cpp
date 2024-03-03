// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc236/tasks/abc236_c
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
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    vector<string> t(m);
    for (int i = 0; i < m; i++) cin >> t[i];
    std::sort(t.begin(), t.end());
    for (string a : s) {
      if (std::binary_search(t.begin(), t.end(), a)) {
        cout << "Yes" << "\n";
      } else {
        cout << "No" << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   
*/


















