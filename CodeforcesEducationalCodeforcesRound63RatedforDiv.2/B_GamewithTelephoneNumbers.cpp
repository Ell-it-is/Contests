// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1155/B
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
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '8') cnt++;
    }
    int moves = (n - 11) / 2;
    int a = moves;
    int b = moves;
    string res = "";
    for (int i = 0; i < n; i++) {
      if (s[i] == '8') {
        if (a > 0) a--;
        else res += s[i];
      } else {
        if (b > 0) b--;
        else res += s[i];
      }
    }
    cout << (res.front() == '8' ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   when |s| = 11, game ends
   If s is phone number, 1st person wins
   if s is NOT a phone number, 2nd person wins

   Q: Can 1st person somehow win?
*/


















