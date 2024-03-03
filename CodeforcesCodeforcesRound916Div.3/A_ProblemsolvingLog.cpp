// time-limit: 2000
// problem-url: https://codeforces.com/contest/1914/problem/A
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
    string s;
    cin >> s;
    std::map<char, int> map;
    for (char c : s) {
      map[c]++;
    }
    int ans = 0;
    for (auto&& [c, t] : map) {
      int cnt = c - 'A' + 1;
      if (t >= cnt) ans++;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















