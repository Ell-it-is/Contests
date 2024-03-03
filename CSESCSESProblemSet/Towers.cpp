// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1073
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> b {a[0]};
    for (int i = 1; i < n; i++) {
      int cur = a[i];
      int idx = std::upper_bound(b.begin(), b.end(), cur) - b.begin();
      if (idx == (int) b.size()) {
        b.push_back(cur);
      } else {
        b[idx] = cur;
      }
      db(b);
    }
    cout << (int) b.size() << "\n";
  }
}
/* ================= Notes ================== //
  Is the idea based on Hanoi Towers?
  1) Place block on the smallest base you can find that is bigger than block - not ok
    (nwm my first impression was right, I made an error in implementation)
    The nature of the problem statement makes it that array 'b' is kept in non-decreasing order
  2) Try to build tower from the top (right -> left) - that also doesn't seem to do anything

  What multiple same blocks mean?
  - That there will be atleast this amount of towers as each block must belong to it's own tower
*/

/*
* vector<int> dp(n, 1);
    for (int i = 1; i < n; i++) {
      for (int j = i - 1; j >= 0; j--) {
        if (a[i] >= a[j]) {
          dp[i] = std::max(dp[i], dp[j] + 1);
        }
      }
    }
    int max = *std::max_element(dp.begin(), dp.end());
    cout << max << "\n";
 */


















