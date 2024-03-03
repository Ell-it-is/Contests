// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1618
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
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
      cnt += n / i;
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   A trailing zero is always produced by the prime factors of 2's and 5's
*/
















