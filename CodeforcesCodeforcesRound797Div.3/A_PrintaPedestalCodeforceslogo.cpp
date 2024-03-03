// time-limit: 1000
// problem-url: https://codeforces.com/contest/1690/problem/A
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
    int n;
    cin >> n;
    for (int h1 = 3; h1 < n; h1++) {
      int h3 = (n - h1) / 2;
      int h2 = n - h1 - h3;
      if (h3 > 1 && h2 + 1 < h1) {
        h3--;
        h2++;
      }
      if (h1 > h2 && h2 > h3) {
        cout << h2 << " " << h1 << " " << h3 << "\n";
        break;
      }
    }
  }
}
/* ================= Notes ================== //
   
*/


















