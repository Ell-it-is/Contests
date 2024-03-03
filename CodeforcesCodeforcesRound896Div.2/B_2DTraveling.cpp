// time-limit: 1000
// problem-url: https://codeforces.com/contest/1869/problem/B
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution ================= //
ll dist(ll x1, ll y1, ll x2, ll y2) {
  return std::abs(x2 - x1) + std::abs(y2 - y1); 
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++) {
      ll x, y;
      cin >> x >> y;
      v[i] = {x, y};
    }
    if (a < k && b < k) {
      cout << 0 << '\n';
      continue;
    }
    ll p = 0; // price from a -> b
    ll x1 = v[a - 1].first;
    ll y1 = v[a - 1].second;
    ll x2 = v[b - 1].first;
    ll y2 = v[b - 1].second;
    p = dist(x1, y1, x2, y2);
    if (k == 0) {
      cout << p << '\n';
      continue;
    }
    ll price = 0;
    if (b > k) {
      
      price = std::numeric_limits<ll>::max();
      // end pos
      ll x2 = v[b - 1].first;
      ll y2 = v[b - 1].second;
      for (int i = 0; i < k; i++) {
        ll x1 = v[i].first;
        ll y1 = v[i].second;
        ll c = dist(x1, y1, x2, y2);
        price = std::min(price, c);
      } 
    }
    ll cost = 0;
    if (a > k) {
      cost = std::numeric_limits<ll>::max();
      // origin
      ll x2 = v[a - 1].first;
      ll y2 = v[a - 1].second;
      for (int i = 0; i < k; i++) {
        ll x1 = v[i].first;
        ll y1 = v[i].second;
        ll c = dist(x1, y1, x2, y2);
        cost = std::min(cost, c);
      } 
    }
    ll ans = std::min(p, price + cost);
    cout << ans << '\n';
  }
}
/* ================= Notes ====================
   The idea should be to travel to closest major city of destination b
   Then the price to pay is the travel dist from such major city to destination b

   1. Calculate distance for all major cities from destination b
   2. Pick the major city with minimal distance
   3. Calculate the price to travel from there to destination b
   4. If I don't start in major city I also have to account for price from origin a to closest major city
   5. Also compare with the price you would pay travelling from a to b directly
*/



















