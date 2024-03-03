// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1621
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
    std::set<int> set;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      set.insert(x);
    }
    cout << set.size() << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















