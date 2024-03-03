// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1220/C
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
    string s;
    cin >> s;
    int n = (int) s.size();
    vector<int> v(n, 0);
    int min = s[0];
    for (int i = 1; i < n; i++) {
      int cur = s[i];
      if (min < cur) {
        v[i] = 1;
      } else {
        min = cur;
      }
    }
    for (int i = 0; i < n; i++) {
      cout << (v[i] == 1 ? "Ann" : "Mike") << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















