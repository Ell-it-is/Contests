// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/755/B
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
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<string> b(m);
    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    set<string> known;
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
      string s = a[i];
      if (!std::binary_search(b.begin(), b.end(), s)) {
        cnt1++;
      } else {
        known.insert(s);
      }
    }
    int cnt2 = 0;
    for (int i = 0; i < m; i++) {
      string s = b[i];
      if (!std::binary_search(a.begin(), a.end(), s)) {
        cnt2++;
      } else {
        known.insert(s);
      }
    }
    if (known.size() % 2) cnt1++;
    cout << (cnt1 > cnt2 ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   cnt1 > cnt2 -> first wins
   cnt1 == cnt2 -> second wins
   cnt1 < cnt2 -> second wins
*/


















