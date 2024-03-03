// time-limit: 2000
// problem-url: https://codeforces.com/contest/1352/problem/D
// Start: DATE
// End: DATE
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
    int alice = a[0];
    int bob = 0;
    int aprev = a[0];
    int bprev = 0;
    bool aturn = false;
    int cnt = 0;
    int i = 1, j = n - 1;
    while (i <= j) {
      if (aturn) {
        // alice turn
        while (aprev <= bprev && i <= j) {
          aprev += a[i++];
        }
        bprev = 0;
        alice += aprev;
      } else {
        // bob turn
        while (bprev <= aprev && i <= j) {
          bprev += a[j--];
        }
        aprev = 0;
        bob += bprev;
      }
      cnt++;
      aturn = !aturn;
    }
    cout << ++cnt << " " << alice << " " << bob << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















