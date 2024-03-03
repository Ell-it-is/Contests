// time-limit: 1000
// problem-url: https://codeforces.com/contest/1729/problem/C
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
    string s;
    cin >> s;
    int n = (int) s.size();
    map<char, vector<int>> let_to_ind;
    for (int i = 0; i < n; i++) {
      let_to_ind[s[i]].push_back(i);
    }
    int direction = (s[0] < s[n - 1]) ? 1 : -1;
    vector<int> ans;
    for (char c = s[0]; c != s[n - 1] + direction; c += direction) {
      for (auto now : let_to_ind[c]) {
        ans.push_back(now);
      }
    }
    int cost = 0;
    for (int i = 1; i < ans.size(); i++) {
      cost += abs(s[ans[i]] - s[ans[i - 1]]);
    }
    cout << cost << " " << ans.size() << "\n";
    for (auto now : ans) {
      cout << now + 1 << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   think of the minimal total cost to jump to the last tile from the first tile
   then among this list pick the one with max number of jumps

   jumping both back and forth is allowed
   jumping on the same tile 2x is not allowed

   jumping: 1...n
   I must keep the record of the jumps

   I can never jump to any char that would make me go backwards, I can also never jump on any char >= to the last tile char
   So I should always jump to the first >= to my current char in alphabetical order (not in the order the word is in!)
*/


















