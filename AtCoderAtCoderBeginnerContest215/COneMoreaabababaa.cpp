// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc215/tasks/abc215_c
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
    string s;
    cin >> s;
    int k;
    cin >> k;
    int n = (int) s.size();
    auto fact = [&] (int n) {
      int ans = 1;
      for (int i = n; i >= 2; i--) {
        ans *= i;
      }
      return ans;
    };
    std::set<string> set {s};
    for (int i = 0; i < fact(n); i++) {
      std::next_permutation(s.begin(), s.end());
      set.insert(s);
    }
    int cnt = 1;
    for (string p : set) {
      if (cnt == k) {
        cout << p << "\n";
        return 0;
      }
      cnt++;
    }
  }
}
/* ================= Notes ================== //
   
*/


















