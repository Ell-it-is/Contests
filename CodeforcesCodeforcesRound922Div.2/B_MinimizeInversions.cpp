// time-limit: 2000
// problem-url: https://codeforces.com/contest/1918/problem/B
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
    for (int i = 0; i < n; i++) cin >> a[i].first;
    for (int i = 0; i < n; i++) cin >> a[i].second;
    std::sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) cout << a[i].first << " ";
    cout << "\n";
    for (int i = 0; i < n; i++) cout << a[i].second << " ";
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















