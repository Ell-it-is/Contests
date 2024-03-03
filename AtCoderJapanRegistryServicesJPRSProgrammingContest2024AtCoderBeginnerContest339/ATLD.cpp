// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc339/tasks/abc339_a
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
    int size = (int) s.size();
    string ans = "";
    for (int i = size - 1; i >= 0; i--) {
      if (s[i] == '.') break; 
      ans += s[i];
    }
    std::reverse(ans.begin(), ans.end());
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















