// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc282/tasks/abc282_c
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
    string s;
    cin >> s;
    bool open = false;
    for (int i = 0; i < n; i++) {
      if (s[i] == '"') {
        open = !open;
      } else if (s[i] == ',') {
        if (!open) {
          s[i] = '.';
        }
      }
    }
    cout << s << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















