// time-limit: 1000
// problem-url: https://codeforces.com/contest/1915/problem/B
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
    string a, b, c;
    cin >> a >> b >> c;
    std::map<char, int> map;
    for (char ch : a) map[ch]++;
    for (char ch : b) map[ch]++;
    for (char ch : c) map[ch]++;
    char ans = 'A';
    for (auto&& [ch, cnt] : map) {
      if (cnt < 3 && ch != '?') {
        ans = ch;
        break;
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















