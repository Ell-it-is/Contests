// time-limit: 1000
// problem-url: https://codeforces.com/contest/1873/problem/D
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'B') v.push_back(i);
    }
    int m = (int) v.size();
    int erased = 0;
    if (m > 0) {
      erased = 1;
      int last_erased = v[0] + k - 1;
      for (int i = 1; i < m; i++) {
        if (v[i] > last_erased) {
          erased++;
          last_erased = v[i] + k - 1;
        }
      } 
    }
    cout << erased << "\n";
  }
}
/* ================= Notes ================== //
   I can take substring of size k and make all characters in that substring white.
   there are n - k + 1 such substrings

   I think that it is intuitive to take such substring that has the most number of B cells in it
*/


















