// time-limit: 1000
// problem-url: https://codeforces.com/contest/1454/problem/B
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
    std::map<int, int> map;
    for (int i = 0; i < n; i++) map[a[i]]++;
    int ans = -1;
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
      if (map[a[i]] == 1 && a[i] < min) {
        ans = i + 1;
        min = a[i];
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















