// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1455/C
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
    int x, y;
    cin >> x >> y;
    cout << x - 1 << " " << y << "\n";
  }
}
/* ================= Notes ================== //
   I have both players stamina
   Stamina decreases by 1 on serve and return
   The goal for both of them is to win as many games as they can
   You win a game when opponent does not return the ball

   Alice starts with 1st serve
   To win a game you want to always return the ball

   What if the person who should serve has 0 stamina but the other has 'k' stamina?
   In that case the person who has 0 stamina won't serve and the other person serves.
   The other person will serve 'k' times and win 'k' points.

   The best option for B is to return ball when A has 0 stamina
*/


















