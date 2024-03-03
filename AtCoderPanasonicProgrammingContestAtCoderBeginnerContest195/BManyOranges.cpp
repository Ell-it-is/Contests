// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc195/tasks/abc195_b
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
    int a, b, w;
    cin >> a >> b >> w;
    w *= 1000; // from kg -> g
    int min = std::ceil(1.0 * w / b);
    int max = std::floor(1.0 * w / a);
    if (min > max) {
      cout << "UNSATISFIABLE" << "\n";
    } else {
      cout << min << " " << max << "\n";
    }
  }
}
/* ================= Notes ================== //
   orange weight: [A, B] (including real values)
   W - total weigth of all chosen oranges
*/


















