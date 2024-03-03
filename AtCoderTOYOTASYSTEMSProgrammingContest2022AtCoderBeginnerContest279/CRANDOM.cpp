// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc279/tasks/abc279_c
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
    int h, w;
    cin >> h >> w;
    vector<string> s(h), t(h);
    for (int i = 0; i < h; i++) cin >> s[i];
    for (int i = 0; i < h; i++) cin >> t[i];
    vector<string> a(w, string(h, ' ')), b(w, string(h, ' '));
    for (int i = 0; i < w; i++) {
      for (int j = 0; j < h; j++) {
        a[i][j] = s[j][i];
        b[i][j] = t[j][i];
      }
    }
    std::sort(b.begin(), b.end());
    std::sort(a.begin(), a.end());
    if (a == b) {
      cout << "Yes" << "\n";
    } else {
      cout << "No" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















