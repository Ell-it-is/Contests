// time-limit: 2000
// problem-url: https://codeforces.com/contest/1932/problem/C
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
    ll n, m;
    std::cin >> n >> m;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) std::cin >> a[i];
    std::string s;
    std::cin >> s;
    
    std::vector<int> b(n);
    int l = std::count(s.begin(), s.end(), 'L');
    int r = l;
    int p = 1;
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == 'L') {
        p = p * a[--l] % m;
      } else {
        p = p * a[r++] % m;
      }
      b[i] = p;
    }
    for (int i = 0; i < n; i++) {
      std::cout << b[i] << " ";
    }
    std::cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















