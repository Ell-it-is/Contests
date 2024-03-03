// time-limit: 5000
// problem-url: https://codeforces.com/contest/1933/problem/C

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
    ll a, b, l;
    cin >> a >> b >> l;

    std::set<ll> ans;
    ll xmax = logl(l) / logl(a);
    ll ymax = logl(l) / logl(b);
    for (ll x = 0; x <= xmax * 2; x++) {
      for (ll y = 0; y <= ymax * 2; y++) {
        ll k = 0;
        while (k * powl(a, x) * powl(b, y) <= l) {
          if (k * powl(a, x) * powl(b, y) == l) {
            ans.insert(k);
          }
          k++;
        }
      }
    }
    cout << (int) ans.size() << "\n";
  }
}
/* ================= Notes ================== //
   
*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
