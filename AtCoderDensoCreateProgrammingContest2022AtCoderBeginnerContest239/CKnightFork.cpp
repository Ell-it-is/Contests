// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc239/tasks/abc239_c
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
void add_points(int x, int y, std::set<pair<int, int>> &p) {
  p.insert({x + 2, y + 1});
  p.insert({x + 2, y - 1});
  p.insert({x - 2, y + 1});
  p.insert({x - 2, y - 1});
  p.insert({x + 1, y + 2});
  p.insert({x - 1, y + 2});
  p.insert({x + 1, y - 2});
  p.insert({x - 1, y - 2});
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    std::set<pair<int, int>> p1;
    std::set<pair<int, int>> p2;
    add_points(a, b, p1);
    add_points(c, d, p2);
    bool ans = false;
    for (auto x : p1) {
      if (p2.count(x)) ans = true;
    }
    cout << (ans ? "Yes" : "No") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















