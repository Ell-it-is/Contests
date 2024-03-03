// time-limit: 2000
// problem-url: https://codeforces.com/contest/1927/problem/B
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
    string ans = "";
    std::map<char, int> map;
    for (char c = 'a'; c <= 'z'; c++) {
      map[c] = -1;
    }
    for (int i = 0; i < n; i++) {
      int num = a[i];
      for (auto&& [c, cnt] : map) {
        if (cnt == num - 1) {
          ans += c;
          map[c]++;
          break;
        }
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   So you need to know WHICH letters were assigned and HOW MANY times

  0 0 0 1 0 2 0 3 1 1 4
  a b c a d a e a b c a
*/
















