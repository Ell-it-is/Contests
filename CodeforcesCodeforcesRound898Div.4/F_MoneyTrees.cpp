// time-limit: 2000
// problem-url: https://codeforces.com/contest/1873/problem/F
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
    int n, k;
    cin >> n >> k;
    vector<int> f(n); // fruits at i-th tree
    for (int i = 0; i < n; i++) {
      cin >> f[i];
    }
    vector<int> h(n); // heigh of i-th tree
    for (int i = 0; i < n; i++) {
      cin >> h[i];
    }
    vector<pair<int, vector<int>>> g(n - 1);
    for (int i = 0; i < n - 1; i++) {
      g[i].first = h[i] % h[i + 1] == 0 ? 1 : 0;
    }
    for (int i = 0; i < n - 1; i++) {
      bool zero = g[i].first == 0;
      for (int j = i + 1; j < n; j++) {
        if (j == n - 1) {
          g[i].second.push_back(zero ? 0 : 1);
          continue;
        }
        if (g[j].first == 0) zero = true;
        g[i].second.push_back(zero ? 0 : 1);
      }
    }
    db(g);
    vector<ll> psum(n);
    psum[0] = f[0];
    for (int i = 1; i < n; i++) {
      psum[i] = psum[i - 1] + f[i];
    }
    ll max = 0;
    int length = 0;
    int l = 1;
    while (l <= n) {
      for (int i = 0; i < n - l + 1; i++) {
        bool can = i == n - 1 ? true : false;
        db(i, i + l - 1);
        if (i != n - 1) {
          if (g[i].first != 0 && g[i].second[(i + l - 1) - (i) == 0 ? 0 : (i + l - 1) - (i) - 1] != 0) {
            can = true;
          } 
        }
        if (can) {
          ll apples = i == 0 ? psum[i + l - 1] : psum[i + l - 1] - psum[i - 1];
          if (apples <= k) {
            if (l > length) {
              max = apples;
              length = l;
            }
          }
        }
      }
      l++;
    }
    cout << length << "\n";
  }
}
/* ================= Notes ================== //
   he must collect <= k fruits in range of [L, R] where its true that: h[i] % h[i + 1] == 0

   To quickly search in precomputed h[i]'s I need to answer the question in O(1) of: Is there a 0 in range [L, R]?
   I could say it by the first 0 to the right from current 1
*/


















