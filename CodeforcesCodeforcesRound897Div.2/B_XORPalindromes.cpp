// time-limit: 1000
// problem-url: https://codeforces.com/contest/1867/problem/B
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution ================= //


int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> r(n + 1, '0');
    vector<char> bt(n, '0');
    // build t
    int cnt = 0;
    for (int i = 0; i < n / 2; i++) {
      if (s[i] == s[n - 1 - i]) {
        bt[i] = '1';
        bt[n - 1 - i] = '1';
        cnt += 2;
      } else {
        bt[i] = '1';
        bt[n - 1 - i] = '0';
        cnt++;
      }
    }
    r[cnt] = '1';
    r[n - cnt] = '1';
    for (int i = 0; i < n / 2; i++) {
      if (bt[i] == bt[n - 1 - i]) {
        cnt -= 2;
        r[cnt] = '1';
        r[n - cnt] = '1';
      }
    }
    std::string ans(r.begin(), r.end());
    cout << ans << '\n';
  }
}
/* ================= Notes ====================
   so indicies of string t refer to value x (ie. to the number of 1's in a string of my choice, must have same length as s)
   string t pretty much just represents whether some x is good or bad
   I have to check for each possible x, that is 0...n and decide whether there exists a string that could form palindrome with s by using XOR
   
   So what can I do to make the s palindrome?
   Using XOR I can change both 1's and 0's

   Input evaluation:
   string s either is palindrome
   then I can change only those where s[i] == l[i]
   
   or is not palindrome
   you can make it a pali by checking whether s[i] == s[n - 1 - i] and acting approprietly
   Can I get more ones?
   Yes for s[i] == l[i], I can choose 2 same values (if they differ the number of x's must stay the same)
*/



















