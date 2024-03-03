// time-limit: 3500
// problem-url: https://codeforces.com/contest/1914/problem/E1
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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    vector<pair<int, int>> wina(n);
    for (int i = 0; i < n; i++) {
      wina[i] = { a[i] - 1 + b[i], i };
    }
    std::sort(wina.rbegin(), wina.rend());

    vector<pair<int, int>> winb(n);
    for (int i = 0; i < n; i++) {
      winb[i] = { b[i] - 1 + a[i], i };
    }
    std::sort(winb.rbegin(), winb.rend());
    
    ll ans = 0;
    bool alice = true; // alice turn
    for (int i = 0; i < n; i++) {
      int idx = -1;
      if (alice) {
        idx = wina[i].second;
        ans += a[idx] - 1;
      } else {
        idx = winb[i].second;
        ans -= b[idx] - 1;
      }
      a[idx] = -1;
      b[idx] = -1;
      alice = !alice;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















