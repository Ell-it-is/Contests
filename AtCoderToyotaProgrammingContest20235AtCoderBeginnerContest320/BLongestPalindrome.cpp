// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc320/tasks/abc320_b
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
bool is_pali(string s) {
  int n = (int) s.size();
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - 1 - i]) return false;    
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    string s;
    cin >> s;
    int n = (int) s.size();
    int l = 1;
    int max = numeric_limits<int>::min(); // max length
    while (l <= n) {
      for (int i = 0; i < n - l; i++) {
        string sub = s.substr(i, l);
        if (is_pali(sub)) {
          max = std::max(max, l);
        }
      }
      l++;
    }
    if (is_pali(s)) {
      max = n;
    }
    cout << max << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















