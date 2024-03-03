// time-limit: 2500
// problem-url: https://codeforces.com/contest/1914/problem/C
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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int max_exp = 0; // max exp path
    int max_path_a = std::min(n, k);
    vector<int> psum(n);
    psum[0] = a[0];
    for (int i = 1; i < n; i++) {
      psum[i] = psum[i - 1] + a[i];
    }
    int cur_max = -1;
    for (int i = 1; i <= max_path_a; i++) {
      int r = k - i;
      cur_max = std::max(cur_max, b[i - 1]);
      max_exp = std::max(max_exp, psum[i - 1] + r * cur_max);
    }
    cout << max_exp << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















