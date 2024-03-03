// time-limit: 1000
// problem-url: https://codeforces.com/contest/1877/problem/B
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
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
      v[i] = {b[i], a[i]};
    }
    std::sort(v.begin(), v.end());
    int dont_know = n;
    int know = 0;
    ll cost = 0;
    for (int i = 0; i < n; i++) {
      if (dont_know == 0) break;
      if (know < i + 1) {
        cost += p;
        know++;
        dont_know--;
      }
      int will_tell = std::min(v[i].second, dont_know);
      dont_know -= will_tell;
      ll will_cost = 1ll * will_tell * v[i].first;
      cost += will_cost;
      know += will_tell;
      db(cost);
      db(know);
      db(dont_know);
    }
    // the cost of telling all for 'p'
    ll cost2 = 1ll * p * n;
    cout << std::min(cost, cost2) << "\n";
  }
}
/* ================= Notes ================== //
   *tell at first to everyone whose b[i] >= p, if that is all 'n' of them, that is the answer
   1) I should build efficiency table for each of 'n' participants
   2) Then going from the most efficient to least efficient announce the news until all 'n' ppl know it
   *if I want someone to announce further I have to tell him for 'p' first

   efficiency: b[i]
*/


















