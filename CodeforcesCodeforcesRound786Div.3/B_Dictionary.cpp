// time-limit: 2000
// problem-url: https://codeforces.com/contest/1674/problem/B
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
  map<string, int> map;
  int cnt = 0;
  for (int i = 1; i <= 26; i++) {
    for (int j = 1; j <= 26; j++) {
      if (i == j) continue;
      cnt++;
      char first = char(i + 'a' - 1);
      char second = char(j + 'a' - 1);
      string s {first};
      s += second;
      map[s] = cnt;
    }
  }
  int tt = 1;
  cin >> tt;
  while (tt--) {
    string s;
    cin >> s;
    cout << map[s] << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















