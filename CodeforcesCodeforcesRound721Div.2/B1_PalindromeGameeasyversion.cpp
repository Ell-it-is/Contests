// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1527/B1
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
    int a = 0;
    int b = 0;
    int cnt_zero = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '0') cnt_zero++;
    }
    if (cnt_zero == 1) {
      cout << "BOB" << "\n";
    } else if (cnt_zero % 2) {
      cout << "ALICE" << "\n";
    } else {
      cout << "BOB" << "\n";
    }
  }
}
/* ================= Notes ================== //
   Either pay 1 dollar for changing character '0' -> '1'
   If the string is not a palindrome, we can choose to reverse the string for free (if the person before us didn't already)
   Game ends when -> all characters are 1
   The winner is decided based on the # of dollars they spent. The one who spent less wins.

   It's optimal to reverse the string (we don't pay any dollars and pass the move)
   If we do pay, it is optimal to pick such a position that leaves the string a palindrome (the other guy cannot choose option 2)

   1) she pays a dollar -> not pali
   2) he reverse -> not pali
   3) she pay, make it pali (so the other guy cant reverse) -> pali
   4) he pays a dollar -> not pali
   5) she reverse -> not pali
   6) he pay, make it a pali (so the other guy cant reverse) -> pali
      

   1st -> pay, pay, don't, ...
   2nd -> dont, pay, pay, ...
*/


















