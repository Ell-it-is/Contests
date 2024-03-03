// time-limit: 2000
// problem-url: https://codeforces.com/contest/1878/problem/B
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
    cin >> n; // atleast 3
    // construct strictly increasing array of size n
    vector<ll> a(n);
    a[0] = 1;
    for (int i = 1; i < n; i++) {
      a[i] = a[i - 1] + 2;
    }
    for (int x : a) {
      cout << x << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















