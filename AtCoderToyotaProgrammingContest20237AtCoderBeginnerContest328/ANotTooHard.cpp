// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc328/tasks/abc328_a
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
    int n, x;
    cin >> n >> x;
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }
    int sum = 0;
    std::for_each(s.begin(), s.end(), [&] (int a) {
      if (a <= x) sum += a;
    });
    cout << sum << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















