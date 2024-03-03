// time-limit: 1000
// problem-url: https://codeforces.com/contest/1891/problem/C
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
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    ll cnt = 0;
    ll i = 0;
    ll j = n - 1;
    ll x = 0;
    while (i < j) {
      ll need = a[j];
      if (x == need) {
        a[j] = 0;
        x = 0;
        cnt++;
        j--;
      } else {
        ll min = std::min(a[i], need - x);
        a[i] -= min;
        x += min;
        cnt += min;
        if (a[i] == 0) i++;
      }
    }
    for (int i = 0; i < n; i++) {
      if (a[i] == 1) {
        cnt++;
        x++;
        a[i] = 0;
        continue;
      }
    }
    std::sort(a.rbegin(), a.rend());
    for (int i = 0; i < n; i++) {
      if (a[i] == 0) break;
      if (x >= a[i]) {
        cnt++;
        x = 0;
      } else {
        int mid = (x + a[i] + 1) / 2;
        cnt += mid - x;
        x += mid - x;
        cnt++;
      }
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















