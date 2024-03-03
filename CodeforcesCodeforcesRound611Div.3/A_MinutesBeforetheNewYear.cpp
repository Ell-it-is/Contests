// time-limit: 1000
// problem-url: https://codeforces.com/contest/1283/problem/A
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
    int h, m;
    cin >> h >> m;
    int hours = 23 - h;
    int minutes = (hours * 60) + (59 - m) + 1;
    cout << minutes << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















