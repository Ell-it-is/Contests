// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc237/tasks/abc237_c
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
    if (s[i] != s[n - i - 1]) return false;
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
    if (n == 1) {
      cout << "Yes" << "\n";
      break;
    }
    int cnt_end = 0;
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] != 'a') break;
      cnt_end++;
    }
    int cnt_begin = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] != 'a') break;
      cnt_begin++;
    }
    if (cnt_begin == n) {
      cout << "Yes" << "\n";
      break;
    }
    if (cnt_begin > cnt_end) {
      cout << "No" << "\n";
      break;
    }
    s = s.substr(0, n - cnt_end);
    s = s.substr(cnt_begin);
    bool ans = is_pali(s);
    cout << (ans ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















