// time-limit: 1000
// problem-url: https://codeforces.com/contest/1917/problem/B
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
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  std::cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    std::string s;
    cin >> s;
    std::set<char> c;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      c.insert(s[i]);
      ans += (int) c.size();
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















