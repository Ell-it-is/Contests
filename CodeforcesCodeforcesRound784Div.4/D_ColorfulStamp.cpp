// time-limit: 1000
// problem-url: https://codeforces.com/contest/1669/problem/D
// Start: Created on Saturday, September 16, 2023 at 5:31:57 PM
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
vector<string> split(const string& str, const string& delim) {
  vector<string> result;
  size_t start = 0;
  for (size_t found = str.find(delim); found != string::npos; found = str.find(delim, start)) {
    if (start != found) {
      result.emplace_back(str.begin() + start, str.begin() + found);
    }
    start = found + delim.size();
  }
  if (start != str.size()) {
    result.emplace_back(str.begin() + start, str.end());
  }
  return result;
}

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
    bool all_same = true;
    for (int i = 0; i < n; i++) {
      if (s[i] != s[0]) all_same = false;
    }
    if (all_same && s[0] != 'W') {
      cout << "NO" << '\n';
      continue;
    }
    if (n == 2) {
      if (s[0] == 'W' && (s[1] == 'R' || s[1] == 'B')) {
        cout << "NO" << '\n';
        continue;
      }
      if (s[1] == 'W' && (s[0] == 'R' || s[0] == 'B')) {
        cout << "NO" << '\n';
        continue;
      }
    }
    vector<string> subs = split(s, "W");
    db(subs);
    bool yes = true;
    for (int i = 0; i < (int) subs.size(); i++) {
      string t = subs[i];
      t.erase(unique(t.begin(), t.end()), t.end());
      if ((int) t.size() == 1) {
        yes = false;
        break;
      }
    }
    cout << (yes ? "YES" : "NO") << '\n';
  }
}
/* ================= Notes ================== //
   It is impossible to create some subsequence of only reds or only blues
   It is possible to "create" - leave as is some subsequence of only whites

   Subsequence of X's is WWWXXXXWWWW, X's cannot contain the same character of either R or B
   
*/














