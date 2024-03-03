// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/139/A
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
    vector<int> v(7);
    for (int i = 0; i < 7; i++) {
      cin >> v[i];
    }
    int day = 1;
    while (n > 0) {
      for (int i = 0; i < 7 && n > 0; i++) {
        n -= v[i];
        day = i + 1;
      }
    }
    cout << day << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















