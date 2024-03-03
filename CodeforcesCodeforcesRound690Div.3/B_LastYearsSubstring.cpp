// time-limit: 2000
// problem-url: https://codeforces.com/contest/1462/problem/B
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
    if (s == "2020") {
      cout << "YES" << "\n";
      continue;
    }
    // I have one operation to make it "2020"
    bool ans = false;
    if (n > 4) {
      string templ = "2020";
      string cur = "";
      int i = 0;
      while (i < (int) templ.size() && s[i] == templ[i]) {
        cur += s[i++];
      }
      if (cur != templ) {
        int r = (int) templ.size() - (int) cur.size();
        cur += s.substr(n - r);
      }
      ans = cur == templ;
    }
    cout << (ans ? "YES" : "NO") << "\n"; 
  }
}
/* ================= Notes ================== //
   "" - 2020
   2 - 020
   20 - 20
   202 - 0
   2020 - ""
*/


















