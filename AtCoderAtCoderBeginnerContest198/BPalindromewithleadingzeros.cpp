// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc198/tasks/abc198_b
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
  for (int i = 0; i < s.size() / 2; i++) {
    if (s[i] != s[s.size() - i - 1]) return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int x;
    cin >> x;
    string s = to_string(x);
    int n = (int) s.size();
    if (is_pali(s)) {
      cout << "Yes" << "\n";
    } else {
      int cnt_back = 0;
      for (int i = n - 1; i >= 0; i--) {
        if (s[i] != '0') break;
        cnt_back++;
      }
      int cnt_front = 0;
      for (int i = 0; i < n; i++) {
        if (s[i] != '0') break;
        cnt_front++;
      }
      if (cnt_back - cnt_front > 0) {
        int prep = cnt_back - cnt_front;
        string z = string(prep, '0');
        s = z + s;
        db(s);
        if (is_pali(s)) {
          cout << "Yes" << "\n";
        } else {
          cout << "No" << "\n";
        }
      } else {
        cout << "No" << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   
*/


















