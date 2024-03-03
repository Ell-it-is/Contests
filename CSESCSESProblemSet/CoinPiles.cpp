// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1754
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
    int a, b;
    cin >> a >> b;
    if (a < b) swap(a, b);
    if (a == 0 && b == 0) {
      cout << "YES" << "\n";
      continue;
    } else if ((a > 0 && b == 0) || (a == 1 && b == 1)) {
      cout << "NO" << "\n";
      continue;
    }
    int diff = a - b; // also the # of steps it takes for 'a' to equal 'b'
    a -= diff * 2;
    b -= diff;
    if (a < 0 || b < 0) {
      cout << "NO" << "\n";
    } else if (a == b && (a % 3 == 0)) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















