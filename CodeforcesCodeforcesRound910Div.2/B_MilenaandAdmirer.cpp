// time-limit: 1000
// problem-url: https://codeforces.com/contest/1898/problem/B
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
    ll cnt = 0;
    int last = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      if (a[i] > last) {
        double f = (double) a[i] / last;
        int num = (int) ceil(f) - 1;
        cnt += num;
        last = a[i] / (num + 1);
      } else {
        last = a[i];
      }
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   the bigger x you pick the smaller is (a[i] - x) and vice versa
   condition: always make sure x <= (a[i] - x)

   I had the right idea about splitting the number into parts of equal values
   I didn't see the formula however, although now it is not that difficult to understand why this is the formula
*/


















