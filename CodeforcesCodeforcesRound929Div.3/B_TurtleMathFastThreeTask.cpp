// time-limit: 2000
// problem-url: https://codeforces.com/contest/1933/problem/B

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
  std::cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }
    int ans = 0;
    int r = sum % 3ll;
    if (r == 2) ans = 1;
    else if (r == 1) ans = 2;

    if (ans == 2) {
      for (int i = 0; i < n; i++) {
        if ((sum - a[i]) % 3 == 0) {
          ans = 1;
          break;
        }
      } 
    }
    
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
