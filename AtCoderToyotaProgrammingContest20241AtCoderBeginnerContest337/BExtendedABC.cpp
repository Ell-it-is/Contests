// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc337/tasks/abc337_b
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
    string s;
    cin >> s;
    s.erase(unique(s.begin(), s.end()), s.end());
    if (s == "A" || s == "B" || s == "C" || s == "AB" || s == "AC" || s == "BC" || s == "ABC") {
      cout << "Yes" << "\n";
    } else {
      cout << "No" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















