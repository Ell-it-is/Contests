// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc331/tasks/abc331_b
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
    int n, s, m, l;
    cin >> n >> s >> m >> l;
    int min = INT_MAX;
    for (int i = 0; i <= 100; i++) {
      for (int j = 0; j <= 100; j++) {
        for (int k = 0; k <= 100; k++) {
          if (i * 6 + j * 8 + k * 12 >= n) {
            int price = i * s + j * m + k * l;
            min = std::min(min, price);
          }
        }
      }
    }
    cout << min << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















