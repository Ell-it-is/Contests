// time-limit: 1000
// problem-url: https://codeforces.com/contest/1934/problem/0

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
    for (int i = 0; i < n; i++) cin >> a[i];
    std::sort(a.begin(), a.end());
    ll ans = abs(a[0] - a[n - 1]) + abs(a[0] - a[n - 2]) + abs(a[1] - a[n - 1]) + abs(a[1] - a[n - 2]);
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
