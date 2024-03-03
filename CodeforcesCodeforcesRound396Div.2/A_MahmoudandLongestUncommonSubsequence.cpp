// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/766/A
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
    string a, b;
    cin >> a >> b;
    if (a.size() > b.size()) swap(a, b);
    int n = (int) a.size();
    int m = (int) b.size();
    // a <= b
    if (m > n) {
      cout << m << "\n";
    } else {
      // n == m
      if (a == b) {
        cout << -1 << "\n";
      } else {
        // a != b && n == m
        cout << n << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   the longest subsequence of ONE OF THEM that DOES NOT appear in the OTHER ONE
*/


















