// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1419/A
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int last = int(s[0] - '0');
    if (n == 1) {
      if (last % 2) {
        cout << 1 << "\n";
      } else {
        cout << 2 << "\n";
      }
      continue;
    }
    if (n % 2) {
      // there must be atleast one number at odd position that is odd for R to win
      bool odd = false;
      for (int i = 0; i < n; i += 2) {
        int x = int(s[i] - '0');
        if (x % 2) odd = true;
      }
      if (odd) {
        cout << 1 << "\n";
      } else {
        cout << 2 << "\n";
      }
    } else {
      // there must be atleast one number at even position that is even for B to win
      bool even = false;
      for (int i = 1; i < n; i += 2) {
        int x = int(s[i] - '0');
        if (x % 2 == 0) even = true;
      }
      if (even) {
        cout << 2 << "\n";
      } else {
        cout << 1 << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   R can choose digit at odd positions
   B can choose digit at even positions
   If last digit is odd -> R wins
   If last digit is even -> B wins
*/


















