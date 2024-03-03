// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc338/tasks/abc338_b
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
    std::map<char, int> map;
    for (char c : s) {
      map[c]++;
    }
    int max_cnt = INT_MIN;
    for (auto&& [letter, cnt] : map) {
      if (cnt > max_cnt) {
        max_cnt = cnt;
      }
    }
    char winner = 'a';
    for (auto&& [letter, cnt] : map) {
      if (cnt == max_cnt) {
        winner = letter;
        break;
      }
    }
    cout << winner << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















