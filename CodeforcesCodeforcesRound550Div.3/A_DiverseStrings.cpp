// time-limit: 1000
// problem-url: https://codeforces.com/contest/1144/problem/A
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
  int n = 1;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    int m = (int) s.size();
    std::sort(s.begin(), s.end());
    bool ans = true;
    for (int i = 1; i < m; i++) {
      int prev = int(s[i - 1] - 'a') + 1; 
      int cur = int(s[i] - 'a') + 1;
      if (abs(prev - cur) > 1) {
        ans = false;
        break;
      } 
    }
    std::map<int, int> map;
    for (int i = 0; i < m; i++) map[s[i]]++;
    for (auto&& [c, cnt] : map) {
      if (cnt > 1) {
        ans = false;
        break;
      }
    }
    cout << (ans ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















