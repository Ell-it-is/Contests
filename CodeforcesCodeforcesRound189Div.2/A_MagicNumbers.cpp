// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/320/A
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
bool is_magical(string s, int n) {
  for (int i = 0; i < n; i++) {
    if (s[i] != '1' && s[i] != '4') return false;
  }
  if (s.front() != '1') return false;
  for (int i = 0; i < n - 2; i++) {
    if (s[i] == '4' && s[i + 1] == '4' && s[i + 2] == '4') return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    string s;
    cin >> s;
    int n = (int) s.size();
    bool magical = is_magical(s, n);
    cout << (!magical ? "NO" : "YES") << "\n";
  }
}
/* ================= Notes ================== //
   Magic number must begin with 1 and end with 4
   There is exactly single 1 in a magic number
   There can be at most 2 4's after 1 in a magic number
*/


















