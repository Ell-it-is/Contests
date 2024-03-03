// time-limit: 1000
// problem-url: https://codeforces.com/contest/1593/problem/B
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
    
  }
}
/* ================= Notes ================== //
   Since it is guaranteed that the number exists, it also means each n in the input must contain either digits 0 or 5

   Only if the last digit of our number is either 0 or 5, then it has the potential to be divisible by 25, else I must remove the last digit
   Check only last 2 digits for divisibility by 25
   25
   75
   50
   00
*/


















