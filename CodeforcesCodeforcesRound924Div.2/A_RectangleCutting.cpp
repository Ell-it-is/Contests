// time-limit: 1000
// problem-url: https://codeforces.com/contest/1928/problem/0
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
    ll a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    bool ans = false;
    if (a == 1 && b == 1) {
      ans = false;
    }
    if (a == 1 && b == 2) {
      ans = false;
    }
    if (ans == false && a % 2 == 0) {
      ans = a / 2 != b;
    }
    if (ans == false && b % 2 == 0) {
      ans = b / 2 != a;
    }
    cout << (ans ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















