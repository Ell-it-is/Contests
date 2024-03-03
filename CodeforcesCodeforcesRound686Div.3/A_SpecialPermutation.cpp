// time-limit: 1000
// problem-url: https://codeforces.com/contest/1454/problem/A
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
    vector<int> ans(n);
    std::iota(ans.begin(), ans.end(), 1);
    std::rotate(ans.begin(), ans.begin() + 1, ans.end());
    for (int num : ans) {
      cout << num << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















