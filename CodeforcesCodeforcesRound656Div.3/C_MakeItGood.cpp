// time-limit: 1000
// problem-url: https://codeforces.com/contest/1385/problem/C
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
    if (n <= 2) {
      cout << 0 << "\n";
      continue;
    }
    bool non_decr = true;
    for (int i = 0; i < n - 1; i++) {
      if (a[i] > a[i + 1]) non_decr = false;
    }
    if (non_decr) {
      cout << 0 << "\n";
      continue;
    }
    vector<int> mins;
    mins.push_back(a[n - 2]);
    for (int i = n - 3; i >= 1; i--) {
      if (a[i] < mins.back()) {
        mins.push_back(a[i]);
      } else {
        mins.push_back(mins.back());
      }
    }
    int j = n - 1;
    int i = 0;
    int k = mins.size() - 1;
    int min = mins[k];
    while (i <= n - 3) {
      if (min >= a[i] && min >= a[j]) break;
      i++;
      min = mins[--k];
    }
    if (i == -1) {
      cout << n - 2 << "\n";
      continue;
    }
    cout << i << "\n";
  }
}
/* ================= Notes ================== //
   Start from the last 3
   a[i] | a[i + 1] a[i + 2] ... a[j - 1] | a[j]
   the minimum element in middle must necessarily be greater or equal to both its sides
*/


















