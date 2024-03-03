// time-limit: 2000
// problem-url: https://codeforces.com/contest/1914/problem/F
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
    vector<int> boss(n);
    for (int i = 0; i < n; i++) {
      if (i == 0) {
        boss[0] = 0;
      } else {
        cin >> boss[i];
        boss[i]--;
      }
    }
    vector<int> hloubka(n); // pocet lidi v hloubce 'h'
    vector<int> memo(n);
    for (int i = 1; i < n; i++) {
      int b = boss[i];
      int h = 1;
      while (!memo[b] && b != 0) {
        b = boss[b];
        h++;
      }
      h += memo[b];
      memo[i] = h;
      hloubka[h]++;
    }
    db(memo);
    int s = 0;
    int teams = 0;
    for (int i = n - 1; i >= 0; i--) {
      int empl_cnt = hloubka[i];
      int remove = std::max(std::min(s, empl_cnt - 1), 0);
      s -= remove;
      int candidates = empl_cnt + remove;
      if (candidates % 2) {
        s++;
      }
      teams += candidates / 2;
    }
    cout << teams << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















