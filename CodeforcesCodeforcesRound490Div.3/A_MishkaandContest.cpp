// time-limit: 1000
// problem-url: https://codeforces.com/contest/999/problem/A
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
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) std::cin >> a[i];
    int ans = 0;
    int i = 0;
    for (; i < n && a[i] <= k; i++) ans++;
    for (int j = n - 1; j >= 0 && a[j] <= k && j > i; j--) ans++; 
    std::cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















