// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc323/tasks/abc323_c
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
    int n, m;
    cin >> n >> m;
    vector<int> scores(m);
    for (int i = 0; i < m; i++) {
      cin >> scores[i];
    }
    vector<string> solved(n);
    for (int i = 0; i < n; i++) {
      cin >> solved[i]; 
    }
    vector<int> cur_score(n);
    int winner_score = 0;
    for (int i = 0; i < n; i++) {
      string s = solved[i];
      int sum = 0;
      for (int j = 0; j < m; j++) {
        if (s[j] == 'o') {
          sum += scores[j];
        }
      }
      sum += i + 1;
      cur_score[i] = sum;
      winner_score = std::max(winner_score, sum);
    }
    int winner_cnt = 0;
    for (int i = 0; i < n; i++) {
      if (cur_score[i] == winner_score) winner_cnt++; 
    }
    std::sort(scores.rbegin(), scores.rend());
    for (int i = 0; i < n; i++) {
      if (winner_cnt == 1 && cur_score[i] == winner_score) {
        cout << 0 << "\n";
      } else {
        int r = winner_score - cur_score[i] + 1;
        int sum = 0;
        int cnt = 0;
        int j = 0;
        while (j < m && sum < r) {
          if (solved[i][j] != 'o') {
            sum += scores[j];
            cnt++;
          }
          j++;
        }
        cout << cnt << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   bonus score = the participant number
   participant score = sum of the solved problems scores + bonus score
*/


















