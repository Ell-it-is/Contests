// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc328/tasks/abc328_b
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
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
      cin >> d[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      int month = i + 1;
      string m = to_string(month);
      std::set<char> set0;
      for (char c : m) {
        set0.insert(c);
      }
      for (int day = 1; day <= d[i]; day++) {
        string s = to_string(day);
        std::set<char> set;
        for (char c : s) {
          set.insert(c);
        }
        if (set0.size() == 1 && set0 == set) {
          cnt++;
        }
      }
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















