// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc261/tasks/abc261_c
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
    int n;
    cin >> n;
    vector<string> v(n);
    std::map<string, int> map;
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      map[v[i]]++;
      if (map[v[i]] > 1) {
        cout << v[i] << "(" << map[v[i]] - 1 << ")" << "\n";
      } else {
        cout << v[i] << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   
*/


















