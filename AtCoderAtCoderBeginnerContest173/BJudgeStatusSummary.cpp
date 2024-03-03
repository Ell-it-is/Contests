// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc173/tasks/abc173_b
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
    std::map<string, int> map;
    map["AC"] = 0;
    map["WA"] = 0;
    map["TLE"] = 0;
    map["RE"] = 0;
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      map[s]++;
    }
    cout << "AC" << " x " << map["AC"] << "\n";
    cout << "WA" << " x " << map["WA"] << "\n";
    cout << "TLE" << " x " << map["TLE"] << "\n";
    cout << "RE" << " x " << map["RE"] << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















