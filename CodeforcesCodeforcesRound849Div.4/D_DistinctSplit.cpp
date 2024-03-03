// time-limit: 2000
// problem-url: https://codeforces.com/contest/1791/problem/D
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
    map<char, bool> map;
    vector<int> psum(n);
    psum[0] = 1;
    map[s[0]] = true;
    for (int i = 1; i < n; i++) {
      bool exists = map[s[i]];
      psum[i] = psum[i - 1] + (exists ? 0 : 1);
      map[s[i]] = true;
    }
    map.clear();
    vector<int> ssum(n);
    ssum[n - 1] = 1;
    map[s[n - 1]] = true;
    for (int i = n - 2; i >= 0; i--) {
      bool exists = map[s[i]];
      ssum[i] = ssum[i + 1] + (exists ? 0 : 1);
      map[s[i]] = true;
    }
    int max = numeric_limits<int>::min();
    for (int i = 0; i < n - 1; i++) {
      max = std::max(max, psum[i] + ssum[i + 1]);
    }
    cout << max << '\n';
  }
}
/* ================= Notes ================== //
   You can at best increase value of some characters whose count is >= 2 by exactly 1
   I can create prefix sum of count of unique characters L -> R
    - Check on each new character, whether I already saw it or not using map<char, bool> (quicker than set)
   I can likewise check with suffix sum for R -> L
   Then I can move through each idx and find max for each: pfixsum[i] + suffsum[i + 1]
*/


















