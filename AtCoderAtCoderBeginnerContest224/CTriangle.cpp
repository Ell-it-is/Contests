// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc224/tasks/abc224_c
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
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      x[i] = a;
      y[i] = b;
    }
    int cnt = 0;
    for (int i = 0; i < n - 2; i++) {
      for (int j = i + 1; j < n - 1; j++) {
        for (int k = j + 1; k < n; k++) {
          int area = (x[j] - x[i]) * (y[k] - y[i]) - (x[k] - x[i]) * (y[j] - y[i]); 
          if (area) cnt++;
        }
      }
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   3 points form a triangl iff area is non-zero

   Algorithm to calculate area of a polygon described with coordinates is called:
   Shoelace formula

   Another way is to use Triangle inequality theorem:
   Theorem states, that the sum of any two sides must be greater than the third
   (a + b > c) && (b + c > a) && (a + c > b)
   - this is easier to remember
*/


















