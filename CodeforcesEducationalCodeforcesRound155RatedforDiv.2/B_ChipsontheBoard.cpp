// time-limit: 2000
// problem-url: https://codeforces.com/contest/1879/problem/B
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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    if (n == 1) {
      cout << a[0] + b[0] << "\n";
      continue;
    }
    ll min_a = *std::min_element(a.begin(), a.end());
    ll min_b = *std::min_element(b.begin(), b.end());
    ll max = numeric_limits<ll>::min();
    ll sum_a = 0;
    for (int x : a) {
      sum_a += x + min_b;
      max = std::max(max, x + min_b);
    }
    ll sum_b = 0;
    for (int x : b) {
      sum_b += x + min_a;
      max = std::max(max, x + min_a);
    }
    ll sum = sum_a + sum_b;
    sum -= min_b + min_a;
    sum -= max;
    ll sum2 = std::min(sum_a, sum_b);
    cout << std::min(sum, sum2) << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















