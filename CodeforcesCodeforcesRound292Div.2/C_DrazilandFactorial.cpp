// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/515/C
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
    string ans = "";
    for (char c : s) {
      if (c == '2' || c == '3' || c == '5' || c == '7') ans += c;
      if (c == '4') ans += "322";
      if (c == '6') ans += "53";
      if (c == '8') ans += "7222";
      if (c == '9') ans += "7332";
    }
    std::sort(ans.rbegin(), ans.rend());
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















