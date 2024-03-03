// time-limit: 2000
// problem-url: https://codeforces.com/contest/1881/problem/A
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
    string x, s;
    cin >> x >> s;
    int cnt = 0;
    while (m > n) {
      n *= 2;
      x += x;
      cnt++;
    }
    if (x.find(s) != string::npos) {
      cout << cnt << "\n";
    } else {
      x += x;
      cnt++;
      if (x.find(s) != string::npos) {
        cout << cnt << "\n";
      } else {
        cout << -1 << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   
*/


















