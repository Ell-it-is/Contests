// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc228/tasks/abc228_c
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
    int n, k;
    cin >> n >> k;
    // ranked top k students
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      int sum = 0;
      for (int j = 0; j < 3; j++) {
        int score;
        cin >> score;
        sum += score;
      }
      v[i] = sum;
    }
    vector<int> w(v);
    std::sort(w.rbegin(), w.rend());
    for (int i = 0; i < n; i++) {
      int score = v[i];
      score += 300;
      int idx = std::lower_bound(w.begin(), w.end(), score, std::greater<int>()) - w.begin();
      cout << (idx < k ? "Yes" : "No") << "\n";
    }
  }
}
/* ================= Notes ================== //
   best case scenario: if i-th student gets 300 points, while others get 0
*/


















