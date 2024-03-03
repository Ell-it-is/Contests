// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1631
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
  //cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    std::sort(a.rbegin(), a.rend());
    ll sum = 0;
    for (int i = 1; i < n; i++) sum += a[i];
    ll max = *std::max_element(a.begin(), a.end());
    ll diff = sum - max;
    if (diff == 0) {
      cout << sum + max << "\n";
    } else if (diff < 0) {
      // person 1 is still reading the first book
      ll wait = max - sum;
      cout << sum + max + wait << "\n";
    } else {
      // diff > 0, person 1 finished reading the book before the person 2 read the rest of the books
      cout << sum + max << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















