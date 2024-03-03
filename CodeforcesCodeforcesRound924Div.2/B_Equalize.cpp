// time-limit: 1000
// problem-url: https://codeforces.com/contest/1928/problem/B
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
    
    std::sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    int m = (int) a.size();
    int j = 0;
    int max = 0;
    for (int i = 0; i < m; i++) {
      while (j < m && a[j] - a[i] < n) j++;
      max = std::max(max, j - i);
    }
    cout << max << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















