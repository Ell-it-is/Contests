// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1355/A
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
    ll a, k;
    cin >> a >> k;
    int min = -1;
    int max = -1;
    while (min != 0 && k > 1) {
      k--;
      string s = to_string(a);
      min = *std::min_element(s.begin(), s.end()) - '0';
      max = *std::max_element(s.begin(), s.end()) - '0';
      a = a + min * max;
    }
    cout << a << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















