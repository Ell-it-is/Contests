// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/841/B
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
    int odd_cnt = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x % 2) odd_cnt++;
    }
    if (odd_cnt > 0) {
      cout << "First" << "\n";
    } else {
      cout << "Second" << "\n";
    }
  }
}
/* ================= Notes ================== //
   A - must choose odd sum subarray
   B - must choose even sum subarray

   How to get odd sum of numbers?
   - odd # of odd's AND atleast one even number

   How to get even sum of numbers?
   - Even # of odd numbers
   - Atleast one even number
   - The combination of above 2 methods

   What is the optimal move?
   - The optimal move makes the opponent have no options

*/


















