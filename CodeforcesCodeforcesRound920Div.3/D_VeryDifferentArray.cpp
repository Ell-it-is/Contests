// time-limit: 2000
// problem-url: https://codeforces.com/contest/1921/problem/D
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end(), std::greater<>());
    int sum = 0;
    int j = 0;
    int k = m - 1;
    for (int i = 0; i < n; i++) {
      int first = std::abs(a[i] - b[j]);
      int second = std::abs(a[i] - b[k]);
      int max = 0;
      if (first >= second) {
        max = first;
        j++;
      } else {
        max = second;
        k--;
      }
      sum += max;
    }
    cout << sum << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















