// time-limit: 1000
// problem-url: https://codeforces.com/contest/1878/problem/A
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    bool exists = false;
    for (int x : a) {
      if (x == k) exists = true;
    }
    cout << (exists ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   if the element is not in an array -> NO
   
*/


















