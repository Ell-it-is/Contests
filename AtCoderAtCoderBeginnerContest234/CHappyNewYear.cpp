// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc234/tasks/abc234_c
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
    ll k;
    cin >> k;
    int n = (int)(log2l(k)); // how many bits the number k "occupy"
    string s = bitset<64>(k).to_string().substr(64 - n - 1);
    for (int i = 0; i < (int) s.size(); i++) {
      if (s[i] == '1') s[i] = '2';
    }
    cout << s << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















