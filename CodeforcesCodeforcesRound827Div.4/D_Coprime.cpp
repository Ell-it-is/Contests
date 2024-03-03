// time-limit: 3000
// problem-url: https://codeforces.com/contest/1742/problem/D
// Start: DATE
// End: DATE
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
    // save positions of each number as list of lists
    vector<vector<int>> c(1001);
    for (int i = 0; i < n; i++) {
      c[a[i]].push_back(i);
    }
    db(c);
    int ans = -1;
    for (int i = 1; i <= 1000; i++) {
      // if number c[i] exists in my array 'a'
      if (!c[i].empty()) {
        // go through all numbers c[j] bigger than c[i]
        // and check if their gcd is 1
        for (int j = i + 1; j <= 1000; j++) {
          if (!c[j].empty() && gcd(i, j) == 1) {
            // if it is, we take the last position of those 2 numbers
            ans = std::max(ans, c[i].back() + c[j].back() + 2);
          }
        }
      }
    }
    // special case of 1
    if (!c[1].empty()) {
      ans = std::max(ans, c[1].back() * 2 + 2);
    }
    cout << ans << '\n';
  }
}
/* ================= Notes ================== //
   I need to precompute to quickly answer the following:
   Q: Could a number x form a coprime with a number <= 1000?
   I could create for each number [1, 1000] create a set of integers with which it forms co-prime
   
*/


















