// time-limit: 1000
// problem-url: https://codeforces.com/contest/1660/problem/B
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    if (n == 1 && a.front() >= 2) {
      cout << "NO" << "\n";
    } else if (n == 1) {
      cout << "YES" << "\n";
    } else {
      std::sort(a.begin(), a.end());
      if (std::abs(a[n - 1] - a[n - 2]) <= 1) {
        cout << "YES" << "\n";
      } else {
        cout << "NO" << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   If we are left with 2 or more condies of some type and no other candies -> NO
   If after eating a candy, this type will remain as the most frequent so that we have no choice -> NO
   
*/


















