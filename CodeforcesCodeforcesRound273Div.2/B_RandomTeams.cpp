// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/478/B
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
    ll n, m;
    cin >> n >> m;
    ll min = 0;
    ll max = 0;
    if (n % m == 0) {
      ll per_team = n / m;
      min = m * (per_team * (per_team - 1) / 2);
    } else {
      ll per_team = n / m;
      ll r = n % m;
      if (r >= m) {
        per_team += r / m;
        min = m * (per_team * (per_team - 1) / 2);
        //r -= m * r / m;
        r = r % m;
        if (r > 0) {
          min -= per_team * (per_team - 1) / 2;
          per_team += r;
          min += per_team * (per_team - 1) / 2;
        }
      } else {
        min = (m - r) * (per_team * (per_team - 1) / 2);
        per_team++;
        min += r * (per_team * (per_team - 1) / 2);
      }
    }
    n -= m - 1;
    max = n * (n - 1) / 2;
    cout << min << " " << max << "\n";
  }
}
/* ================= Notes ================== //
   n / m = # of participants per team

   To get min # of pairs...
   if it evenly divides:
   ans = m * (n / m * (n / m - 1) / 2)
   if not:
   put the remaning ppl evenly into the other teams

   To get max # of pairs...
   You create one team that is as big as possible by making m - 1 teams of size 1
*/


















