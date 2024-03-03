// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1373/B
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
    int ones = 0;
    int zeros = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '0') zeros++;
      if (s[i] == '1') ones++;
    }
    int min = std::min(zeros, ones);
    cout << (min % 2 ? "DA" : "NET") << "\n";
  }
}
/* ================= Notes ================== //
   min(0's, 1's):
   even -> Alice loses
   odd -> Alice wins
*/


















