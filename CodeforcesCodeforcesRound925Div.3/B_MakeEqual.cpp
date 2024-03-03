// time-limit: 2000
// problem-url: https://codeforces.com/contest/1931/problem/B
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
    if (n == 1) {
      cout << "YES" << "\n";
      continue;
    }
    int sum = std::accumulate(a.begin(), a.end(), 0);
    if (sum % n) {
      cout << "NO" << "\n";
      continue;
    }
    int x = sum / n;
    for (int i = 0; i < n - 1; i++) {
      if (a[i] < x) break;
      if (a[i] > x) {
        int d = a[i] - x;
        a[i] -= d;
        a[i + 1] += d;
      }
    }
    bool ans = true;
    for (int i = 0; i < n - 1; i++) {
      if (a[i] != a[i + 1]) {
        ans = false;
        break;
      } 
    }
    cout << (ans ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















