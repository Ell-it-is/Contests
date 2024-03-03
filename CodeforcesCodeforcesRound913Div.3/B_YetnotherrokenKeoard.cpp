// time-limit: 1000
// problem-url: https://codeforces.com/contest/1907/problem/B
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
    string s;
    cin >> s;
    int n = (int) s.size();
    int small = 0;
    int big = 0;
    string ans = "";
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == 'b') small++;
      else if (s[i] == 'B') big++;
      else {
        if (islower(s[i])) {
          if (small > 0) {
            small--; 
          } else {
            ans += s[i];
          }
        } else {
          if (big > 0) {
            big--;
          } else {
            ans += s[i];
          }
        }
      }
    }
    std::reverse(ans.begin(), ans.end());
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















