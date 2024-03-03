// time-limit: 1000
// problem-url: https://codeforces.com/contest/1676/problem/A
// Start: Created on Sunday, September 17, 2023 at 9:54:33 AM
// End: Created on Sunday, September 17, 2023 at 9:58:53 AM 
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
    int s1 = 0, s2 = 0;
    for (int i = 0; i < (int) s.size() / 2; i++) {
      s1 += s[i] - '0';
    }
    for (int i = (int) s.size() / 2; i < (int) s.size(); i++) {
      s2 += s[i] - '0';
    }
    if (s1 == s2) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
}
/* ================= Notes ================== //
   
*/


















