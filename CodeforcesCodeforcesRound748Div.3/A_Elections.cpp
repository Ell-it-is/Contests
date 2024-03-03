// time-limit: 1000
// problem-url: https://codeforces.com/contest/1593/problem/A
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
    int a, b, c;
    cin >> a >> b >> c;
    int max = std::max({a, b, c});
    int need_a = std::max(b, c) - a + 1;
    int need_b = std::max(a, c) - b + 1;
    int need_c = std::max(a, b) - c + 1;
    if (a > b && a > c) {
      cout << 0 << " ";
    } else {
      cout << (a == max ? 1 : need_a) << " ";
    }
    if (b > a && b > c) {
      cout << 0 << " ";
    } else {
      cout << (b == max ? 1 : need_b) << " ";
    }
    if (c > a && c > b) {
      cout << 0 << " ";
    } else {
      cout << (c == max ? 1 : need_c) << " "; 
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















