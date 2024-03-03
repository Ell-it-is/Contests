// time-limit: 2000
// problem-url: https://codeforces.com/contest/1883/problem/B
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    std::map<char, int> map;
    for (char c : s) {
      map[c]++;
    }
    int count = 0;
    for (auto&& [c, cnt] : map) {
      if (cnt % 2 == 1) count++; 
    }
    if (count == 0) {
      cout << "YES" << "\n";
    } else {
      count--; // one odd is fine
      if (count > k) {
        cout << "NO" << "\n";
        continue;
      }
      cout << "YES" << "\n";
    }
  }
}
/* ================= Notes ================== //
   Condition: There can be at most 1 character of odd occurence
*/


















