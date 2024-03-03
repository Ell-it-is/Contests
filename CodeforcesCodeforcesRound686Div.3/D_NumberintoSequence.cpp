// time-limit: 3000
// problem-url: https://codeforces.com/contest/1454/problem/D
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
vector<ll> trial_division1(ll n) {
  vector<ll> factorization;
  for (ll d = 2; d * d <= n; d++) {
    while (n % d == 0) {
      factorization.push_back(d);
      n /= d;
    }
  }
  if (n > 1)
    factorization.push_back(n);
  return factorization;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    ll n;
    cin >> n;
    vector<ll> q = trial_division1(n);
    int m = (int) q.size();
    if (v.front() == 2) {
      
    } else {
      
      
    }
  }
}
/* ================= Notes ================== //
   
*/


















