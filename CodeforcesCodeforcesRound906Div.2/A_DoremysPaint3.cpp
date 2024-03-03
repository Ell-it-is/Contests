// time-limit: 1000
// problem-url: https://codeforces.com/contest/1890/problem/A
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
    std::set<int> set;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      set.insert(a[i]);
    }
    bool ans = set.size() == 1;
    if (set.size() == 2) {
      int x = 0;
      int y = 0;
      for (int i = 0; i < n; i++) {
        if (a[i] == *set.begin()) x++;
        if (a[i] == *set.rbegin()) y++;
      }
      if (n % 2 == 0 && x == y) ans = true;
      else if (n % 2 == 1 && std::abs(x - y) == 1) ans = true;
    }
    cout << (ans ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   1 6 (this element must be 1) (this element must be 6)
   1 2 1 2 1
*/


















