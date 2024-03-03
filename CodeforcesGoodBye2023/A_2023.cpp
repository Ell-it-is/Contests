// time-limit: 1000
// problem-url: https://codeforces.com/contest/1916/problem/A
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
    int n, k;
    cin >> n >> k;
    ll product = 1;
    for (int i = 0; i < n; i++) {
      int num;
      cin >> num;
      product *= num;
    }
    bool ans = false;
    vector<ll> a;
    for (ll i = 1; i <= 2023; i++) {
      if (product * i == 2023) {
        a.push_back(i);
        for (int j = 0; j < k - 1; j++) a.push_back(1);
        ans = true;
        break;
      }
    }
    if (ans) {
      cout << "YES" << "\n";
      for (ll num : a) {
        cout << num << " ";
      }
      cout << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















