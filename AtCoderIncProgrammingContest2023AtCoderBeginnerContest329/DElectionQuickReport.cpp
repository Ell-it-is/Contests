// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc329/tasks/abc329_d
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
  //cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    std::map<int, int> map;
    std::pair<int, int> prev;
    int person;
    cin >> person;
    prev = { person, 1};
    map[person] = 1;
    cout << person << "\n";
    for (int i = 1; i < m; i++) {
      cin >> person;
      map[person]++;
      if (map[person] >= prev.second) {
        int winner = person;
        if (map[person] == prev.second) {
          winner = person < prev.first ? person : prev.first;
        }
        cout << winner << "\n";
        prev = { winner, map[winner] };
      } else {
        cout << prev.first << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   sort by points
   quickly access the right key
*/


















