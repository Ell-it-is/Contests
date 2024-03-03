// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc171/tasks/abc171_b
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
  //cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }
    std::sort(p.begin(), p.end());
    int sum = 0;
    for (int i = 0; i < k; i++) {
      sum += p[i];
    }
    cout << sum << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















