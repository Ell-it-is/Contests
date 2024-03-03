// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1695/B
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
    if (n % 2) {
      cout << "Mike" << "\n";
    } else {
      int pos = min_element(a.begin(), a.end()) - a.begin() + 1;
      if (pos % 2) {
        cout << "Joe" << "\n";
      } else {
        cout << "Mike" << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   Mike starts first
   If all piles are empty, the player whos turn it is loses

   (i mod n) + 1 just means he will take the next one

   SOME stones ffs
   The pile that depletes first must be the first pile with min # of stones... 
*/


















