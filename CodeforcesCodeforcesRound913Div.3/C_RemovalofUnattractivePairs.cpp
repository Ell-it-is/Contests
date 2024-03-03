// time-limit: 1000
// problem-url: https://codeforces.com/contest/1907/problem/C
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
    std::map<char, int> map;
    for (int i = 0; i < n; i++) {
      map[s[i]]++;
    }
    int max = 0;
    for (auto&& [c, cnt] : map) {
      max = std::max(max, cnt);
    }
    cout << std::max(max - (n - max), n % 2) << "\n";
  }
}
/* ================= Notes ================== //
   Remove any number of times s[i] and s[i + 1] where s[i] != s[i + 1]
   Minimize length of the string -> perform this operation as many times as possible

*/
















