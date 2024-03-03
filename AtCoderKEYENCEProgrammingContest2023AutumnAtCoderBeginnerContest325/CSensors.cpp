// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc325/tasks/abc325_c
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
bool is_near(int x1, int y1, int x2, int y2) {
  return std::max(abs(x1 - x2), abs(y1 - y2)) == 1;
}
void find_sensors(int t, vector<pair<pair<int, int>, bool>> &v) {
  int n = (int) v.size();
  v[t].second = true;
  for (int i = 0; i < n; i++) {
    if (v[i].second) continue;
    if (is_near(v[t].first.first, v[t].first.second, v[i].first.first, v[i].first.second)) {
      find_sensors(i, v);
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int h, w;
    cin >> h >> w;
    vector<string> g(h);
    for (int i = 0; i < h; i++) {
      cin >> g[i];
    }
    vector<pair<pair<int, int>, bool>> v;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (g[i][j] == '#') v.push_back({{i + 1, j + 1}, false});
      }
    }
    int n = (int) v.size();
    bool done = false;
    int cnt = 0;
    do {
      bool all = true;
      for (int i = 0; i < n; i++) {
        if (!v[i].second) all = false; 
      }
      if (all) done = true;
      else {
        int t;
        for (int i = 0; i < n; i++) {
          if (!v[i].second) {
            t = i;
            break;
          }
        }
        find_sensors(t, v);
        cnt++;
      }
    } while (!done);
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















