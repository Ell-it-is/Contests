// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc221/tasks/abc221_c
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
    int num;
    cin >> num;
    string s = to_string(num);
    std::sort(s.begin(), s.end());
    int n = s.size();
    int max = INT_MIN;
    do {
      string left, right;
      int a, b;
      for (int i = 1; i < n; i++) {
        left = s.substr(0, i);
        right = s.substr(i);
        a = stoi(left);
        b = stoi(right);
        max = std::max(max, a * b);
      }
    } while (std::next_permutation(s.begin(), s.end()));
    cout << max << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















