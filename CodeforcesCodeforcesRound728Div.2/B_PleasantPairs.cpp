// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1541/B
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
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i].first;
      a[i].second = i + 1;
    }
    std::sort(a.begin(), a.end());
    int cnt = 0;
    
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (a[i].first * a[j].first <= 2 * n) {
          cnt += (a[i].first * a[j].first == a[i].second + a[j].second);
        }
      }
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















