// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1070
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
    if (n == 1) {
      cout << 1 << "\n";
    } else if (n == 2 || n == 3) {
      cout << "NO SOLUTION" << "\n";
    } else {
      for (int i = n - 1; i >= 1; i -= 2) {
        cout << i << " ";
      }
      for (int i = n; i >= 1; i -= 2) {
        cout << i << " ";
      }
      cout << "\n";
    }
  }
}
/* ================= Notes ================== //
   5: 5 3 1 4 2
   6: 6 4 2 5 3 1
*/


















