// time-limit: 1000
// problem-url: https://codeforces.com/contest/1619/problem/A
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
    string s;
    cin >> s;
    int n = (int) s.size();
    bool ans = false;
    if (n % 2 == 0) {
      if (s.substr(0, n / 2) == s.substr(n / 2)) {
        ans = true;
      }
    }
    cout << (ans ? "yes" : "no") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















