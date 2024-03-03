// time-limit: 1000
// problem-url: https://codeforces.com/contest/1877/problem/A
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
    for (int i = 0; i < n - 1; i++) {
      cin >> a[i];
    }
    int pos_sum = 0;
    int neg_sum = 0;
    for (int x : a) {
      if (x > 0) pos_sum += x;
      if (x <= 0) neg_sum += x;
    }
    cout << std::abs(neg_sum) - pos_sum << "\n";
  }
}
/* ================= Notes ================== //
   How many matches does a team play?
   In n - 2 matches

*/


















