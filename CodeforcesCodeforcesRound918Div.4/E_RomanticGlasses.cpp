// time-limit: 1000
// problem-url: https://codeforces.com/contest/1915/problem/E
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (i % 2) a[i] *= -1;
    }
    bool any_zero = false;
    vector<ll> psum(n);
    psum[0] = a[0];
    for (int i = 1; i < n; i++) {
      psum[i] = psum[i - 1] + a[i];
      if (psum[i] == 0) any_zero = true;
    }
    std::sort(psum.begin(), psum.end());
    psum.erase(unique(psum.begin(), psum.end()), psum.end());
    bool ans = ((int)psum.size() < n) || any_zero;
    cout << (ans ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















