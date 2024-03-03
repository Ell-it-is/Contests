// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc334/tasks/abc334_b
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
ll floor(ll x, ll m) {
  ll r = (x % m + m) % m;
  db(r);
  return (x - r) / m;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    ll a, m, l, r;
    cin >> a >> m >> l >> r;
    l -= a;
    r -= a;
    db(l, r);
    // this way I can just pretend that the trees are spread from origin 0 instead of 'a'
    int x = floor(r, m);
    int y = floor(l - 1, m);
    db(x);
    db(y);
    cout << x - y << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















