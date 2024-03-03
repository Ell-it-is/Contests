// time-limit: 1000
// problem-url: https://codeforces.com/contest/1916/problem/C
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
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
      std::cin >> a[i];
    }
    std::cout << a.front() << " ";
    
    int odd = a.front() % 2;
    ll sum = a.front();
    for (int k = 2; k <= n; k++) {
      int i = k - 1;
      if (a[i] % 2) odd++;
      sum += a[i];
      
      int cnt = odd / 3;
      if (odd % 3 == 1) {
        cnt += 1;
      }
      std::cout << sum - cnt << " ";
    }
    std::cout << "\n";
  }
}
/* ================= Notes ================== //
   Olya should choose odd a[i] + a[j]

   1. move is k = 2
   2. move is k = 3
   3. move is k = 4
   ...
*/
















