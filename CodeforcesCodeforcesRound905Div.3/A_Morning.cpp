// time-limit: 2000
// problem-url: https://codeforces.com/contest/1883/problem/A
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
    int total = 0;
    int last = 1;
    for (char c : s) {
      int digit = int(c - '0');
      if (digit == 0) digit = 10;
      total += std::abs(digit - last);
      total++;
      last = digit;
    }
    cout << total << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















