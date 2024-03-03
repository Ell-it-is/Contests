// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/149/A
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
    int k;
    cin >> k;
    int n = 12;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    std::sort(v.rbegin(), v.rend());
    int g = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (g >= k) {
        break;
      }
      g += v[i];
      cnt++;
    }
    if (g < k) {
      cout << -1 << "\n";
    } else {
      cout << cnt << "\n"; 
    }
  }
}
/* ================= Notes ================== //
   
*/


















