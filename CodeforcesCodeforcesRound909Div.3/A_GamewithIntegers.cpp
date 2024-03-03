// time-limit: 1000
// problem-url: https://codeforces.com/contest/1899/problem/A
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
    if ( (n + 1) % 3 == 0 || (n - 1) % 3 == 0 ) {
      cout << "First" << "\n"; 
    } else {
      // (n % 3 == 0)
      cout << "Second" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















