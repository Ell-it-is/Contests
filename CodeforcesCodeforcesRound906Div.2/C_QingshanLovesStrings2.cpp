// time-limit: 1000
// problem-url: https://codeforces.com/contest/1890/problem/C
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
    bool good = true; 
    for (int i = 0; i <= n / 2; i++) {
      if (s[i] == s[n - i - 1]) good = false;
    }
    
  }
}
/* ================= Notes ================== //
   Not 'good' option:
   Let's say s[i] == s[n - i - 1] and they both equal 1
   I could place before s[i] 01 to make them not equal
   Ex.: 1001
        011001

   Ex.: 11011
        0111011
        011101011

   Lets say they both equal 0
   Ex.: 0110
        011001
        
*/


















