// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc328/tasks/abc328_d
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
    int n = (int) s.size();
    std::stack<char> ans;
    for (int i = 0; i < n; i++) {
      ans.push(s[i]);
      if (ans.size() < 3) continue;
      char a, b, c;
      c = ans.top();
      ans.pop();
      b = ans.top();
      ans.pop();
      a = ans.top();
      ans.pop();
      if (a == 'A' && b == 'B' && c == 'C') continue;
      else {
        ans.push(a);
        ans.push(b);
        ans.push(c);
      }
    }
    string res = "";
    while (!ans.empty()) {
      res += ans.top();
      ans.pop();
    }
    std::reverse(res.begin(), res.end());
    cout << res << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















