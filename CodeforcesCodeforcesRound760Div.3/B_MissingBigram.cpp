// time-limit: 2000
// problem-url: https://codeforces.com/contest/1618/problem/B
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
    for (int i = 0; i < n - 2; i++) {
      string t;
      cin >> t;
      s += t;
    }
    string t = "";
    t += s[0];
    int i = 1;
    int size = s.length();
    while (i < size - 2) {
      if (s[i] == s[i + 1]) {
        t += s[i];
      } else {
        t += s[i];
        t += s[i + 1];
      }
      i += 2;
    }
    t += s[size - 1];
    int b_count = t.length() - 1;
    if (b_count < n - 1) {
      char last = t.back();
      t += (last == 'a' ? 'b' : 'a');
    }
    cout << t << "\n";
  }
}
/* ================= Notes ================== //
   bigrams_count = length of string - 1
*/


















