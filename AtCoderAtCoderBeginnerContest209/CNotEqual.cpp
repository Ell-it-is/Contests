// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc209/tasks/abc209_c
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
ll MOD = 1e9 + 7;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<ll> c(n);
    for (int i = 0; i < n; i++) {
      cin >> c[i];
    }
    std::sort(c.begin(), c.end());
    ll remove = 1;
    ll ans = c[0];
    for (int i = 1; i < n; i++) {
      ll op = c[i] - remove;
      remove++;
      ans = (ans * op) % MOD;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   when you pick c[i] then all c[i + 1] ... c[n - 1] lose 1 option since they are bigger or equal
   
*/


















