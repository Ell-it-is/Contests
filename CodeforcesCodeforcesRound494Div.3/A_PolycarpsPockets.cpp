// time-limit: 1000
// problem-url: https://codeforces.com/contest/1003/problem/A
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
  //std::cin >> tt;
  while (tt--) {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) std::cin >> a[i];
    std::map<int, int> map;
    for (int i = 0; i < n; i++) map[a[i]]++;
    int max = 0;
    for (auto&& [_, cnt] : map) {
      max = std::max(max, cnt);
    }
    std::cout << max << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















