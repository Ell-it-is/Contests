// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1333/B
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
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    if (a[0] != b[0]) {
      cout << "NO" << "\n";
      continue;
    }
    bool yes = true;
    int l_one = INT_MAX;
    for (int i = n - 2; i >= 0; i--) {
      if (a[i] == 1) l_one = i;
    }
    int l_minus = INT_MAX;
    for (int i = n - 2; i >= 0; i--) {
      if (a[i] == -1) l_minus = i;
    }
    for (int i = n - 1; i >= 1; i--) {
      if (a[i] != b[i]) {
        if (a[i] > b[i]) {
          if (l_minus >= i) yes = false;
        }
        if (a[i] < b[i]) {
          if (l_one >= i) yes = false;
        }
      }
    }
    cout << (yes ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















