// time-limit: 2000
// problem-url: https://codeforces.com/contest/1921/problem/B
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
    string s, f;
    cin >> s >> f;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
      a[i] = s[i] - '0';
      b[i] = f[i] - '0';
    }
    int can_move = 0;
    int needs_move = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] == 1 && b[i] == 0) can_move++;
      if (a[i] == 0 && b[i] == 1) needs_move++;
    }
    int cnt = 0;
    if (can_move == needs_move) {
      cnt = can_move;
    } else if (can_move > needs_move) {
      cnt = needs_move + (can_move - needs_move);
    } else {
      // can_move < needs_move
      cnt = can_move + (needs_move - can_move);
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















