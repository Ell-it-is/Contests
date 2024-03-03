// time-limit: 1000
// problem-url: https://codeforces.com/contest/1907/problem/0
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
    int a = s[0] - 'a' + 1;
    int b = s[1] - '1' + 1;
    for (int row = 1; row <= 8; row++) {
      if (row == b) continue;
      cout << s[0] << row << "\n";
    }
    for (char col = 'a'; col <= 'h'; col++) {
      if (col == s[0]) continue;
      cout << col << b << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















