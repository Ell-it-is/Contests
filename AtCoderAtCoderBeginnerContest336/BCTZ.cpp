// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc336/tasks/abc336_b
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
    string s = std::bitset<32>(n).to_string();
    std::reverse(s.begin(), s.end());
    int i = 0;
    int cntz = 0;
    while (i < (int)s.size() && s[i++] == '0') {
      cntz++;
    }
    cout << cntz << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















