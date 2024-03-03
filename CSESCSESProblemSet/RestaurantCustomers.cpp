// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1619
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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      cin >> b[i];
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    int max = INT_MIN;
    int cnt = 0;
    int j = 0;
    for (int i = 0; i < n && j < n; i++) {
      int arrived = a[i];
      int left = b[j];
      db(arrived, left);
      cnt++;
      if (left <= arrived) {
        cnt--;
        j++;
      }
      max = std::max(max, cnt);
    }
    cout << max << "\n";
  }
}
/* ================= Notes ================== //
   Only a singular person can come or leave at a specific point in time
*/


















