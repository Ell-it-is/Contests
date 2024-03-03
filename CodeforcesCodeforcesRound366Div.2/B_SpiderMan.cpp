// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/705/B
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
    bool turn = false; // 1st players turn - true
    for (int x : a) {
      if (x % 2 == 0) {
        turn = !turn;
      }
      cout << (turn ? 1 : 2) << "\n";
    }
  }
}
/* ================= Notes ================== //
   // there are n configurations, answer for each of them who wins
   for number a[i] it takes a[i] - 1 steps to dissamble
   
*/


















