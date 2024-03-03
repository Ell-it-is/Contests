// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/467/B
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
  //cin >> tt;
  while (tt--) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> p(m);
    for (int i = 0; i < m; i++) {
      cin >> p[i];
    }
    int f; // Fedor 
    cin >> f;
    // for Fedor and another player to be friends, they can differ at at most k bits
    // Each player has number consisting of n bits
    bitset<20> fb(f);
    int friends = 0;
    for (int i = 0; i < m; i++) {
      bitset<20> pb(p[i]);
      int diff_cnt = 0;
      for (int i = 0; i < pb.size(); i++) {
        if (pb[i] != fb[i]) {
          diff_cnt++;
        }
      }
      if (diff_cnt <= k) friends++;
    }
    cout << friends << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















