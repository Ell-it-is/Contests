// time-limit: 1000
// problem-url: https://codeforces.com/contest/1729/problem/B
// Start: DATE
// End: DATE
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
    string t;
    cin >> t;
    string s = "";
    for (int i = n - 1; i >= 0; i--) {
       if (t[i] != '0') {
         int x = t[i] - '0';
         s += 'a' - 1 + x;
       } else {
         int x = stoi(t.substr(i - 2, 2));
         s += 'a' - 1 + x;
         i -= 2;
       }
    }
    reverse(s.begin(), s.end());
    cout << s << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















