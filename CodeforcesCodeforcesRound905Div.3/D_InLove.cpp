// time-limit: 2000
// problem-url: https://codeforces.com/contest/1883/problem/D
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
  std::multiset<pair<int, int>> mset;
  int min_r = 0;
  int max_l = 0;
  for (int q = 0; q < tt; q++) {
    string op;
    cin >> op;
    int l, r;
    cin >> l >> r;
    if (op == "+") {
      mset.insert({l, r});
    } else {
      mset.erase(mset.find({l, r}));
    }
    if ((int) mset.size() <= 1) {
      cout << "NO" << "\n";
    } else {
      min_r = (*mset.begin()).second;
      max_l = (*mset.rbegin()).first;
      if (min_r < max_l) {
        cout << "YES" << "\n";
      } else {
        cout << "NO" << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   r[i] < l[i + 1], then Yes
   else No
*/


















