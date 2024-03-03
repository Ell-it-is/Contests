// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1747/C
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
    int min = *std::min_element(a.begin(), a.end());
    if (a.front() == min) {
      cout << "Bob" << "\n";
    } else {
      cout << "Alice" << "\n";
    }
  }
}
/* ================= Notes ================== //
   If the number in 2 <= i <= n is 0 or 1 at current choice -> the other person loses (regardless of 1st value)
   
*/


















