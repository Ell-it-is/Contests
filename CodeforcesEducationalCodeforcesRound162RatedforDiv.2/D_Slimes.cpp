// time-limit: 2000
// problem-url: https://codeforces.com/contest/1923/problem/D
// ================= Header ================= //
#include <bits/stdc++.h>
typedef long long ll;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution =============== //


int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  std::cin >> tt;
  while (tt--) {
    int n;
    std::cin >> n;
    std::vector<ll> a(n);
    for (int i = 0; i < n; i++) std::cin >> a[i];
    ll const MAX = 1e18;
    std::vector<ll> ans(n, MAX);
    auto eat_to_start = [&](int idx) {
      int i = idx - 1;
      int j = idx + 1;
      ll cur_size = a[idx];
      ll moves = 0;
      while (true) {
        bool eat = false;
        while (i >= 0 && cur_size > a[i]) {
          eat = true;
          cur_size += a[i];
          moves++;
          ans[i] = std::min(ans[i], moves);
          i--;
        }
        while (i >= 0 && cur_size <= a[i] && j < n && cur_size > a[j]) {
          eat = true;
          cur_size += a[j];
          moves++;
          j++;
        }
        if (!eat) break;
      }
    };
    auto eat_to_end = [&](int idx) {
      int i = idx - 1;
      int j = idx + 1;
      ll cur_size = a[idx];
      ll moves = 0;
      while (true) {
        bool eat = false;
        while (j < n && cur_size > a[j]) {
          eat = true;
          cur_size += a[j];
          moves++;
          ans[j] = std::min(ans[j], moves);
          j++;
        }
        while (j < n && cur_size <= a[j] && i >= 0 && cur_size > a[i]) {
          eat = true;
          cur_size += a[i];
          moves++;
          i--;
        }
        if (!eat) break;
      }
    };
    for (int i = 1; i < n - 1; i++) {
      eat_to_start(i);
      eat_to_end(i);
    }
    // take care of the first and last slime separately as they can only eat in one direction
    ll cur_size = a[0];
    ll moves = 0;
    for (int i = 1; i < n; i++) {
      if (cur_size <= a[i]) break;
      cur_size += a[i];
      moves++;
      ans[i] = std::min(ans[i], moves);
    }

    cur_size = a.back();
    moves = 0;
    for (int i = n - 2; i >= 0; i--) {
      if (cur_size <= a[i]) break;
      cur_size += a[i];
      moves++;
      ans[i] = std::min(ans[i], moves);
    }
    
    for (int i = 0; i < n; i++) {
      if (ans[i] == MAX) ans[i] = -1;
      std::cout << ans[i] << " ";
    }
    std::cout << "\n";
  }
}
/* ================= Notes ================== //
   Process ends when slimes are all equal size
   for slime[i] - if atleast one of my neighbour is bigger -> ans = 1
   for slime[i] - both of my neighbours are smaller -> find smart approach
*/
















