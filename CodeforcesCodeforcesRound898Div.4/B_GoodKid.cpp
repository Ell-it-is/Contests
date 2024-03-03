// time-limit: 1000
// problem-url: https://codeforces.com/contest/1873/problem/B
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
    vector<int> v(n);
    int max = 1;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      max *= v[i];
    }
    for (int i = 0; i < n; i++) {
      v[i] += 1;
      int product = 1;
      for (int j = 0; j < n; j++) {
        product *= v[j];
      }
      max = std::max(max, product);
      v[i] -= 1;
    }
    cout << max << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















