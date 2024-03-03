// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1641
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
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      a[i] = {num, i}; // i is the original index before sorting
    }
    std::sort(a.begin(), a.end());
    for (int k = 0; k < n; k++) {
      int r = x - a[k].first;
      // now find sum of 2 values that add up to 'r'
      // and their indicies do not coincide with the index of a[k]
      int i = 0;
      int j = n - 1;
      while (i < j) {
        int sum = a[i].first + a[j].first;
        if (sum == r) {
          if (a[i].second != a[k].second && a[j].second != a[k].second) {
            cout << a[i].second + 1 << " " << a[j].second + 1 << " " << a[k].second + 1 << "\n";
            return 0;
          }
        }
        if (sum < r) {
          i++;
        } else {
          j--;
        }
      }
    }
    cout << "IMPOSSIBLE" << "\n";
  }
}
/* ================= Notes ================== //

*/


















