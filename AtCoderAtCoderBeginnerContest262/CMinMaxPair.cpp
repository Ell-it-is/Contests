// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc262/tasks/abc262_c
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
    int same = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      a[i]--;
      if (a[i] == i) same++;
    }
    int ans = same * (same - 1) / 2;
    for (int i = 0; i < n; i++) {
      if (a[i] > i && a[a[i]] == i) ans++;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   a[i] == i && a[j] == j
   OR
   a[i] == j && a[j] == i
*/


















