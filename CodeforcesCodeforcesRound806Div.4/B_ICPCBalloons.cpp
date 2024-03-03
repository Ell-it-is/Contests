// time-limit: 1000
// problem-url: https://codeforces.com/contest/1703/problem/B
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
    string s;
    cin >> s;
    map<char, int> map;
    for (int i = 0; i < n; i++) {
      map[s[i]]++;
    }
    int total = 0;
    for (auto&& [key, val] : map) {
      total += 2 + (val - 1);
    }
    cout << total << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















