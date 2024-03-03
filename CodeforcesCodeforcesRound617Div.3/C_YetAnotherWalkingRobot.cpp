// time-limit: 1000
// problem-url: https://codeforces.com/contest/1296/problem/C
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
    string path;
    cin >> path;
    
  }
}
/* ================= Notes ================== //
   You must remove the smallest substring that does not change the original endpoint

   It turns out to be optimal to degenerate all options into a question of "find the shortest cycle",
   (that is a path that moves to previously visited cell)

   The reason there could be multiple cycles is because there can be a path that moves multiple times through starting point
*/
















