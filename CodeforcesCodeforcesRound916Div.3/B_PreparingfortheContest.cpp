// time-limit: 1000
// problem-url: https://codeforces.com/contest/1914/problem/B
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
    int incr = k;
    vector<int> v(incr);
    for (int i = 0; i < incr; i++) {
      v[i] = i + 1;
    }
    for (int i = n; i > incr; i--) {
      v.push_back(i);
    }
    for (int num : v) {
      cout << num << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















