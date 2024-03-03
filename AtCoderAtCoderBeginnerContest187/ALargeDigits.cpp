// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc187/tasks/abc187_a
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
    int a, b;
    cin >> a >> b;
    auto sum = [&] (string s) {
      int res = 0;
      for (int i = 0; i < 3; i++) {
        res += int(s[i] - '0'); 
      }
      return res;
    };
    cout << std::max(sum(to_string(a)), sum(to_string(b))) << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















