// time-limit: 1000
// problem-url: https://codeforces.com/contest/1935/problem/0

// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long llong;
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
  std::cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    cout << (min(s, t + s)) << "\n";
  }
}
/* ================= Notes ================== //
   
*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
