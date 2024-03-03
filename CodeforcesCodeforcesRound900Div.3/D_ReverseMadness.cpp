// time-limit: 1000
// problem-url: https://codeforces.com/contest/1878/problem/D
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
    string s;
    cin >> s;
    vector<int> l(k);
    for (int i = 0; i < k; i++) {
      cin >> l[i];
    }
    vector<int> r(k);
    for (int i = 0; i < k; i++) {
      cin >> r[i];
    }
    int q;
    cin >> q;
    while (q--) {
      int x;
      cin >> x;
      int idx = -1;
      for (int i = 0; i < n; i++) {
        if (l[i] <= x && x <= r[i]) {
          idx = i;
          break;
        }
      }
      int a = std::min(x, r[idx] + l[idx] - x);
      int b = std::max(x, r[idx] + l[idx] - x);
      std::reverse(s.begin() + a - 1, s.begin() + b);
    }
    cout << s << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















