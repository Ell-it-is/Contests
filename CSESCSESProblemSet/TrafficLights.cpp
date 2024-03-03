// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1163
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
    int x, n;
    cin >> x >> n;
    std::set<int> lights {0, x};
    std::multiset<int> dist {x};
    for (int k = 0; k < n; k++) {
      int pos;
      cin >> pos;
      auto it1 = lights.upper_bound(pos);
      auto it2 = it1;
      it2--;
      dist.erase(dist.find(*it1 - *it2));
      dist.insert(pos - *it2);
      dist.insert(*it1 - pos);
      lights.insert(pos);
      auto ans = dist.rbegin();
      cout << *ans << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















