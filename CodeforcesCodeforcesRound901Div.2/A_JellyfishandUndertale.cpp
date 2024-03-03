// time-limit: 1000
// problem-url: https://codeforces.com/contest/1875/problem/A
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
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
      cin >> x[i];
    }
    ll time = b - 1;
    for (int tool : x) {
      time += std::min(tool, a - 1);
    }
    cout << ++time << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















