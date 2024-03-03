// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1141
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int i = 0;
    int j = 1;
    int max = 1;
    int cur = 1;
    std::set<int> set { a[0] };
    while (i < n && j < n) {
      int size = set.size();
      set.insert(a[j]);
      if (size == set.size()) {
        // found duplicate
        max = std::max(max, cur);
        cur--;
        set.erase(a[i]);
        i++;
      } else {
        cur++;
        j++;
      }
    }
    max = std::max(max, cur);
    cout << max << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















