// time-limit: 2000
// problem-url: https://codeforces.com/contest/1462/problem/C
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
    int x;
    cin >> x;
    int digit = 9;
    int sum = 0;
    string ans = "";
    while (digit > 0) {
      while (digit > 0 && sum + digit <= x) {
        sum += digit;
        ans += to_string(digit);
        digit--;
      }
      digit--;
    }
    if (sum != x) {
      cout << -1 << "\n";
    } else {
      std::reverse(ans.begin(), ans.end());
      cout << ans << "\n";
    }
  }
}
/* ================= Notes ================== //
   you need 'n' digits whose sum is exactly 'x'
   d[1] + d[2] + ... d[n] = x; where d[i] != d[j] for any (i, j)
   and d[1]d[2]...d[n] form some number that must be minimized

   biggest value I can get is 45
   since I can use at most 9 digits
   
*/


















