// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc208/tasks/abc208_b
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
    int p;
    cin >> p;
    map<int, int> map;
    int fact = 1;
    for (int i = 1; i <= 10; i++) {
      fact *= i;
      map[fact] = 100;
    }
    int cnt = 0;
    for (auto it = map.rbegin(); it != map.rend(); it++) {
      int key = it->first;
      int val = it->second;
      while (val > 0 && (p - key) >= 0) {
        p -= key;
        val--;
        cnt++;
      }
    }
    cout << cnt << '\n';
  }
}
/* ================= Notes ================== //
   
*/


















