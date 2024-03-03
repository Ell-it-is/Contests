// time-limit: 2000
// problem-url: https://codeforces.com/contest/1324/problem/A
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int min = *std::min_element(a.begin(), a.end());
    bool all_set = min != 0;
    if (all_set) {
      for (int i = 0; i < n; i++) {
        a[i] -= min;
      } 
    }
    bool all_even = true;
    for (int i = 0; i < n; i++) {
      if (a[i] != 0 && a[i] % 2 == 1) all_even = false;
    }
    cout << (all_even ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   If there exists atleast one uncleared block
    I can choose some idx and increase the size by 2 blocks
    Then while ALL non-zero columns are decreased by one block
     (so I cannot place another 1x2 block until this process ends)

   When can I clear the tetris field?
   If all columns are equal

   You want to leave one column empty
   Then fix all other columns to equal heights (of even tallness)
   Then fix this empty column
*/
















